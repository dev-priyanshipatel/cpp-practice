#include<iostream>

using namespace std;

class student {
    public:
        string name;
        int grid;
        float cgpa;
       static string school;
};

string student:: school = "RNW";

int main(){

    student s1;

    s1.name = "piyu patel";
    s1.grid = 1234;
    s1.cgpa = 9.5;

    cout << "Name:" << s1.name << endl;
    cout <<"Grid: " << s1.grid << endl;
    cout << "CGPA:" << s1.cgpa << endl;
    cout << "School:" << student::school << endl;

    return 0;
}