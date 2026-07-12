#include<bits/stdc++.h>
using namespace std;
//here we'll understand need to use friend function instead of member function
//A member operator function can only be called when the left operand is an object of the class.

class sum1{
    int x;
    public:
    sum1(int a){
        x=a;
    }
    sum1 operator+(sum1 obj){
       return sum1(x+obj.x);
    }
    void display1(){
        cout<<"menber fun:"<<x<<endl;
    }
};
class sum2{
    int x;
    public:
    sum2(int a){
        x=a;
    }
    friend sum2 operator+(int b,sum2 obj);
    void display2(){
        cout<<"friend fun:"<<x<<endl;
    }
};
 sum2 operator+(int b,sum2 obj){
 return sum2(b+obj.x);
}

int main(){
    sum1 s1(10);
    sum1 s2=s1+20; //s2=s1.operator+(20);
    s2.display1(); //
    sum2 s3(10);
    sum2 s4=5+s3;//s4=operator+(10,s3);
    s4.display2();

}
