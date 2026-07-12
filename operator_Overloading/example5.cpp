#include<bits/stdc++.h>
using namespace std;

class Person {

public:

    int age;

    Person(int a) {
        age = a;
    }

    bool operator>(Person obj) {

        return age > obj.age;
    }
    bool operator==(Person obj) {

        return age == obj.age;
    }

};

int main() {

    Person p1(20);
    Person p2(25);

    if (p1 > p2)
        cout << "P1 is older";
    else if (p1 == p2)
        cout << "Same Student";
    else
        cout << "P2 is older";
}