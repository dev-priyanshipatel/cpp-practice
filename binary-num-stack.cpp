#include<iostream>
#include<stack>
using namespace std;

void conertToBinary(int);

int main(){

    int n;

    cout << "Enter Number :";
    cin >> n;

    conertToBinary(n);

    return 0;
}

void conertToBinary(int n){

    stack<int> binaryStack;

    while(n > 0){

        int rem = n % 2;
        binaryStack.push(rem);
        n = n/ 2;
    }

    for(int i = binaryStack.size()-1; i >= 0; i--){
        cout << binaryStack.top();
        binaryStack.pop();
    }

}