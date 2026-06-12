#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array elements : \n";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];

    }

    for(int i = 0; i< num; i++) {

        for(int j = i + 1; j < num ; j++) {

            if(arr[i] == arr[j]) {

                for(int k = j ; k < num - 1 ; k++) {

                    arr[k] = arr[k + 1];
                }

                num--;
                j--;
            }
        }
    }

    cout << "array after removing duplicates : ";

    for(int i = 0; i < num ; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}