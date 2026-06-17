#include<iostream>
using namespace std;

int main() {

    int rows , cols;

    cout << "enter number of rows and columns : ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "enter matrix elements\n";
    for(int i = 0 ; i< rows ; i++) {
        for(int j = 0 ; j < cols; j++) {

            cin >> arr[i][j];
        }
    }

    cout << "\nRow wise sum\n";

    for(int i = 0 ; i < rows ; i++) {

        int sum = 0;

        for(int j = 0; j < cols ; j++) {

            sum += arr[i][j];
        }

        cout << "sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}