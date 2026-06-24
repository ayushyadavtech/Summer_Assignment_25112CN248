#include <iostream>
#include <string>
using namespace std;

struct Employee {

    int id;
    string name;
    string department;
    float salary;
};

int main() {

    Employee employees[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> employees[count].id;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, employees[count].name);

                cout << "Enter Department: ";
                getline(cin, employees[count].department);

                cout << "Enter Salary: ";
                cin >> employees[count].salary;

                count++;
                cout << "Employee added successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo employee records found.\n";
                }
                
                else {
                    cout << "\nEmployee Records:\n";

                    for (int i = 0; i < count; i++) {
                        cout << "\nEmployee ID : " << employees[i].id;
                        cout << "\nName        : " << employees[i].name;
                        cout << "\nDepartment  : " << employees[i].department;
                        cout << "\nSalary      : " << employees[i].salary;
                        cout << "\n-----------------------------";
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "\nenter employee ID to search: ";
                cin >> searchId;

                for (int i = 0; i < count; i++) {
                    if (employees[i].id == searchId) {
                        cout << "\nEmployee Found:";
                        cout << "\nEmployee ID : " << employees[i].id;
                        cout << "\nName        : " << employees[i].name;
                        cout << "\nDepartment  : " << employees[i].department;
                        cout << "\nSalary      : " << employees[i].salary;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "\nEmployee not found.\n";
                }

                break;
            }

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}