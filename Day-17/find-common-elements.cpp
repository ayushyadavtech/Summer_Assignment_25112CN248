#include<iostream>
using namespace std;

int main() {

    int num1 , num2 ;

    cout << "enter size of first array : ";
    cin >> num1;

    int arr1[num1];

    cout << "enter elements of first array : \n";
    for(int i = 0; i < num1 ; i++) {
        cin >> arr1[i];
    }

    cout << "enter size of second array : ";
    cin >> num2;

    int arr2[num2];

    cout << "enter elements of second array : \n";
    for(int i = 0; i < num2 ; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of arrays : ";

    for(int i = 0 ; i < num1; i++) {

        bool found = false;

        for(int j = 0 ; j < num2 ; j++) {

            if(arr1[i] == arr2[j]) {

                found = true;
                break;
            }
        }

        if(found) {

            cout << arr1[i] << " ";
        }
    }

    return 0;
}