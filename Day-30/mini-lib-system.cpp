#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int bookId[MAX];
string title[MAX];
string author[MAX];
bool issued[MAX];

int count = 0;

void addBook() {

    if (count == MAX) {
        cout << "\nLibrary is full !\n";
        return;
    }

    cout << "\nEnter book ID: ";
    cin >> bookId[count];
    cin.ignore();

    cout << "Enter book title: ";
    getline(cin, title[count]);

    cout << "Enter author name: ";
    getline(cin, author[count]);

    issued[count] = false;
    count++;

    cout << "\nBook added successfully!\n";
}

void displayBooks() {

    if (count == 0) {
        cout << "\nNo books available!\n";
        return;
    }

    cout << "\n========== LIBRARY BOOKS ==========\n";

    for (int i = 0; i < count; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID : " << bookId[i] << endl;
        cout << "Title   : " << title[i] << endl;
        cout << "Author  : " << author[i] << endl;

        if (issued[i]) {
            cout << "Status  : Issued" << endl;
        }
        
        else {
            cout << "Status  : Available" << endl;
        }
    }
}

void searchBook() {

    int id;

    cout << "\nEnter Book ID to Search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (bookId[i] == id) {
            cout << "\nBook Found\n";
            cout << "Book ID : " << bookId[i] << endl;
            cout << "Title   : " << title[i] << endl;
            cout << "Author  : " << author[i] << endl;

            if (issued[i]) {
                cout << "Status : Issued" << endl;
            }
            
            else {
                cout << "Status : Available" << endl;
            }

            return;
        }
    }

    cout << "\nBook not found\n";
}

void issueBook() {

    int id;

    cout << "\nEnter book ID to issue : ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (bookId[i] == id) {
            if (issued[i]) {
                cout << "\nBook already issued!\n";
            }
            
            else {
                issued[i] = true;
                cout << "\nBook issued successfully!\n";
            }

            return;
        }
    }

    cout << "\nBook not found!\n";
}

void returnBook() {

    int id;

    cout << "\nEnter book ID to return: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (bookId[i] == id) {
            if (!issued[i]) {
                cout << "\nBook is already available!\n";
            }
            
            else {
                issued[i] = false;
                cout << "\nBook returned successfully!\n";
            }

            return;
        }
    }

    cout << "\nBook not found!\n";
}

void deleteBook() {

    int id;

    cout << "\nEnter book ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (bookId[i] == id) {

            for (int j = i; j < count - 1; j++) {
                bookId[j] = bookId[j + 1];
                title[j] = title[j + 1];
                author[j] = author[j + 1];
                issued[j] = issued[j + 1];
            }

            count--;

            cout << "\nBook deleted successfully\n";
            return;
        }
    }

    cout << "\nBook not found!\n";
}

int main() {

    int choice;

    do {
        cout << "\n========== MINI LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                deleteBook();
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid choice\n";
        }

    } while (choice != 7);

    
    return 0;
}