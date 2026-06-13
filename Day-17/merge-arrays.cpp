#include<iostream>
using namespace std;

int main() {

    int num1 , num2;

    cout << "enter size of first array : ";
    cin >> num1;

    int arr1[num1];

    cout << "enter elements of first array : \n";

    for(int i = 0; i < num1; i++) {

        cin >> arr1[i];
    }

    cout << "enter size of second array : ";
    cin >> num2;

    int arr2[num2];

    cout << "enter elements of second array : \n";

    for(int i=0 ; i < num2 ; i++) {

        cin >> arr2[i];
    }

    int merged[num1 + num2];

    for(int i = 0; i < num1 ; i++) {

        merged[i] = arr1[i];
    }

    for(int i =0; i < num2; i++) {

        merged[num1 + i] = arr2[i];
    }

    cout << "Merged array : ";

    for(int i =0; i < num1 + num2 ; i++) {

        cout << merged[i] << " ";
    }

    return 0;
}