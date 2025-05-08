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
};

class pug : public Dog{
    public :
        bool iscute = true;

        void eat(){
            cout << "Padigree...";
        }

        void getData(){
            cout << "Name : " << this->name  << endl;
            cout << "Age : " << this->age << endl;
            cout << "Color : " << this->color << endl;
            cout << "Cute ? : " << ((this->iscute == true )? "yes" : "No") << endl;
        }
};

int main(){

    pug d1;

    d1.name = "Sheru";
    d1.age = 2;
    d1.color = "white";


    d1.speak();
    d1.bark();
    d1.getData();

    return 0;
}