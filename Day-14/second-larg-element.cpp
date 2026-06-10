#include<iostream>
using namespace std;

int main () {

    int num;

    cout <<"enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array element : \n";

    for(int i=0; i< num; i++) {

        cin >> arr[i];
    }

    int largest , secondLargest ;

    if(arr[0] > arr[1]) {

        largest = arr[0];
        secondLargest = arr[1];
    }

    else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for(int i= 2; i< num; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "second largest element = " << secondLargest;

    return 0;
}