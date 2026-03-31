#include<iostream>
using namespace std;
int main() {
    int arr[4]={23,56,40,20};
    arr[3]=69;
    for (int i=0;i<4;i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}