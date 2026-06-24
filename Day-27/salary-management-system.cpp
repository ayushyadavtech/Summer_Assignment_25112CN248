#include <iostream>
#include <string>
using namespace std;

struct Employee {

    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main() {

    Employee emp[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[count].id;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, emp[count].name);

                cout << "Enter Basic Salary: ";
                cin >> emp[count].basicSalary;

                emp[count].hra = 0.20 * emp[count].basicSalary;
                emp[count].da = 0.10 * emp[count].basicSalary;

                emp[count].netSalary =
                    emp[count].basicSalary +
                    emp[count].hra +
                    emp[count].da;

                count++;

                cout << "Salary Record Added Successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo records found!\n";
                }
                
                else {
                    cout << "\n===== Employee Salary Records =====\n";

                    for (int i = 0; i < count; i++) {
                        cout << "\nEmployee ID   : " << emp[i].id;
                        cout << "\nName          : " << emp[i].name;
                        cout << "\nBasic Salary  : " << emp[i].basicSalary;
                        cout << "\nHRA (20%)     : " << emp[i].hra;
                        cout << "\nDA (10%)      : " << emp[i].da;
                        cout << "\nNet Salary    : " << emp[i].netSalary;
                        cout << "\n------------------------------";
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "\nEnter Employee ID: ";
                cin >> searchId;

                for (int i = 0; i < count; i++) {
                    if (emp[i].id == searchId) {
                        cout << "\nEmployee Found!";
                        cout << "\nEmployee ID   : " << emp[i].id;
                        cout << "\nName          : " << emp[i].name;
                        cout << "\nBasic Salary  : " << emp[i].basicSalary;
                        cout << "\nHRA           : " << emp[i].hra;
                        cout << "\nDA            : " << emp[i].da;
                        cout << "\nNet Salary    : " << emp[i].netSalary;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "\nEmployee Not Found!\n";
                }

                break;
            }

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);


    return 0;
}