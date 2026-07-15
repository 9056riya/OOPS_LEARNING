#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
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
    
    Animal *ptr = new Dog(); //base-class pointer reference
    //sound fun decision taken at run time program checks ptr actually point to dog object
    ptr->sound();//output:Dog
    Dog *p1=new Dog();
    p1->sound(); //output:Dog
    Animal *p2=new Animal();
    p2->sound(); //output: Animal
    //Dog *p3=new Animal(); invalid
   

    
}