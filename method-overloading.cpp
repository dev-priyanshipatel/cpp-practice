#include<iostream>

using namespace std;

class math{
    public :
        void add(int , int);
        void add(float , float);
        void add(int , int , int);
};

void math::add(int a, int b){
    cout << "Sum : " << a + b;
}

void math::add(float a, float b){
    cout << "Sum : " << a + b;
}

void math::add(int a, int b, int c){
    cout << "Sum : " << a + b+ c;
}

int main(){

    math m1;

    m1.add(20.2, 30.1f);
    m1.add(20,30,10);

    return 0;
}