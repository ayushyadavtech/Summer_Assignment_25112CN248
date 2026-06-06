#include<iostream>
using namespace std;

int main() {

    int rows;

    cout<<"enter number of rows : ";
    cin>>rows;

    for(int i=1; i<=rows; i++) {

        for(int j=1; j<= rows - i; j++) {

            cout<<" ";
        }

        for(int j=1 ; j<= (2 * i - 1); j++) {

            cout<< char ('A' + i - 1);
        }

        cout << endl;
    }

    return 0;
}