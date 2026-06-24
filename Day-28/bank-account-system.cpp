#include <iostream>
#include <string>
using namespace std;

struct BankAccount {

    int accountNumber;
    string accountHolder;
    float balance;
};

int main() {

    BankAccount account;
    int choice;
    float amount;

    cout << "===== Create Bank Account =====\n";

    cout << "enter account number : ";
    cin >> account.accountNumber;

    cin.ignore();

    cout << "enter account holder name: ";
    getline(cin, account.accountHolder);

    cout << "enter initial balance: ";
    cin >> account.balance;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Deposit Amount: ";
                cin >> amount;

                account.balance += amount;

                cout << "Amount Deposited Successfully!\n";
                break;

            case 2:
                cout << "Enter Withdrawal Amount: ";
                cin >> amount;

                if (amount <= account.balance) {
                    account.balance -= amount;
                    cout << "Amount Withdrawn Successfully!\n";
                }
                
                else {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 3:
                cout << "Current Balance: " << account.balance << endl;
                break;

            case 4:
                cout << "\n===== Account Details =====\n";
                cout << "Account Number : " << account.accountNumber << endl;
                cout << "Account Holder : " << account.accountHolder << endl;
                cout << "Balance        : " << account.balance << endl;
                break;

            case 5:
                cout << "Thank You !\n";
                break;

            default:
                cout << "Invalid Choice !\n";
        }

    } while (choice != 5);


    return 0;
}