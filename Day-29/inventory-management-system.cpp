#include <iostream>
#include <string>
using namespace std;

struct Product {

    int id;
    string name;
    int quantity;
    float price;
};

int main() {

    Product products[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add product\n";
        cout << "2. Display products\n";
        cout << "3. Search product\n";
        cout << "4. Update quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nEnter product ID: ";
                cin >> products[count].id;

                cin.ignore();

                cout << "Enter product Name: ";
                getline(cin, products[count].name);

                cout << "Enter quantity: ";
                cin >> products[count].quantity;

                cout << "Enter price: ";
                cin >> products[count].price;

                count++;
                cout << "Product added successfully !\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "No products available\n";
                } else {
                    cout << "\nID\tName\t\tQuantity\tPrice\n";
                    cout << "-------------------------------------------\n";

                    for (int i = 0; i < count; i++) {
                        cout << products[i].id << "\t"
                             << products[i].name << "\t\t"
                             << products[i].quantity << "\t\t"
                             << products[i].price << endl;
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter product ID to search: ";
                cin >> searchId;

                for (int i = 0; i < count; i++) {
                    
                    if (products[i].id == searchId) {
                        cout << "\nProduct found:\n";
                        cout << "ID: " << products[i].id << endl;
                        cout << "Name: " << products[i].name << endl;
                        cout << "Quantity: " << products[i].quantity << endl;
                        cout << "Price: " << products[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found!\n";

                break;
            }

            case 4: {
                int updateId;
                bool found = false;

                cout << "Enter product ID: ";
                cin >> updateId;

                for (int i = 0; i < count; i++) {

                    if (products[i].id == updateId) {
                        cout << "Enter new quantity: ";
                        cin >> products[i].quantity;

                        cout << "Quantity updated successfully !\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found!\n";

                break;
            }

            case 5:
                cout << "Exiting program .\n";
                break;

            default:
                cout << "Invalid choice !\n";
        }

    } while (choice != 5);


    return 0;
}