#include <iostream>
using namespace std;

class Student{

public:
    char *name;
    int age;
    float score;
    static int num;  //将num定义为静态成员变量

    Student(char *, int, float);
    void say();
};
