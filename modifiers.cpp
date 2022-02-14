#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        int marks1;
    private:
        int marks2;
};

int main() {
    Student s1;
    s1.marks1 = 97;
    // s1.marks2 ==> private
}