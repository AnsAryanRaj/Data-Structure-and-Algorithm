#include<iostream>
using namespace std;
int Nthfibonacci(int n) {
    int a=0 , b=1;
    if (n==1) {
        cout<<"0";
    }
    else if (n==2) {
        cout<<"1";
    }
    else {
        int next;
        for (int i=3;i<=n;i++) {
            next=a+b;
            a=b;
            b=next;
        }
        cout<<b<<" ";
    }
}

int main() {
    cout<<Nthfibonacci(10);
    return 0;
}