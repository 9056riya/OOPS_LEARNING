#include <iostream>
using namespace std;

class Student {
public:
    Student(){
        cout<<"student constructor"<<endl;
    }
    void study() {
        cout << "Studying\n";
    }
};

class Employee {
public:
    Employee(){
        cout<<"employee constructor"<<endl;
    }
    void work() {
        cout << "Working\n";
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(){
        cout<<"TeachingAssistant constructor"<<endl;
    }
    void teach() {
        cout << "Teaching+study\n";
    }
};

int main() {

    TeachingAssistant ta;

    ta.study();
    ta.work();
    ta.teach();
}