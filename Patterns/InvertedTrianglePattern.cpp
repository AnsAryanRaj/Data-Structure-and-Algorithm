#include<iostream>
using namespace std;
int main() {
    int n=4;
    int num=1;
    for(int i=n;i>=1;i--) {
        for(int s=0;s<n-i;s++) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            cout<<num;
        }
        num++;
        cout<<endl;
    }
    return 0;
}