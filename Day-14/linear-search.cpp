#include<iostream>
using namespace std;

int main() {

    int num , key ;

    cout << "enter size of array : ";
    cin>>num;

    int arr[num];

    cout <<"enter array elements : \n";

    for(int i=0; i< num; i++) {

        cin >> arr[i];
    }

    cout << "enter element to search : ";
    cin >> key;

    bool found = false;

    for(int i= 0; i< num; i++) {

        if(arr[i] == key) {

            cout << "element found at index " << i;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "element not found";
    }

    return 0;
}