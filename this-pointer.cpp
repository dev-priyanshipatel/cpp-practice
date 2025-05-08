#include<iostream>

using namespace std;

class student{
    private:
        string name;
        int grid;
        float cgpa;

    public:
        void setdata( int grid, string name, float cgpa){
            this->grid = grid;
            this->name = name;
            this->cgpa = cgpa;
        }

        void getdata(){
            cout << "Name:" <<name << endl;
            cout << "Grid:" << grid << endl;
            cout << "Cgpa:" << cgpa << endl ;
        }

};

int main(){

    student s1;

    s1.setdata(123 , "pashi patel" , 9);
    s1.getdata();

    return 0;
}