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

class  Cat : public Animal{
    public:
        string name;

        void Meow(){
            cout << "Moew ..... Meow...." << endl;
        }

        void getData(){
            cout << "Name : " << this->name  << endl;
            cout << "Age : " << this->age << endl;
            cout << "Color : " << this->color << endl;
        }
        
};

int main(){
    Dog d1;
    Cat c1;

    d1.name = "Dezy...";
    d1.age = 1;
    d1.color = "White";

    c1.name = "Kitti...";
    c1.age =2;
    c1.color = "Black";

    
    d1.getData();
    d1.speak();
    d1.bark();

   
    c1.getData();
    c1.speak();
    c1.Meow();

    return 0;
}