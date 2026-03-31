#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter the alphabet letter:";
    cin>>ch;
    if (ch >='a'&& ch<='z') {
        cout<<"Letter is lowercase";
    } else {
        cout<<"Letter is uppercase";
    }
    return 0;
}

