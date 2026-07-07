#include<iostream>
using namespace std;
int main() {
    int arr[]={34,69,39,75,93};
    int n=5;
    int val=69;// element to be deleted
    for (int i=n-1;i>1;i--) {
        arr[i+1]=arr[i];
    }
    n--;
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}