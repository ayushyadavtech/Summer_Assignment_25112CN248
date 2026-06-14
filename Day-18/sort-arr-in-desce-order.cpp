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

    for(int i = 0; i < num - 1; i++) {

        for(int j = i + 1; j < num; j++) {

            if(arr[i] < arr[j]) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Array in descending order : ";
    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}