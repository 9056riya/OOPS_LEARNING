#include<bits/stdc++.h>
using namespace std;
//Increase Salary using ++(unary operator)
class Employee{
  int salary;
public:
    Employee(int s){
       salary=s;
    }
   void operator++();
   void display();
};
//declaring member
void Employee::operator++(){
    salary+=500;
}
void Employee::display(){
    cout<<"salary:"<<salary<<endl;
}

int main(){
    Employee e(10000);
    ++e;
    e.display();
}
