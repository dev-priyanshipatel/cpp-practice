#include<iostream>
#include<vector>

using namespace std;

void insertionArray(vector<int>&);

int main(){

    vector<int> arr(5);

    for(int i = 0; i < arr.size(); i++){
        cout << "Enter the Element of Array : ";
        cin >> arr[i];
    }

    cout << "\n\n----------Before Sorting array--------------------\n\n";
    for(int val : arr){
        cout << val  << " ";
    }

    insertionArray(arr);

     cout << "\n\n----------After Sorting array--------------------\n\n";
    for(int val : arr){
        cout << val  << " ";
    }
    

    return 0;
}

void insertionArray(vector<int>& arr){

    for(int i = 0; i < arr.size() - 1; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0){
            if(key < arr[j] ){
                arr[j + 1] = arr[j]; 
            }else{
                break;
            }
            j--;
        }
        arr[j + 1] = key;
    }

}