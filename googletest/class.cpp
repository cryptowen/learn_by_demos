#include "class.h"

int Student::num = 0;  //初始化静态成员变量

Student::Student(char *name, int age, float score){
    this->name = name;
    this->age = age;
    this->score = score;
    num++;
}

void Student::say(){
    //在普通成员函数中可以访问静态成员变量
    cout<<name<<"的年龄是 "<<age<<"，成绩是 "<<score<<"（当前共"<<num<<"名学生）"<<endl;
}

int main(){
    Student a("小明", 15, 90);
    a.say();
    cout<<a.name<<"的年龄是"<<a.age<<endl;
    //使用匿名对象
    (new Student("王康", 14, 60))->say();
    return 0;
}
