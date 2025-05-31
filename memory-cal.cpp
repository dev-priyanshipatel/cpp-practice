#include<iostream>
#include<vector>

using namespace std;

class MemoryCalc{
    private:
        int id;
        string name;
    public :
        MemoryCalc(int id, string name){
            this->id = id;
            this->name = name;
        }

        void getStudentDetails(){
            cout <<"\n-------------------------------\n";
            cout << "Student name : " <<this->name << endl;
            cout << "Student Name : "<< this->id << endl;
            cout <<"\n-------------------------------\n\n";
        }

        int getId(){
            return this->id;
        }
};

int main(){

    vector<MemoryCalc> student;
    int choice;

    do{
        cout <<"\n-------------------------------\n";
        cout <<" 0. Exit " <<endl;
        cout <<" 1. Add Student "<< endl;
        cout <<" 2. Display Students " << endl;
        cout <<" 3. Remove Student " << endl;
        cout <<" 4. Search Student " << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;

        switch(choice){
            case 0:
            {
                cout <<"\n-------------------------------\n";
                cout << "Exiting...";
                cout <<"\n-------------------------------\n\n";
                break;
            }

            case 1:
            {
                int id;
                string name;

                cout << "Entet Student id : ";
                cin >> id;

                cin.ignore();

                cout << "Enter your name : ";
                getline(cin , name);

                student.push_back(MemoryCalc(id, name));

                cout <<"\n-------------------------------\n";
                cout << "Student added successfully ...";
                cout <<"\n-------------------------------\n\n";

                break;
            }

            case 2:
            {
                for(auto val : student){
                        val.getStudentDetails();
                }
                break;
            }

            case 3:
            {
                int id;

                cout << "Enter student id : ";
                cin >> id;

                bool isFound = false;

                for(auto i = student.begin(); i != student.end(); i++){
                    if(i->getId() == id){
                        isFound = true;
                        student.erase(i);

                        cout <<"\n-------------------------------\n";
                        cout << "Student deleted successfully ...";
                        cout <<"\n-------------------------------\n\n";
                        break;
                    }
                }

                if (isFound == false)
                {
                    cout << "Student Is Not Found..."<<endl;
                }
                break;
            }

            case 4:
            {
                 int id;
                cout << "Enter Id For Search : ";
                cin >> id;
                bool isFound=false;

                for (auto i = student.begin(); i != student.end(); i++)
                {
                    if (i->getId() == id)
                    {
                        isFound = true;
                        i->getStudentDetails();
                        cout << "Student Searched Succesfully..."<<endl;
                        break;
                    }
                
                }
                if (isFound == false)
                {
                    cout << "Student Is Not Found..."<<endl;
                }

                break;
            }
        }

    }while(choice != 0);

    return 0;
}