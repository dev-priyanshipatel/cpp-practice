#include<iostream>
#include<vector>

using namespace std;

void Display(vector<int> );
void Sort(vector<int>&);
int binarySearch(vector<int>& , int , int , int);


int main(){

    int size, key;

    cout << "Enter the size of array: ";
    cin >> size;

    vector<int> arr(size);

    for(int i = 0; i < size; i++){

        cout <<" Enter the Elements of Array : ";
        cin >> arr[i];

    }

    

   cout << "\n-------------------Before---------------------\n ";
   Display(arr);

   Sort(arr);

    cout << "\n-------------------After---------------------\n ";
   Display(arr);

   cout << "\nEnter key :";
    cin >> key;

   cout << endl;
   int idx =  binarySearch(arr, 0, size - 1, key);

   if(idx == -1){
        cout << "Oops ! Element not found !";
    } else {
        cout << "Yayy ! Element found at index : " << idx << endl;
    }


    return 0;
}

void Display(vector<int> arr){

    for(int val : arr){
        cout << val << " ";
    }

}

void Sort(vector<int>& arr){

    int temp;

    for(int i = 0; i < arr.size() - 1; i++){

        bool flag = false;

        for(int j = 0; j < arr.size() - i - 1; j++){

            if(arr[j] > arr[j + 1]){

                flag = true;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }

        }
        if(flag == false){
                break;
            }

    }
}

int binarySearch(vector<int>& arr, int start, int end, int key){
    
    if(start > end)
        return -1;

        int mid = (start + end) / 2;

        if(key < arr[mid]){
            return binarySearch(arr , start, mid - 1, key);
        }else if(key > arr[mid]){
            return binarySearch(arr, mid + 1, end, key);
        }else{
            return mid;
        }

}