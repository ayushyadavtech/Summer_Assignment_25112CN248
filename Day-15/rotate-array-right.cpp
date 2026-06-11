#include<iostream>
using namespace std;

int main() {

    int num; 

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array elements : \n";

    for(int i=0; i< num ; i++) {

        cin >> arr[i];
    }

    int last = arr[num - 1];

    for(int i = num - 1 ; i > 0; i--) {

        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    cout << "array after right rotation : ";

    for(int i= 0; i< num; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}