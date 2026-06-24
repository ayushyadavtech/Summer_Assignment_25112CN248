#include <iostream>
#include <string>
using namespace std;

struct Book {

    int id;
    string title;
    string author;
    bool issued;
};

int main() {

    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add book\n";
        cout << "2. Display all books\n";
        cout << "3. Search book\n";
        cout << "4. Issue book\n";
        cout << "5. Return book\n";
        cout << "6. Exit\n" ;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nEnter Book ID : ";
                cin >> books[count].id;

                cin.ignore();

                cout << "Enter Book Title : ";
                getline(cin, books[count].title);

                cout << "Enter Author Name : ";
                getline(cin, books[count].author);

                books[count].issued = false;
                count++;

                cout << "Book Added Successfully !\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "\nNo Books Available\n";
                }
                
                else {
                    cout << "\n===== Book Records =====\n";

                    for (int i = 0; i < count; i++) {
                        cout << "\nBook ID : " << books[i].id;
                        cout << "\nTitle   : " << books[i].title;
                        cout << "\nAuthor  : " << books[i].author;
                        cout << "\nStatus  : "
                             << (books[i].issued ? "Issued" : "Available");
                        cout << "\n------------------------";
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "\nEnter Book ID: ";
                cin >> searchId;

                for (int i = 0; i < count; i++) {
                    if (books[i].id == searchId) {
                        cout << "\nBook Found!";
                        cout << "\nBook ID : " << books[i].id;
                        cout << "\nTitle   : " << books[i].title;
                        cout << "\nAuthor  : " << books[i].author;
                        cout << "\nStatus  : "
                             << (books[i].issued ? "Issued" : "Available");

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "\nBook Not Found!\n";

                break;
            }

            case 4: {
                int issueId;
                bool found = false;

                cout << "\nEnter Book ID to Issue: ";
                cin >> issueId;

                for (int i = 0; i < count; i++) {
                    if (books[i].id == issueId) {
                        found = true;

                        if (!books[i].issued) {
                            books[i].issued = true;
                            cout << "Book Issued Successfully!\n";
                        }
                        
                        else {
                            cout << "Book Already Issued!\n";
                        }
                        break;
                    }
                }

                if (!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 5: {
                int returnId;
                bool found = false;

                cout << "\nEnter Book ID to Return: ";
                cin >> returnId;

                for (int i = 0; i < count; i++) {
                    if (books[i].id == returnId) {
                        found = true;

                        if (books[i].issued) {
                            books[i].issued = false;
                            cout << "Book Returned Successfully!\n";
                        }
                        
                        else {
                            cout << "Book Was Not Issued!\n";
                        }
                        break;
                    }
                }

                if (!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 6:
                cout << "\nExiting Program\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);


    return 0;
}