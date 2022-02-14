#include<iostream>
#include<string>
using namespace std;

class Student {
    public:

    void score(int a){
        cout << "Score: " << a << endl;
    }

    void score(double a){
        cout << "Score: " << a << endl;
    }

    void score(){
        cout << "none";
    }
};


int main(){
    Student s1;
    s1.score(90);
    s1.score(90.5);
    s1.score();
    return 0;
}