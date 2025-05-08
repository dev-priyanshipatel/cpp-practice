#include<iostream>

using namespace std;

class student{
    public:
        int grid , age;
        string name , course;
};

int main(){

    student priyanshi;

    priyanshi.grid = 1001;
    priyanshi.age = 21;
    priyanshi.name = "priyanshi patel";
    priyanshi.course = "Full Stack Development";

    cout << priyanshi.grid << endl;
    cout << priyanshi.age << endl;
    cout << priyanshi.name << endl;
    cout << priyanshi.course << endl;
    
    priyanshi.grid = 1002;
    cout << priyanshi.grid << endl;
    





    return 0;
}