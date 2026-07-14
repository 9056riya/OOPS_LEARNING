#include<bits/stdc++.h>
using namespace std;
/* 
          Person
         /      \
        /        \
   Student    Employee
        \        /
         \      /
      TeachingAssistant  

*/
class Person{
public:
    void name(){
        cout<<"I am person"<<endl;
    }
};


class Student:public Person{
public:
    void study(){
        cout<<"I am student"<<endl;
    }
};


class Employee:public Person{
public:
    void work(){
        cout<<"I am Employee"<<endl;
    }
};

class TeachingAssistant:public Student,public Employee{
public:
    void teach(){
        cout<<"I am TeachingAssistant"<<endl;
    }
};

int main(){
    TeachingAssistant t;
    t.teach();
    t.work();
    t.study();
    // ta.display();   // Error! (Diamond Problem) is problem when ta is inheriting person properties two times via stud and employes so compiler get which to use via stud or employee
}



