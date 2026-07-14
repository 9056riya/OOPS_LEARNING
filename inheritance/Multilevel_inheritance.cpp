#include<bits/stdc++.h>
using namespace std;

class person{
public:
   void show(){
        cout<<"I am person"<<endl;
    }

};
class student:public person{
public:
    void print(){
        cout<<"I am student"<<endl;
    }
        
};

class EngineeringStudent:public student{
public:
    void code(){
        cout<<"I am engineering student"<<endl;
    }
        
};

int main(){
    EngineeringStudent e;
    e.print();
    e.show();
    e.code();
    return 0;
}