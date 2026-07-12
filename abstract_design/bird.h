#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class Bird{
  public:
  virtual void fly()=0; //pure virtual function forced child class to implent this function
  virtual void eat()=0;
};
class eagle:public Bird{
public:
    void fly(){
        std::cout<<"eagle is flying"<<endl;
    }
    void eat(){
        std::cout<<"eagle is eating"<<endl;
    }
};
class pegion:public Bird{
public:
    void fly(){
        std::cout<<"pegionis flying"<<endl;
    }
    void eat(){
        std::cout<<"pegion is eating"<<endl;
    }
};

#endif