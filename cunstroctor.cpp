#include<iostream>

using namespace std;

class animal{

    private:
        string name;
        string color;
        int age;

    public:

    animal(){

        cout << "Default constructor....";

    }

    animal(string name, string color, int age){

        cout << "parameterized constructor...";
        this->name = name;
        this->color = color;
        this->age = age;
    }

    void animalGetData(){

        cout << "Name:" << this->name << endl;
        cout << "Color:" << this->color << endl;
        cout << "Age:" << this->age << endl;

    }
};

int main(){

    animal a1("zasky", "black", 2);

    a1.animalGetData();

    return 0;
}