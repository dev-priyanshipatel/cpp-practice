#include<iostream>

using namespace std;

class stack{

    private:
        int size;
        int top;
        int count;
        int *arr;
    public:
        stack(int size){
            this->size = size;
            this->top = -1;
            this->count = 0;
            this->arr = new int[size];
        }
        ~stack(){
            delete [] arr;
        }

        void push(int data);
        void pop();
        void peek();
        void display();
        void isEmpty();
        void isFull();
        int getSize();
};

void stack::push(int data){

    if(this->top == this->size-1){
        cout << "\n-----------------\n";
        cout << "Stack is overflow..." << endl;
        cout << "-----------------\n\n";
        return;
    }

    this->top++;
    this->arr[this->top] = data;
    this->count++;

    cout << "Data inserted successfully...." << endl;
}

void stack::pop(){

    if(this->top == -1){
        cout << "\n-----------------\n";
        cout << "Stack is Underflow..." << endl;
        cout << "-----------------\n\n";
        return;
    }

    this->arr[this->top] = 0;
    this->top--;
    this->count--;

    cout << "Data popped Successfully ..." << endl;
}

void stack::peek(){

    if(count == 0){

        cout << "\n-----------------\n";
        cout <<"Stack is empty..."<< endl;
        cout << "-----------------\n\n";

    }else{

        cout << this->arr[this->top]  << endl;

    }
}

void stack::display(){

    if(this->count == 0){
        cout << "Stack is empty ..." << endl;
    }

    for(int i = this->count-1; i >= 0; i--){

        cout << "   "<< this->arr[i] << "   " << endl;
        
    }
}

void stack::isEmpty(){

    if(this->count == 0){

        cout << "\n-----------------\n";
        cout << "Yes, stack is empty ..." << endl;
        cout << "-----------------\n\n";

    }else{

        cout << "\n-----------------\n";
        cout << "No , Stack is not empty..." << endl;
        cout << "-----------------\n\n";
    }
}

void stack::isFull(){

    if(this->count == this->size){

        cout << "\n-----------------\n";
        cout << "Yes , stack is full.." << endl;
        cout << "-----------------\n\n";

    }else{

        cout << "\n-----------------\n";
        cout << "No , stack is not full..." << endl;
        cout << "-----------------\n\n";
    }
}

int stack::getSize(){
    return this->count;
}

int main(){

    int size, choice;

    cout <<"Enter the Size of Array: ";
    cin >> size;

    stack stack(size);

    do{
        cout << "1. to Push data in stack" << endl;
        cout << "2. to Pop data in stack" << endl;
        cout << "3. to Peek data in stack" << endl;
        cout << "4. to Display data in stack" << endl;
        cout << "5. to check if stack is empty " << endl;
        cout << "6. to check if stack is full " << endl;
        cout << "7. to get the size of stack" << endl;

        cout << "Enter choice:";
        cin >> choice;

        switch(choice){
            case 1:
            {
                int data;

                cout << "Enter the Data: ";
                cin >> data;

                stack.push(data);
                break;
            }
            case 2:
            {
                stack.pop();
                break;
            }
            case 3:
            {
                stack.peek();
                break;
            }
            case 4:
            {
                stack.display();
                break;
            }
            case 5:
            {
                stack.isEmpty();
                break;
            }
            case 6:
            {
                stack.isFull();
                break;
            }
            case 7:
            {
                cout << "Size of Stack is : " << stack.getSize() << endl;
                break;
            }
            case 0:
            {
                cout << "\n-------------------------- \n";
                cout << "Thank You for using stack..."<< endl;
                cout << "----------------------------\n\n";
            }
        }

    }while(choice != 0);


    return 0;
}