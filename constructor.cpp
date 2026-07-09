#include<bits/stdc++.h>
using namespace std;

class student{
    public:
   string name;
   float* cgptr;

   //paramaterized constructor
   student(string name,float cg){
    cout<<"hey i am constructor\n";
     this->name=name;
     cgptr=new float;
     *cgptr=cg;
     
   }
   //custom copy constructor(this make shallow copy when dynamically memory allocation)
   /*student(student &obj){
     this->name=obj.name;
     this->cgptr=obj.cgptr;
   }*/
  //make deep copy(by making copy of pointer as well)
  student(student &obj){
     this->name=obj.name;
     cgptr=new float;
     *cgptr=*obj.cgptr;
   }
   void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgptr<<endl;
   }
};

int main(){
    student s1("ram",8.5);
    student s2(s1);//default copy constructor
    s1.getInfo();
    *(s2.cgptr)=9.2;
    s1.getInfo();
    s2.name="neha";
    s2.getInfo();

    return 0;
}