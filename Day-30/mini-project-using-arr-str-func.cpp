#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int patientId[MAX];
string patientName[MAX];
int patientAge[MAX];
string disease[MAX];
int days[MAX];
float bill[MAX];

int count = 0;

void addPatient() {

    if (count == MAX) {
        cout << "\nHospital record is full!\n";
        return;
    }

    cout << "\nEnter patient ID : ";
    cin >> patientId[count];
    cin.ignore();

    cout << "Enter patient name : ";
    getline(cin, patientName[count]);

    cout << "Enter age : ";
    cin >> patientAge[count];
    cin.ignore();

    cout << "Enter disease : ";
    getline(cin, disease[count]);

    cout << "Enter number of days admitted : ";
    cin >> days[count];

    bill[count] = days[count] * 1000;

    count++;

    cout << "\nPatient added successfully!\n";
}

void displayPatients() {

    if (count == 0) {
        cout << "\nNo patient records found !\n";
        return;
    }

    cout << "\n========== PATIENT RECORDS ==========\n";

    for (int i = 0; i < count; i++) {
        cout << "\nPatient " << i + 1 << endl;
        cout << "Patient ID : " << patientId[i] << endl;
        cout << "Name       : " << patientName[i] << endl;
        cout << "Age        : " << patientAge[i] << endl;
        cout << "Disease    : " << disease[i] << endl;
        cout << "Days       : " << days[i] << endl;
        cout << "Bill       : " << bill[i] << endl;
    }
}

void searchPatient() {

    int id;

    cout << "\nEnter patient ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (patientId[i] == id) {
            cout << "\nPatient Found\n";
            cout << "Patient ID : " << patientId[i] << endl;
            cout << "Name       : " << patientName[i] << endl;
            cout << "Age        : " << patientAge[i] << endl;
            cout << "Disease    : " << disease[i] << endl;
            cout << "Days       : " << days[i] << endl;
            cout << "Bill       : " << bill[i] << endl;
            return;
        }
    }

    cout << "\nPatient not found!\n";
}

void updatePatient() {

    int id;

    cout << "\nEnter patient ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        
        if (patientId[i] == id) {
            cin.ignore();

            cout << "Enter new name : ";
            getline(cin, patientName[i]);

            cout << "Enter new age : ";
            cin >> patientAge[i];
            cin.ignore();

            cout << "Enter new disease : ";
            getline(cin, disease[i]);

            cout << "Enter new days : ";
            cin >> days[i];

            bill[i] = days[i] * 1000;

            cout << "\nPatient record updated successfully\n";
            return;
        }
    }

    cout << "\nPatient not found\n";
}

void deletePatient() {

    int id;

    cout << "\nEnter patient ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (patientId[i] == id) {

            for (int j = i; j < count - 1; j++) {
                patientId[j] = patientId[j + 1];
                patientName[j] = patientName[j + 1];
                patientAge[j] = patientAge[j + 1];
                disease[j] = disease[j + 1];
                days[j] = days[j + 1];
                bill[j] = bill[j + 1];
            }

            count--;

            cout << "\nPatient record deleted successfully!\n";
            return;
        }
    }

    cout << "\nPatient not found!\n";
}

void calculateBill() {

    int id;

    cout << "\nEnter patient ID: ";
    cin >> id;

    for (int i = 0; i < count; i++) {

        if (patientId[i] == id) {
            cout << "\nPatient Name : " << patientName[i] << endl;
            cout << "Total Bill   : " << bill[i] << endl;
            return;
        }
    }

    cout << "\nPatient not found!\n";
}

int main() {

    int choice;

    do {
        cout << "\n========== HOSPITAL MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Search Patient\n";
        cout << "4. Update Patient\n";
        cout << "5. Delete Patient\n";
        cout << "6. Calculate Bill\n";
        cout << "7. Exit\n";

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {

            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
                break;

            case 5:
                deletePatient();
                break;

            case 6:
                calculateBill();
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