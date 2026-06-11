#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array element : \n";
    
    for(int i= 0; i< num ; i++) {

        cin >> arr[i];
    }

    int start = 0 , end = num - 1;

    while(start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array : ";
    for(int i = 0; i< num; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}