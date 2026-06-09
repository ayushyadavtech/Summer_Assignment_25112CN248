#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter array element : \n";

    for(int i=0; i< num; i++) {

        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for(int i=0; i< num; i++) {

        if(arr[i] % 2 == 0)
        evenCount++;

        else
        oddCount++;
    }

    cout << "number of even elements = " << evenCount << endl;
    cout << "number of odd elements = " << oddCount << endl;

    return 0;
}