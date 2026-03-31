#include<iostream>
using namespace std;
int product(int arr[], int s) {
    int product=1;
    for (int i=0;i<s;i++) {
        product=product*arr[i];
    }
    return product;
}
int main() {
    int arr[]={20,4,60};
    int s=sizeof(arr)/sizeof(arr[0]);
    int result=product(arr,s);
    cout<<result;
    return 0;
}