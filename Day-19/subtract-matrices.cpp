#include<iostream>
using namespace std;

int main() {

    int rows, cols;

    cout << "enter elements of rows : ";
    cin >> rows;

    cout << "enter elements of columns : ";
    cin >> cols;

    int A[100][100] , B[100][100] , sub[100][100];

    cout << "\nenter elements of first matrix\n";

    for(int i =0 ; i < rows ; i++) {

        for(int j = 0; j < cols; j++) {

            cin >> A[i][j];
        }
    }

    cout << "\nenter elements of second matrix\n";

    for(int i =0 ; i < rows; i++) {

        for(int j = 0; j < cols ; j++) {

            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

            sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "\nsubtract of matrices\n";

    for(int i = 0; i < rows ; i++) {

        for(int j = 0; j < cols; j++) {

            cout << sub[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}