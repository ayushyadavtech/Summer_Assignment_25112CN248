#include<iostream>
using namespace std;

int main() {

    int num;

    cout<< "enter size of array : ";
    cin>> num ;

    int arr[num];

    cout<< "enter array elements : \n";
    for(int i=0; i< num; i++) {

        cin>> arr[i];
    }

    cout<< "Array elements are : ";
    for(int i=0; i< num; i++) {

        cout<< arr[i] << " ";
    }

    return 0;
}