## 写makefile

```
$ ls
Makefile
$ make
echo 'a' > a.txt
echo 'b' > b.txt
cat a.txt b.txt > result.txt
$ cat result.txt
a
b
$ echo 'more a' >> a.txt
$ make
cat a.txt b.txt > result.txt
$ cat result.txt
a
more a
b
$ rm b.txt
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
