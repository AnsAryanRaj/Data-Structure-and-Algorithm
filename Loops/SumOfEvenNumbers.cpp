#include<iostream>
using namespace std;
int main() {
    int n;
    int evensum=0;
    cout<<"Enter the number n:";
    cin>>n;

    for (int i=0; i<=n;i++) {
        if (i%2==0) {
            evensum=evensum+i;

        }
    }
    cout<<evensum<<endl;
    return 0;
}
