#include<iostream>
using namespace std;
int main() {
    int arr[5]={10,20,30,40,50};
    int key=10;
    bool found=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Element not found"<<endl;
    }
    else {
        cout<<"Element found"<<endl;
    }
}