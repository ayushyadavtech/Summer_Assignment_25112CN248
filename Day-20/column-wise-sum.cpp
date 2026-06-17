#include<iostream>
using namespace std;

int main() {

    int rows , cols;

    cout << "enter number of rows and columns : ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "\nenter matrix elements\n";

    for(int i =0 ; i< rows ; i++) {
        for(int j = 0 ; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nColumn wise matrix\n";

    for(int j = 0 ; j < cols ; j++) {

        int sum = 0;

        for(int i =0; i < rows ; i++) {

            sum += arr[i][j];
        }

        cout << "Column wise matrix " << j + 1 << " = " << sum << endl;
    }

    return 0;
}