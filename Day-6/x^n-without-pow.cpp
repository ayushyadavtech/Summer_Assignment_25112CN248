#include<iostream>
using namespace std;

int main() {

    int x , n;
    long long result = 1;

    cout<<"enter base (x) : ";
    cin>>x;

    cout<<"enter power(n) : ";
    cin>>n;

    for(int i=1; i<=n; i++) {

        result = result * x;
    }

    cout<<x<<"^"<<n <<" = "<<result;



    return 0;
}