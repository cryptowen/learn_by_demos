# 在Python中使用C++类（Cython方法）

## 操作步骤
1. 执行`python setup.py build`
1. 在`build`目录下找到`rect.so`文件，切换到该目录
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


## 参考链接
- [Using C++ in Cython](http://docs.cython.org/src/userguide/wrapping_CPlusPlus.html)，
比较详细的一个教程，本demo中所有代码均由此而来，缺失的几个步骤可以参见上文。
- [官方文档](https://docs.python.org/2/extending/building.html#building)
- [知乎上一个相关问题的回复](https://www.zhihu.com/question/23003213)
