#include<iostream>

using namespace std;

class student{
    private:
        string name;
        int grid;
        float cgpa;

    public:
        void setdata(){
            cin.ignore();

            cout << "Name:";
            getline(cin , name);

            cout << "GrId:";
            cin >> grid;

            cout << "CGPA:";
            cin >> cgpa;

        }

        void getdata(){
            cout << "Name:" <<name <<" " << "Grid:" << grid << " " << "Cgpa:" << cgpa << " " ;
        }

};

int main(){

    student s1;

    s1.setdata();
    s1.getdata();

    return 0;
}