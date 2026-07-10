#include<bits/stdc++.h>
using namespace std;
//adding fraction
class fraction{
  int num,denom;

  public:
    fraction(int n,int d){
       num=n;
       denom=d;
    }
    fraction operator+(fraction obj){
        fraction temp(0,0);
        if ( denom == 0) {
           cout << "Invalid Fraction! Denominator cannot be zero." << endl;
           exit(0);
        }
        
        temp.num=num*obj.denom+obj.num*denom;
        temp.denom=denom*obj.denom;
        
        int g = __gcd(temp.num, temp.denom);

        temp.num /= g;
        temp.denom /= g;
        return temp;
    }
    void display(){
        cout<<num<<"/"<<denom<<endl;
    }
};
int main(){
    fraction f1(2,0);
    fraction f2(1,0);
    fraction f3=f1+f2;
    f3.display();
    return 0;
}