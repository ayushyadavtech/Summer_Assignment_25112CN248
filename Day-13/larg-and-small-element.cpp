#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of array : ";
    cin>>num;

    int arr[num];

    cout << "enter array elements : \n";

    for(int i=0; i< num; i++) {

        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for(int i=0; i< num; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}