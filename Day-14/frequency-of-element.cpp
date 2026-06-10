#include<iostream>
using namespace std;

int main() {

    int num , key , count = 0;

    cout << "enter size of array : ";
    cin >> num;

    int arr[num];

    cout<< "enter array elements : \n";
    for(int i=0; i< num; i++) {

        cin >> arr[i];
    }

    cout << "enter element to find frequency : ";
    cin >> key ;

    for(int i=0; i< num; i++) {

        if(arr[i] == key) {
            count++;
        }
    }

    cout << "frequency of " << key << " = " << count;

    return 0;
}