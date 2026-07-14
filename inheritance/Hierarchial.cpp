#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a Person\n";
    }
};

class Student : public Person {
public:
    void study() {
        cout << "Studying\n";
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "Teaching\n";
    }
};

class Staff : public Person {
public:
    void manage() {
        cout << "Managing\n";
    }
};

int main() {

    Student s;
    Teacher t;
    Staff st;

    s.display();
    s.study();

    t.display();
    t.teach();

    st.display();
    st.manage();
}