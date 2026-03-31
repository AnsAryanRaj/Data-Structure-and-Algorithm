#include<iostream>
using namespace std;
int main() {
    int arr[5]={24,58,40,48,46};
    cout<<sizeof(arr)<<endl;// this give the space occupied by array in the memory
    cout<<sizeof(arr)/sizeof(int)<<endl;// this give the exact size of array
    return 0;
}