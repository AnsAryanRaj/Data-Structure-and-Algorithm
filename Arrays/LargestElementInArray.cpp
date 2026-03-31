#include<iostream>
using namespace std;
int main() {
    int arr[5]={34,59,49,33,21};
    int largest=INT_MIN;
    for (int i=0;i<5;i++) {
        if (arr[i]>largest) {
            largest=arr[i];
        }
    }
    cout<<"Largest element is :"<<largest<<endl;
    return 0;
}