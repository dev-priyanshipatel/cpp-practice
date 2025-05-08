#include<iostream>

using namespace std;

class car{
    private:
        string name;
        string color;
        int speed;
    public :
        void setCarData(string name, string color, int speed){
            this->name = name;
            this->color = color;
            this->speed = speed;
        }
        void getCarData(){
            cout << "Name:" << this->name << endl;
            cout << "Color:" << this->color << endl;
            cout << "Speed:" << this->speed << endl;
            cout << endl;
        }
};

int main(){

    car c1[3];
    int speed;
    string name, color;

    for(int i = 0; i < 3; i++){

        cout << "Enter the name of car:";
        getline(cin, name);

        cout << "Enter the color of car:";
        getline(cin, color);

        cout << "Enter the speed of car:";
        cin >> speed;

        c1[i].setCarData(name, color, speed);

        cin.ignore();

        cout << endl;
    }

    for(int i = 0; i < 3; i++){
        c1[i].getCarData();
    }

    return 0;
}