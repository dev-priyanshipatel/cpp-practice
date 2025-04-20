#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template class for Student
template <typename T>
class MemoryCalculate {
public:
    T id;
    string name;

    // Constructor
    MemoryCalculate(T id, string name) {
        this->id = id;
        this->name = name;
    }

    // Display function
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

// Function prototypes
void addStudent(vector<MemoryCalculate<int>> &students);
void displayStudents(vector<MemoryCalculate<int>> &students);
void removeStudentByID(vector<MemoryCalculate<int>> &students, int id);
void searchStudentByID(vector<MemoryCalculate<int>> &students, int id);

int main() {
    vector<MemoryCalculate<int>> students;
    int choice, id;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove Student by ID\n";
        cout << "4. Search Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                cout << "Enter ID to remove: ";
                cin >> id;
                removeStudentByID(students, id);
                break;
            case 4:
                cout << "Enter ID to search: ";
                cin >> id;
                searchStudentByID(students, id);
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

// Add student
void addStudent(vector<MemoryCalculate<int>> &students) {
    int id;
    string name;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore(); // clear input buffer
    getline(cin, name);

    MemoryCalculate<int> student(id, name);
    students.push_back(student);

    cout << "Student added successfully.\n";
}

// Display all students
void displayStudents(vector<MemoryCalculate<int>> &students) {
    if (students.size() == 0) {
        cout << "No students to display.\n";
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }
}

// Remove student by ID
void removeStudentByID(vector<MemoryCalculate<int>> &students, int id) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "Student with ID " << id << " removed.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

// Search student by ID
void searchStudentByID(vector<MemoryCalculate<int>> &students, int id) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "Student found:\n";
            students[i].display();
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}
