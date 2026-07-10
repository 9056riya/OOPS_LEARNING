#include<bits/stdc++.h>
using namespace std;

class Complex{
    
    public:
    int real,imaginary;
    /*Complex(int r, int i) {
        real = r;
        imag = i;
    }*/
    Complex(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    Complex operator+(Complex obj){
        Complex temp(0,0);
        temp.real = real + obj.real;
        temp.imaginary = imaginary+ obj.imaginary;

      return temp;
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(5,5);
    Complex c3=c1+c2;
    cout<<c3.real<<"+"<<c3.imaginary<<"i";
    return 0;
}