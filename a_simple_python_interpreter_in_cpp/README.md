# 用C++写一个极简Python解释器

在一些场景中，我们需要用在C++中嵌入一些Python代码（如用C++写高性能网游服务器框架，
用Python来实现一些具体功能），此时我们需要在C++中和Python代码交互。

因为使用最广泛的Python解释器是C实现的，因此可以很方便的从C/C++代码中调用其API。


## 一个简单的Python解释器

执行：
```
g++ -o py_interpreter py_interpreter.cpp -I/Users/huwenchao/anaconda/include/python2.7 -Wall -DPy_DEBUG -g -lpython
```

其中`-I`后的内容改为你的Python的include目录，如果不知道可以使用命令`which python`得到一个你的python文件目录，形如
`/path/to/python_home/bin/python`，则你的python include目录为`/path/to/python_home/include/python2.7`（如果你用的是2.7版本的话，如果不是，请自行修改）。

使用效果：

![](./simple_py_interpreter.gif)


## 参考链接
- [Embedding Python in Another Application](https://docs.python.org/2/extending/embedding.html)，官方文档的解释，比较清晰
- [EMBEDDING PYTHON – TUTORIAL – PART 1](http://realmike.org/blog/2012/07/08/embedding-python-tutorial-part-1/)
- [Embedding Python in C/C++: Part I](http://www.codeproject.com/Articles/11805/Embedding-Python-in-C-C-Part-I)
