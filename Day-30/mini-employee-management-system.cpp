#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int empId[MAX];
string empName[MAX];
string department[MAX];
float salary[MAX];

int count = 0;

void addEmployee() {

    if (count == MAX) {
        cout << "\nEmployee record is full\n";
        return;
    }

    cout << "\nEnter employee ID : ";
    cin >> empId[count];
    cin.ignore();

    cout << "Enter employee name: ";
    getline(cin, empName[count]);

    cout << "Enter department: ";
    getline(cin, department[count]);

    cout << "Enter salary: ";
    cin >> salary[count];

    count++;

    cout << "\nEmployee added successfully\n";
}

void displayEmployees() {

    if (count == 0) {
        cout << "\nNo employee records found!\n";
        return;
    }

    cout << "\n========== EMPLOYEE RECORDS ==========\n";

    for (int i = 0; i < count; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << empId[i] << endl;
        cout << "Name        : " << empName[i] << endl;
        cout << "Department  : " << department[i] << endl;
        cout << "Salary      : " << salary[i] << endl;
    }
}

void searchEmployee() {

    int id;

    cout << "\nEnter employee ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (empId[i] == id) {
            cout << "\nEmployee Found\n";
            cout << "Employee ID : " << empId[i] << endl;
            cout << "Name        : " << empName[i] << endl;
            cout << "Department  : " << department[i] << endl;
            cout << "Salary      : " << salary[i] << endl;
            return;
        }
    }

    cout << "\nEmployee not found!\n";
}

void updateEmployee() {
    int id;

    cout << "\nEnter employee ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (empId[i] == id) {
            cin.ignore();

            cout << "Enter new name: ";
            getline(cin, empName[i]);

            cout << "Enter new department: ";
            getline(cin, department[i]);

            cout << "Enter new salary: ";
            cin >> salary[i];

            cout << "\nEmployee record updated successfully\n";
            return;
        }
    }

    cout << "\nEmployee not found!\n";
}

void deleteEmployee() {

    int id;

    cout << "\nEnter employee ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (empId[i] == id) {

            for (int j = i; j < count - 1; j++) {
                empId[j] = empId[j + 1];
                empName[j] = empName[j + 1];
                department[j] = department[j + 1];
                salary[j] = salary[j + 1];
            }

            count--;

            cout << "\nEmployee deleted successfully!\n";
            return;
        }
    }

    cout << "\nEmployee not found!\n";
}

int main() {

    int choice;

    do {
        cout << "\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {

            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 6);

    
    return 0;
}