#include <iostream>
using namespace std;

int main() {

    int num, choice;

    cout << "Enter size of array: ";
    cin >> num;

    int arr[num];

    cout << "Enter array elements:\n";

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Display array\n";
        cout << "2. Search element\n";
        cout << "3. Find maximum element\n";
        cout << "4. Find minimum element\n";
        cout << "5. Find sum of elements\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                cout << "Array Elements: ";
                for (int i = 0; i < num; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 2: {
                int key;
                cout << "Enter element to search: ";
                cin >> key;

                bool found = false;
                for (int i = 0; i < num; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at index " << i << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Element not found." << endl;
                }
                break;
            }

            case 3: {
                int max = arr[0];
                for (int i = 1; i < num; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Maximum element = " << max << endl;
                break;
            }

            case 4: {
                int min = arr[0];
                for (int i = 1; i < num; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Minimum element = " << min << endl;
                break;
            }

            case 5: {
                int sum = 0;

                for (int i = 0; i < num; i++) {
                    sum += arr[i];
                }
                cout << "Sum of elements = " << sum << endl;
                break;
            }

            case 6:
                cout << "Exiting Program ." << endl;
                break;

            default:
                cout << "Invalid choice !" << endl;
        }

    } while (choice != 6);


    return 0;
}