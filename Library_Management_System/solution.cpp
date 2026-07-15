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
    
    void Register(string courseName){
        this->courseName=courseName;
    }
    void Register(string courseName,int semNo){
        this->courseName=courseName;
        this->semNo=semNo;
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
class Attendance{
public:
    int days;
    Attendance(int x){
        days=x;
    }
    Attendance operator+(Attendance &obj){
      return Attendance(days+obj.days);
    }
};


int main(){
   
   // Function Overloading
    Student s1(101, "Riya", 21);

    s1.Register("OOP");
    s1.displayInfo();

    s1.Register("DBMS", 5);
    s1.displayInfo();

    Teacher t1("Rahul", 45, "Operating System");

    // Runtime Polymorphism
    Person *p;

    p = &s1;
    p->displayInfo();

    p = &t1;
    p->displayInfo();

    // Operator Overloading
    Attendance a1(20);
    Attendance a2(18);

    Attendance total = a1 + a2;

    cout << "Total Attendance : " << total.days << endl;

    return 0;
}

