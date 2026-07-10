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
   //destructor tilde symbol ~
   ~student(){
    cout<<"hey i am destructor\n";
    delete cgptr; //memory leak if not deleted dynamically alotted memory
   }

   void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgptr<<endl;
   }
};
int main(){
    student s1("ram",8.5);
    s1.getInfo();
    return 0;
}