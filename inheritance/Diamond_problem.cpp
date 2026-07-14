#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a Person" << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "I am a stu" << endl;
    }
};

class Employee : virtual public Person {
public:
    void work() {
        cout << "I am a em" << endl;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    void teach() {
        cout << "I am a TA" << endl;
    }
};

int main() {

    TeachingAssistant ta;

    ta.display();      // ✅ No ambiguity

    return 0;
}