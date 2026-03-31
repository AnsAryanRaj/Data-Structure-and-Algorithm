#include<iostream>
using namespace std;
void unique(int arr[],int s) {
    for (int i=0;i<s;i++) {
        int count=0;
        for (int j=0;j<s;j++) {
            if (arr[i]==arr[j]) {
                count++;
            }

        }
        if (count==1) {
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    int arr[]={23,46,68,79,68,23};
    int s=sizeof(arr)/sizeof(arr[0]);
    unique(arr,s);
    return 0;
}