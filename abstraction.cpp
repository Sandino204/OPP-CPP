#include<iostream>
#include<string>
using namespace std;

class AbstractStudent {
    virtual void scholarship() = 0;
};

class Student: AbstractStudent{
    public:
        void scholarship(){
            cout<<"Student";
        }
};

int main(){
    Student s1;
    s1.scholarship();
}