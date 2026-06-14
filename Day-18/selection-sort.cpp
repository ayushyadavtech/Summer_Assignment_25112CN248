#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of array : ";
    cin >> num ;

    int arr[num];

    cout << "enter array elements : \n";

    for(int i = 0; i < num; i++) {

        cin >> arr[i];
    }

    for(int i = 0 ; i< num - 1; i++) {

        int minIndex = i;

        for(int j = i + 1; j < num; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "sorted array : ";
    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}