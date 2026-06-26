#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
int age[MAX];
float marks[MAX];
int count = 0;

void addStudent() {

    if (count == MAX) {
    
        cout << "\nRecord is full!\n";
        return;
    }

    cout << "\nEnter roll number: ";
    cin >> roll[count];

    cin.ignore();

    cout << "Enter name: ";
    getline(cin, name[count]);

    cout << "Enter age: ";
    cin >> age[count];

    cout << "Enter marks: ";
    cin >> marks[count];

    count++;

    cout << "\nStudent record added successfully!\n";
}

void displayStudents() {

    if (count == 0) {
    
        cout << "\nNo records found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < count; i++) {
    
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << roll[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Age         : " << age[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }
}

void searchStudent() {

    int r;
    cout << "\nEnter roll number to search: ";
    cin >> r;

    for (int i = 0; i < count; i++) {
    
        if (roll[i] == r) {
        
            cout << "\nStudent Found\n";
            cout << "Roll Number : " << roll[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Age         : " << age[i] << endl;
            cout << "Marks       : " << marks[i] << endl;
            return;
        }
    }

    cout << "\nStudent not found!\n";
}

void updateStudent() {

    int r;
    cout << "\nEnter roll number to update: ";
    cin >> r;

    for (int i = 0; i < count; i++) {

        if (roll[i] == r) {
        
            cin.ignore();

            cout << "Enter new name: ";
            getline(cin, name[i]);

            cout << "Enter new age: ";
            cin >> age[i];

            cout << "Enter new marks: ";
            cin >> marks[i];

            cout << "\nRecord updated successfully !\n";
            return;
        }
    }

    cout << "\nStudent not found!\n";
}

void deleteStudent() {

    int r;
    cout << "\nEnter roll number to delete: ";
    cin >> r;

    for (int i = 0; i < count; i++) {
    
        if (roll[i] == r) {
        
            for (int j = i; j < count - 1; j++) {
            
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                age[j] = age[j + 1];
                marks[j] = marks[j + 1];
            }

            count--;

            cout << "\nRecord deleted successfully !\n";
            return;
        }
    }

    cout << "\nStudent not found!\n";
}

int main() {

    int choice;

    do {
    
        cout << "\n====== Student Record Management System ======\n";
        cout << "1. Add student\n";
        cout << "2. Display students\n";
        cout << "3. Search student\n";
        cout << "4. Update student\n";
        cout << "5. Delete student\n";
        cout << "6. Exit\n";

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
        
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid choice !\n";
        }

    } while (choice != 6);


    return 0;
}