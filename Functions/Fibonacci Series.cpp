#include<iostream>
using namespace std;
int fibonacci(int n) {
    int a=0, b=1;
    for (int i=1;i<=n;i++) {
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
    }
    // return 0;
}
int main() {
    cout<<fibonacci(20);
    return 0;
}