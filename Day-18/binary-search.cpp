#include<iostream>
using namespace std;

int main() {

    int num ;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout << "enter sorted array elements : \n";
    for(int i = 0 ; i < num; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "enter element to search : ";
    cin >> key;

    int low = 1;
    int high = num - 1;
    int found = -1;

    while(low <= high) {

        int mid  = (low + high)/2;

        if(arr[mid] == key) {
            found = mid;
            break;
        }

        else if(key < arr[mid]) {
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }
    }

    if(found != -1) {
        cout << "element found at index = " << found;
    }

    else {
        cout << "element not found";
    }

    return 0;
}