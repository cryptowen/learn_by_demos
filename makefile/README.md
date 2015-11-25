# 写makefile

## 参考文章
- [Make 命令教程](http://www.ruanyifeng.com/blog/2015/02/make.html)，
阮一峰写的make教程，通俗易懂
- [sed 简明教程](http://coolshell.cn/articles/9104.html)，
陈皓写的sed教程，用于实现第二个正则表达式例子
- [sed 文档及示例](http://man.linuxde.net/sed)

## 普通

进入文件夹make_normal，演示如下：

```
$ ls
Makefile
$ make      # 生成result.txt，因为依赖的a.txt和b.txt不存在，所以先生成这两个文件
echo 'a' > a.txt
echo 'b' > b.txt
cat a.txt b.txt > result.txt
$ cat result.txt
a
b
$ echo 'more a' >> a.txt    # 更改a.txt，导致源文件时间戳晚于目标文件，重新make会重新生成result
$ make
cat a.txt b.txt > result.txt
$ cat result.txt
a
more a
b
$ rm b.txt  # 删除b.txt，重新make会重新生成
$ make
echo 'b' > b.txt
cat a.txt b.txt > result.txt
$ ls
Makefile  README.md  a.txt  b.txt  result.txt
$ make clean
rm *.txt
$ ls
Makefile  README.md
```


## 带正则匹配的make

目标： 对所有`_test.txt`结尾的文件，复制一份不带该后缀的文件

执行过程：

```
$ ls
Makefile  a_test.txt  b_test.txt  c_test.txt
$ make
cp a_test.txt a
cp b_test.txt b
cp c_test.txt c
$ ls
Makefile  a  a_test.txt  b  b_test.txt  c  c_test.txt
$ make clean
rm a b c
$ ls
Makefile  a_test.txt  b_test.txt  c_test.txt
$ touch d_test.txt      # 增加d_test.txt文件，make时会重新生成
$ echo 'a' > a_test.txt     # 修改a_test.txt文件，make时会重新生成
$ make
cp a_test.txt a
cp d_test.txt d
```
