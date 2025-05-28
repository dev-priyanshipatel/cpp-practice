#include<iostream>
#include<vector>

using namespace std;

class Node{
    public :
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class linkeadList{
    private :
        Node *HEAD;
        int count;
    public :
        linkeadList(){
            this->HEAD = nullptr;
            this->count = 0;
        }

        bool isEmpty(){
            if(count == 0 || HEAD == nullptr)
                return true;
            else
                return false;    
        }

        void addAtStart(){
            int data;

            cout << "Enter the data to insert  : ";
            cin >> data;

            Node *newnode = new Node(data);

            newnode->next = HEAD;
            HEAD = newnode;

            cout << "\n----------------------------------------\n";
            cout << "Successfully inserted at the Start.";
            cout << "\n----------------------------------------\n\n";
            count++;

        }

        void updateData(){

            if(isEmpty()){
                cout << "\n-----------------------\n";
                cout << "List is Empty ";
                cout << "\n-----------------------\n";
            }
            int pos, data;

            cout << "Enter position :";
            cin >> pos;

            if(pos > count || pos <= 0){
                cout << "\n---------------------\n";
                cout << "Invalid Position";
                cout << "\n----------------------\n\n";
                return;
            }

            cout << "Enter new data : ";
            cin >> data;

            

            Node *temp;
            temp = HEAD;

            for(int i = 0; i < pos-1; i++){
                temp = temp->next;
            }
            temp->data = data;

            cout << "\n----------------------------------------\n";
            cout << "Data Updated Successfully.";
            cout << "\n----------------------------------------\n\n";
        }

        void deleteAtPosition(){

            if(isEmpty()){
                cout << "\n-----------------------\n";
                cout << "List is Empty ";
                cout << "\n-----------------------\n";
            }

            int pos;

            cout << "Enter position :";
            cin >> pos;

            if(pos > count || pos <= 0){
                cout << "\n---------------------\n";
                cout << "Invalid Position";
                cout << "\n----------------------\n\n";
                return;
            }

            Node *deleteNode;

            if(pos == 1){
                deleteNode = HEAD;
                HEAD = HEAD->next;
            }else {
            Node *temp = HEAD;

            for (int i = 1; i < pos - 1; i++){  
                temp = temp->next;
            }

            deleteNode = temp->next;
            temp->next = deleteNode->next;
            }

            delete deleteNode;
            count--;

            cout << "\n----------------------------------------\n";
            cout << "Node Deleted Successfully.";
            cout << "\n----------------------------------------\n\n";
        }

        void viewData(){

            if(isEmpty()){
                cout << "\n-----------------------\n";
                cout << "List is Empty ";
                cout << "\n-----------------------\n";
            }

            Node *temp;
            temp = HEAD;

            cout << "\n-----------------------\n";
            while(temp != nullptr){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL";
            cout << "\n-----------------------\n";

        }
};

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    int pIdx = start + count;

    int temp = arr[pIdx];
    arr[pIdx] = arr[start];
    arr[start] = temp;

    int i = start;
    int j = end;

    while (i < pIdx && j > pIdx)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pIdx && j > pIdx)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    return pIdx;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pIdx = partition(arr, start, end);

    quickSort(arr, 0, pIdx - 1);
    quickSort(arr, pIdx + 1, end);
}

void Display(vector<int> &arr)
{
    cout << "\n-----------------------------------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n-----------------------------------------\n";
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

int main(){

    linkeadList list;
    int choice;

    do{
        cout << "\n------------------\n";
        cout << " 1. Linked list" << endl;
        cout << " 2. binary search " << endl;
        cout << " 3. quick sort " << endl;
        cout << " 4. Exit " << endl;
        cout << "enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
            {
                int choice;

                do{
                    cout << "\n------------------------\n";
                    cout << " 1 . Add at start " << endl;
                    cout << " 2. Update data " << endl;
                    cout << " 3. Delete at any position " << endl;
                    cout << " 4. Veiw Nodes " << endl;
                    cout << " 5. Exit from linked list " << endl;
                    cout << " Enter choice : " << endl;
                    cin >> choice;

                    switch(choice){
                        
                        case 1:
                        {
                            list.addAtStart();
                            break;
                        }

                        case 2:
                        {
                            list.updateData();
                            break;
                        }

                        case 3:
                        {
                            list.deleteAtPosition();
                            break;
                        }

                        case 4:
                        {
                            list.viewData();
                            break;
                        }

                        case 5:
                        {
                            cout << "\n\nExiting from linked list .......\n\n   ";
                            break;
                        }
                    }

                }while(choice != 5);
                break;
            }

            case 2:
            {

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

                break;
            }

            case 3:
            {

                int size;
                cout << "Enter size of array: ";
                cin >> size;

                vector<int> arr(size, 0);

                for (int i = 0; i < size; i++)
                {
                    cout << "Enter data: ";
                    cin >> arr[i];
                }

                Display(arr);
                quickSort(arr, 0, arr.size() - 1);
                Display(arr);

                break;
            }

            case 4:
            {
                break;
            }
        
        }

    }while(choice != 4);
    return 0;

}