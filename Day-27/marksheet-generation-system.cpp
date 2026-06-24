#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int rollNo;
    float marks[5], total = 0, percentage;
    char grade;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "Enter Roll Number : ";
    cin >> rollNo;

    cout << "\nenter marks of 5 subjects :\n";
    
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';

    else if (percentage >= 75)
        grade = 'B';

    else if (percentage >= 60)
        grade = 'C';

    else if (percentage >= 40)
        grade = 'D';

    else
        grade = 'F';

    cout << "\n\n===== STUDENT MARKSHEET =====\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1
             << " Marks : " << marks[i] << endl;
    }

    cout << "---------------------------\n";
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (grade != 'F')
        cout << "Result      : PASS" << endl;

    else
        cout << "Result      : FAIL" << endl;


    return 0;
}