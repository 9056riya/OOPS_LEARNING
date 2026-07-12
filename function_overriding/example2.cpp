#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog\n";
    }
};

int main() {
    
    Animal *ptr = new Dog();
    //this decision is made at compile time
    ptr->sound();//output:Animal here we make object of dog but get output from animal class+
    
    Dog *p1=new Dog();
    p1->sound(); //output:Dog
    Animal *p2=new Animal();
    p2->sound(); //output: Animal

    
}