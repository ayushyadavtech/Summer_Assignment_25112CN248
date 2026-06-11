#include<iostream>
using namespace std;

int main() {

    int num ;

    cout << "enter size of array : ";
    cin >> num ;

    int arr[num];

    cout << "enter array element : \n";
    for(int i=0; i< num; i++) {
        cin >> arr[i];
    }

    int index = 0;

    for(int i= 0; i < num; i++) {

        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < num) {
        arr[index] = 0;
        index++;
    }

    cout << "array after moving zeros to end : ";
    for(int i = 0; i< num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}