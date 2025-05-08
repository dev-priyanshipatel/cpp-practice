#include<iostream>

using namespace std;

class Animal{
    public:
        int age;
        string color;

        void speak(){
            cout << "Speaking ......" << endl;
        }
};

class Dog : public Animal{
    public:
        string name;

        void bark(){
            cout << "Bhauuu Bhauu....." << endl;
        }

        void getData(){
            cout << "Name : " << this->name  << endl;
            cout << "Age : " << this->age << endl;
            cout << "Color : " << this->color << endl;
        }
};

int main(){

    Dog d1;

    d1.name = "Sheru";
    d1.age = 2;
    d1.color = "white";

    d1.speak();
    d1.bark();
    d1.getData();

    return 0;
}