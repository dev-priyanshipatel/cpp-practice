#include<iostream>
#include<stack>
using namespace std;

bool checkPalindrome(string);


int main(){

    string str;

    cout << "Enter string : ";
    getline(cin , str);

    if(checkPalindrome(str) == true){
        cout << "Its palindrome..." << endl;
    }else{
        cout << "Its not a palindrome..." << endl;
    }
    
    return 0;
}

bool checkPalindrome(string str){

    stack<char> palindromeStack;

    for(char c : str){
        palindromeStack.push(c);
    }

    for(char c : str){
        if(palindromeStack.top() != c){
            return false;
        }
        palindromeStack.pop();
    }

    return true;
}

