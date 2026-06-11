#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array elements : \n";

    for(int i=0 ; i< num; i++) {

        cin >> arr[i];
    }

    int first = arr[0];

    for(int i=0; i< num - 1; i++) {

        arr[i] = arr[i + 1];
    }

    arr[num - 1] = first;

    cout << "array after left rotation : ";
    for(int i = 0; i< num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}