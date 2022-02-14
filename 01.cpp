#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;
        int id;
        string course;
    
    void introduce(){
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The course of the student is "<<course<<endl;
        cout<<"The id of the student is "<<id<<endl;
    }
};


int main(){
    Student s1;
    s1.name = "Caio";
    s1.id = 1;
    s1.course = "CSE";
    s1.introduce();
    return 0;
}