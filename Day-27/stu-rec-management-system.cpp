#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {

    Student students[100] ;
    int count = 0;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice ;

        switch (choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> students[count].rollNo;

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, students[count].name);

                cout << "Enter Marks: ";
                cin >> students[count].marks;

                count++;
                cout << "Student record added successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo records found.\n";
                } 
                
                else {
                    cout << "\nStudent Records:\n";

                    for (int i = 0; i < count; i++) {
                        cout << "\nRoll No: " << students[i].rollNo;
                        cout << "\nName: " << students[i].name;
                        cout << "\nMarks: " << students[i].marks;
                        cout << "\n-------------------";
                    }
                }
                break;

            case 3: {
                int roll;
                bool found = false;

                cout << "\nEnter Roll Number to Search: ";
                cin >> roll;

                for (int i = 0 ; i < count; i++) {

                    if (students[i].rollNo == roll) {
                        cout << "\nStudent Found:";
                        cout << "\nRoll No: " << students[i].rollNo;
                        cout << "\nName: " << students[i].name;
                        cout << "\nMarks: " << students[i].marks;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "\nStudent not found.\n";
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