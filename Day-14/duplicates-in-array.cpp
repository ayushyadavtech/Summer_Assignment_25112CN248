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

    cout << "duplicates elements are : ";

    for(int i=0 ; i< num; i++) {

        bool isDuplicate = false;

        for(int k =0; k < i; k++) {
            if(arr[i] == arr[k]) {
                
                isDuplicate = true;
                break;
            }
        }

        if(isDuplicate)
        continue;

        int count = 0;
        
        for(int j = i + 1; j< num; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > 0) {

            cout << arr[i] << " ";
        }
    }

    return 0;
}