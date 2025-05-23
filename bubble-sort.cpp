#include<iostream>
#include<vector>

using namespace std;

int main(){

    int temp;

    vector<int> arr(5);

    for(int i = 0; i < arr.size(); i++){

        cout << "Input the Elements : ";
        cin >> arr[i];
    }

    cout << "\n----------Before Sorting array--------------------\n";
    for(int val : arr){
        cout << val << " ";
    }

    for(int i = 0; i < arr.size() - 1; i++){ // for passes
        bool flag = false;

        for(int j = 0; j < arr.size() - 1; j++){ // for comparision

            if(arr[j] > arr[j + 1]){
                flag = true;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(flag == false){
            break;
        }
        cout << "\n-----------Pass - " << i + 1<< "-----------------\n";
        for(int val : arr){
            cout << val << " ";
        }
    }

    cout << "\n----------After Sorrting array--------------------\n";
    for(int val : arr){
        cout << val << " ";
    }

    return 0;
}