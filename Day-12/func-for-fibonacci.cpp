#include<iostream>
using namespace std;

void fibonacci(int num) {

    int firstNum = 0;
    int secondNum = 1;

    for(int i=1; i<= num; i++) {

        cout<< firstNum << " ";

        int next = firstNum + secondNum ;
        firstNum = secondNum;
        secondNum = next;

    }
}

int main() {

    int num;
    
    cout<< "enter number of terms : ";
    cin>> num;

    fibonacci(num);

    return 0;
}