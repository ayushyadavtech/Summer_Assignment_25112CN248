#include <iostream>
using namespace std;

int main() {

    int num1 , num2;

    cout << "enter size of first sorted array : ";
    cin >> num1;

    int arr1[num1];

    cout << "enter elements of first sorted array:\n";

    for (int i = 0; i < num1; i++) {
        cin >> arr1[i];
    }

    cout << "enter size of second sorted array: ";
    cin >> num2;

    int arr2[num2];

    cout << "Enter elements of second sorted array:\n";

    for (int i = 0; i < num2; i++) {
        cin >> arr2[i];
    }

    int merged[num1 + num2];

    int i = 0, j = 0, k = 0;

    while (i < num1 && j < num2) {

        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        }
        
        else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < num1) {
        merged[k++] = arr1[i++];
    }

    while (j < num2) {
        merged[k++] = arr2[j++];
    }

    cout << "Merged Sorted Array: ";
    for (int i = 0; i < num1 + num2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}