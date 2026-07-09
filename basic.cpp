#include<bits/stdc++.h>
using namespace std;

class teacher{  
    //attributes/entities
    public:
  string name;
  string dept;
  string gender;
  double salary;
  int age;
  //member function/methods
  void changeDept(string new_dept){
    dept=new_dept;
  }
  void put(string a,string d,string g,double s,int x){
    name=a;
    dept=d;
    gender=g;
    salary=s;
    age=x;
  }
  void show(){
    cout<<"name:"<<name<<endl;
    cout<<"dept:"<<dept<<endl;
    cout<<"gender:"<<gender<<endl;
    cout<<"salary:"<<salary<<endl;
    cout<<"age:"<<age<<endl;
  }
};
class acount{
  private:  //data hiding(encapsulation)
    string password;
    double balance;
  public:
    string username;
    string email;
    string account_number;
    
};
int main(){
 teacher t1;
 t1.put("Riya","IT","Female",500000.0,35);
 //before
 t1.show();
 t1.changeDept("CSE");
 //after
 t1.show();

    return 0;
}