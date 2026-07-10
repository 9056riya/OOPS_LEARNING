#include<bits/stdc++.h>
using namespace std;
  //same function name in same class with different parameters
class A{
    int a,b;
   public:
   int sum(int a,int b){
    cout<<"sum of two numbers:"<<endl;
    return a+b;
   }
   int sum(int a,int b,int c){
    cout<<"sum of three numbers:"<<endl;
    return a+b+c;
   }
   double sum(double a,double b){
    cout<<"sum of two double numbers:"<<endl;

    return a+b;
   }
};

int main(){
     A obj;
     cout<<obj.sum(5,10)<<endl;
     cout<<obj.sum(5,10,15)<<endl;
     cout<<obj.sum(5.5,10.5)<<endl;
    return 0;
}