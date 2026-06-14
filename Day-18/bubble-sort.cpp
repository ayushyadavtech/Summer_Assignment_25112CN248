#include<iostream>
using namespace std;

int main() {

    int num ;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array elements : \n";

    for(int i = 0; i < num ; i++) {

        cin >> arr[i];
    }

    for(int i = 0 ; i < num - 1 ; i++) {

        for(int j = 0; j < num - 1 - i ; j++) {

            if(arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "sorted array : ";
    for(int i = 0; i<num ; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}