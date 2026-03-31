#include<iostream>
using namespace std;
int main() {
    int arr[]={23,56,60,30};
    for (int &x:arr) { //use reference & for modifying
        x=x*2;
        cout<<x<<" ";
    }
    return 0;
}