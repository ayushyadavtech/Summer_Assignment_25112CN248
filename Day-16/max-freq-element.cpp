#include<iostream>
using namespace std;

int main() {

    int num ; 

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    for(int i = 0; i < num; i++) {

        cin >> arr[i];
    }

    int maxFreq = 0;
    int maxElement;

    for(int i=0 ; i < num ; i++) {

        int count = 1;

        for(int j = i + 1 ; j < num ; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency = " << maxElement << endl ;
    cout << "Frequency = " << maxFreq << endl;


    return 0;
}