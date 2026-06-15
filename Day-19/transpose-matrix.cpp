#include<iostream>
using namespace std;

int main() {

    int rows , cols;

    cout << "enter number of rows : ";
    cin >> rows;

    cout << "enter number of columns : ";
    cin >> cols;

    int matrix[100][100];

    cout << "\nenter matrix elements\n";
    for(int i = 0; i< rows ; i++) {
        for(int j = 0 ; j< cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nTranspose matrix\n";

    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {

            cout << matrix[j][i] << " ";
        }

        cout << endl;
    }


    return 0;
}