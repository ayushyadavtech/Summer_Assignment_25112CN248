#include<iostream>
using namespace std;

int main() {

    int num , target ;

    cout << "enter size of array : ";
    cin >> num ;

    int arr[num];

    cout << "enter array element : \n";
    for(int i = 0; i < num; i++) {

        cin >> arr[i];
    }

    cout << "enter target sum : ";
    cin >> target ;

    bool found = false ;
    
    for(int i = 0; i < num; i++) {
        for(int j = i + 1 ; j < num ; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if(!found) {

        cout << "no pair found.";
    }


    return 0;
}