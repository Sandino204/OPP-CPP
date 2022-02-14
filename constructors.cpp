#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        string name;
        int id;
        string course;
    public:    
        Student(string n, int i, string c){
            name = n;
            id = i;
            course = c;
        }
        void introduce(){
            cout<<"The name of the student is "<<name<<endl;
            cout<<"The course of the student is "<<course<<endl;
            cout<<"The id of the student is "<<id<<endl;
        }
};


int main(){
    Student s1("Caio", 1, "Course");
    s1.introduce();
    return 0;
}
