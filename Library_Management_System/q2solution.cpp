#include<bits/stdc++.h>
using namespace std;

class Person{
    
public:
    string name;
    int age;
    Person(string s,int x){
        name=s;
        age=x;
    }
    virtual void displayInfo()=0;//pure virtual function
    virtual void membership()=0;
    virtual ~Person() {}
};

class Teacher:public Person{
    
public:
    string subject;
    Teacher(string name,int age,string subject)
    : Person(name,age)
   {
       this->subject=subject;
   }

   void displayInfo(){
      cout << "----- Teacher Details -----" << endl;
       cout<<"Name:"<<name<<endl;
       cout<<"Age:"<<age<<endl;
       cout<<"Subject:"<<subject<<endl;
       cout<<endl;
   }
   void membership(){
     cout<<"Teacher membership"<<endl;
   }

};

class Student:public Person{

public:
    int RollNo;
    string courseName;
    int semNo;
   
    
    Student(int x,string s,int a):Person(s,a){
       RollNo=x;
       courseName = "";
       semNo = 0;
    }
    void borrow(){
      cout<<"student borrowed";
    }
    void borrow(string bookname){
        cout<<"student borrowed"<<bookname<<endl;
    }
    void borrow(string bookname,int nodays){
        cout << "Student borrowed: " << bookname << endl;
        cout << "Issued for: " << nodays << " days" << endl;
    }

    void membership(){
       cout<<"student membership"<<endl;
   }

    void displayInfo(){
       cout << "----- Student Details -----" << endl;
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
        cout << "Roll No   : " << RollNo << endl;

        if (courseName != "") {
            cout << "Course    : " << courseName << endl;
        }

        if (semNo != 0) {
            cout << "Semester  : " << semNo << endl;
        }

        cout << endl;
   }

};

class Fine {
public:
    double amount;

    Fine(double amount) {
        this->amount = amount;
    }

    // Operator Overloading
    Fine operator+(const Fine &other) {
        Fine temp(this->amount + other.amount);
        return temp;
    }
};

int main(){
   
   // Creating Objects
    Student s1(101, "Riya", 21);
    Teacher t1("Rahul", 45, "Operating System");


    // ---------------------------------
    // 1. Function Overloading
    // ---------------------------------

    cout << "===== Function Overloading =====" << endl;

    s1.borrow();

    s1.borrow("OOP");

    s1.borrow("DBMS", 5);

    cout << endl;


    // ---------------------------------
    // 2. Runtime Polymorphism
    // ---------------------------------

    cout << "===== Runtime Polymorphism =====" << endl;

    Person *p;

    // Base class pointer pointing to Student
    p = &s1;

    p->displayInfo();
    p->membership();

    cout << endl;

    // Same base class pointer pointing to Teacher
    p = &t1;

    p->displayInfo();
    p->membership();

    cout << endl;


    // ---------------------------------
    // 3. Operator Overloading
    // ---------------------------------

    cout << "===== Operator Overloading =====" << endl;

    Fine f1(100);
    Fine f2(50);

    Fine total = f1 + f2;

    cout << "Fine 1     : " << f1.amount << endl;
    cout << "Fine 2     : " << f2.amount << endl;
    cout << "Total Fine : " << total.amount << endl;


    return 0;
}

