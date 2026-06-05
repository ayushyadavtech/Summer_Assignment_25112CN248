#include<iostream>
using namespace std;

int main() {

    int rows;

    cout<<"enter number of pattern : ";
    cin>>rows;

    char ch = 'A';

    for(int i=1; i<=rows; i++) {

        for(int j=1; j<=i; j++) {

            cout<< ch;
        }

        cout<< endl;
        ch++;
    }

    return 0;
}