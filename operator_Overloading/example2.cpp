#include<bits/stdc++.h>
using namespace std;
//adding time in hr and min 1hr 20min +2hr 50min
class Time{
    int hr,min;
    public:
    Time(int h,int m){
        hr=h;
        min=m;
    }
    Time operator+(Time obj){
      Time temp(0,0);
      temp.hr=hr+obj.hr;
      temp.min=min+obj.min;
      if(temp.min>=60){
         temp.hr++;
         temp.min-=60;
        }
       return temp;
    }
    void display(){
        cout<<hr<<"hr"<<min <<"min"<<endl;
    }
};
int main(){
    Time t1(1,25);
    Time t2(5,55);
    Time t3=t1+t2;
    t3.display();
    return 0;
}