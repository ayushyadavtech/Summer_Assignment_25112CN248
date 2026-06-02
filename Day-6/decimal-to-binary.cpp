#include<iostream>
using namespace std;

int main() {

    int num;
    long binary = 0;
    int place = 1;

    cout<<"enter a decimal number : ";
    cin>>num;

    while(num > 0) {

        int remainder = num % 2;  //get binary digit
        binary = binary + (remainder * place);
        place *= 10;
        num /= 2;
    }

    cout<<"Binary number = "<<binary;

    return 0;
}