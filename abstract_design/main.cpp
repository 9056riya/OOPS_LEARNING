#include<bits/stdc++.h>
using namespace std;
#include"bird.h"
 //pointer pass by reference
void birddoesomething(Bird *&bird){
    bird->eat();
    bird->fly();
}
int main(){
    Bird *bird=new eagle();//base-class pointer reference point to any derived-class object.
    birddoesomething(bird);
    return 0;
}