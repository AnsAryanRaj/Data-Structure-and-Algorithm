#include<iostream>
using namespace std;
int Sumofdigits(int n) {
    int digsum=0;
    while (n>0) {
        int lastdig=n%10;
        n=n/10;
        digsum=digsum+lastdig;
    }
    return digsum;
}
int main() {
    cout<<"sum="<<Sumofdigits(1236)<<endl;
    return 0;
}