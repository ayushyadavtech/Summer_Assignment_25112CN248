#include<iostream>
using namespace std;

int main() {

    int rows1 , cols1 , rows2 , cols2 ;

    cout << "enter rows and columns of first matrix : ";
    cin >> rows1 >> cols1;

    cout << "enter rows and columns of second matrix : ";
    cin >> rows2 >> cols2;

    if(cols1 != rows2) {
        cout << "matrix multiplication is not possible.";
        return 0;
    }

    int A[rows1][cols1] , B[rows2][cols2] , C[rows1][cols2];

    cout << "\nenter elements of first matrix\n";
    for(int i = 0; i < rows1 ; i++) {
        for(int j = 0; j < cols1 ; j++) {

            cin >> A[i][j];
        }
    }

    cout << "\nenter elements of second matrix\n";
    for(int i = 0 ; i < rows2 ; i++) {
        for(int j = 0 ; j < cols2 ; j++) {

            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rows1 ; i++) {
        for(int j = 0; j < cols2 ; j++) {

            C[i][j] = 0;
        }
    }

    for(int i = 0; i < rows1 ; i++) {
        for(int j = 0; j < cols2 ; j++) {
            for(int k = 0 ; k < cols1 ; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    cout << "\nResultant matrix\n";

    for(int i = 0; i < rows1 ; i++) {
        for(int j = 0; j < cols2 ; j++) {
            cout << C[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}