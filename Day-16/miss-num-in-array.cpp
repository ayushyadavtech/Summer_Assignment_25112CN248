#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter value of num : ";
    cin>> num;

    int arr[num - 1];

    cout << "enter " << num-1 << " elements : \n";

    for(int i=0; i< num - 1 ; i++) {

        cin >> arr[i];
    }

    int actualSum = 0;
    for(int i=0; i < num - 1 ; i++) {

        actualSum += arr[i];
    }

    int expectedSum = num * (num + 1) / 2;

    cout << "Missing number = " << expectedSum - actualSum ;

    return 0;
}