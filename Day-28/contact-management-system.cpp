#include <iostream>
#include <string>
using namespace std;

struct Contact {

    string name;
    string phone;
};

int main() {

    Contact contacts[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {

            case 1:
                cout << "\nEnter name : ";
                getline(cin, contacts[count].name);

                cout << "Enter phone number : ";
                getline(cin, contacts[count].phone);

                count++;

                cout << "Contact added successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo contacts found!\n";
                } else {
                    cout << "\n===== Contact List =====\n";

                    for (int i = 0; i < count; i++) {
                        cout << "\nName  : " << contacts[i].name;
                        cout << "\nPhone : " << contacts[i].phone;
                        cout << "\n----------------------";
                    }
                }
                break;

            case 3: {
                string searchName;
                bool found = false;

                cout << "\nEnter name to search: ";
                getline(cin, searchName);

                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == searchName) {
                        cout << "\nContact Found !";
                        cout << "\nName  : " << contacts[i].name;
                        cout << "\nPhone : " << contacts[i].phone;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Contact not found !\n";

                break;
            }

            case 4: {
                string deleteName;
                bool found = false;

                cout << "\nEnter name to delete: ";
                getline(cin, deleteName);

                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == deleteName) {

                        for (int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }

                        count--;
                        found = true;

                        cout << "Contact deleted successfully!\n";
                        break;
                    }
                }

                if (!found)
                    cout << "Contact not found!\n";

                break;
            }

            case 5:
                cout << "\nExiting program\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);


    return 0;
}