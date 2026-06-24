#include <iostream>
using namespace std;

int main() {
    
    const int totalSeats = 10;
    bool seats[totalSeats] = {false}; // false = available
    int choice, seatNo;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. View Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Available Seats Count\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nSeat status :\n";
                for (int i = 0; i < totalSeats; i++) {
                    cout << "Seat " << i + 1 << " : ";
                    if (seats[i])
                        cout << "Booked\n";
                    else
                        cout << "Available\n";
                }
                break;

            case 2:
                cout << "Enter seat number (1-10) : ";
                cin >> seatNo;

                if (seatNo < 1 || seatNo > totalSeats) {
                    cout << "Invalid seat number!\n";
                }
                else if (seats[seatNo - 1]) {
                    cout << "Seat already booked!\n";
                }
                else {
                    seats[seatNo - 1] = true;
                    cout << "Ticket booked successfully!\n";
                }
                break;

            case 3:
                cout << "Enter seat number to cancel: ";
                cin >> seatNo;

                if (seatNo < 1 || seatNo > totalSeats) {
                    cout << "Invalid seat number!\n";
                }
                else if (!seats[seatNo - 1]) {
                    cout << "Seat is already available!\n";
                }
                else {
                    seats[seatNo - 1] = false;
                    cout << "Ticket cancelled successfully!\n";
                }
                break;

            case 4: {
                int available = 0;

                for (int i = 0; i < totalSeats; i++) {
                    if (!seats[i])
                        available++;
                }

                cout << "Available seats: "
                     << available << "/" << totalSeats << endl;
                break;
            }

            case 5:
                cout << "Thank You !\n";
                break;

            default:
                cout << "Invalid Choice !\n";
        }

    } while (choice != 5);


    return 0;
}