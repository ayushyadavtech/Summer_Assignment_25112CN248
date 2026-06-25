#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str1 , str2;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str1);

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Display string\n";
        cout << "2. Find length\n";
        cout << "3. Reverse string\n";
        cout << "4. Concatenate another string\n";
        cout << "5. Compare with another string\n";
        cout << "6. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

            case 1:
                cout << "String: " << str1 << endl;
                break;

            case 2:
                cout << "Length = " << str1.length() << endl;
                break;

            case 3: {
                string rev = str1;
                reverse(rev.begin(), rev.end());
                cout << "Reversed string: " << rev << endl;
                break;
            }

            case 4:
                cout << "Enter another string: ";
                getline(cin, str2);
                cout << "Concatenated String: " << str1 + str2 << endl;
                break;

            case 5:
                cout << "Enter another string: ";
                getline(cin, str2);

                if (str1 == str2)
                    cout << "Strings are equal." << endl;

                else
                    cout << "Strings are not equal." << endl;
                break;

            case 6:
                cout << "Exiting Program ." << endl;
                break;

            default:
                cout << "Invalid choice !" << endl;
        }

    } while (choice != 6);



    return 0;
}