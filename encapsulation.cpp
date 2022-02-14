#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        int score;
    public:
        void setScore(int s) { score = s; }
        int getScore() { return score; }
};

int main() {
    Student s1;
    s1.setScore(100);
    cout << s1.getScore() << endl;
}