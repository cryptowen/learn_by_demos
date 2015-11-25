# 在Python中使用C++类

## 使用Cython方法
1. 切换到`cython`目录下
1. 执行`python setup.py build_ext --inplace`，当前目录会生成`rect.cpp`,
`rect.so`和`build`文件夹。build文件夹为中间临时文件夹，cpp文件为生成so用的中间cpp代码，
so文件中包含了需要的文件
1. 在当前文件夹打开一个python解释器，即可引入`import rect`
1. 使用示例：

```
In [1]: import rect

In [2]: r = rect.PyRectangle(0, 0, 5, 5)

In [3]: r.getHeight()
Out[3]: 5

In [4]: r.getArea()
Out[4]: 25

In [5]: r.x0
Out[5]: 0

In [6]: r.x1
---------------------------------------------------------------------------
AttributeError                            Traceback (most recent call last)
<ipython-input-6-1a1a3632ad5d> in <module>()
----> 1 r.x1

AttributeError: 'rect.PyRectangle' object has no attribute 'x1'

In [8]: r.x0=1

In [9]: r.getLength()
Out[9]: 4

In [10]: r.getArea()
Out[10]: 20
```

## 使用swig进行C扩展
1. 进入`swig_c`文件夹
2. 执行命令`swig -python example.i`生成各种中间文件
1. 执行明光`python setup.py build_ext --inplace`生成so文件
1. 在当前目录打开Python解释器，引入`example`模块，执行效果如下

> 【注意】此处的C代码未对溢出情况进行处理，出错时仅返回0

```
In [1]: import example

In [2]: example.fact(10)
Out[2]: 3628800

In [3]: example.fact(100)
Out[3]: 0
```

## 使用swig进行C++ 类扩展
1. 进入`swig_cpp_class`文件夹
2. 执行命令`swig -c++ -python great_class.i`生成各种中间文件
1. 执行明光`python setup.py build_ext --inplace`生成so文件
1. 在当前目录打开Python解释器，引入`great_class`模块，执行效果如下

```
In [1]: import great_class

In [2]: c = great_class.Great()

In [3]: c.setWall(5)

In [4]: c.getWall()
Out[4]: 5
```

## 参考链接
- [Using C++ in Cython](http://docs.cython.org/src/userguide/wrapping_CPlusPlus.html)，
比较详细的一个教程，本demo中所有代码均由此而来，缺失的几个步骤可以参见上文。
- [官方文档](https://docs.python.org/2/extending/building.html#building)
- [知乎上一个相关问题的回复](https://www.zhihu.com/question/23003213)
- [swig官方文档关于如何让python使用c++类的部分](http://www.swig.org/Doc1.3/Python.html#Python_nn20)
- [逆世界：让 C++ 走进 Python](http://zhuoqiang.me/bring-cpp-class-to-python-through-cython.html)，一个实现c++和python跨语言多台问题的方案和解释
