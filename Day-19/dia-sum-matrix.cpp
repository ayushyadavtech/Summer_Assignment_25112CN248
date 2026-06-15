#include<iostream>
using namespace std;

int main() {

    int num;

    cout << "enter size of square matrix : ";
    cin >> num;

    int arr[100][100];
    int sum = 0;

    cout << "enter matrix elements : \n";
    for(int i = 0; i < num ; i++) {
        for(int j = 0 ; j < num; j++) {

            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < num; i++) {

        sum += arr[i][i];
    }

    cout << "sum of main diagonal elements = " << sum;


    return 0;
}