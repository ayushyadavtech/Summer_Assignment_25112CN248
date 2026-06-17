#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter order of matrix : ";
    cin >> num;

    int arr[num][num];

    cout << "enter matrix elements\n";

    for(int i = 0; i < num; i++) {
        for(int j= 0; j < num; j++) {

            cin >> arr[i][j];
        }
    }

    bool symmetric = true;

    for(int i = 0; i < num; i++) {
        for(int j = 0 ; j < num ; j++) {
            if(arr[i][j] != arr[j][i]) {
                symmetric = false;
                break;
            }
        }

        if(!symmetric) {
            break;
        }
    }

    if(symmetric) {
        cout << "Matric is symmetric.";
    }

    else {
        cout << "Matrix is not symmetric.";
    }



    return 0;
}