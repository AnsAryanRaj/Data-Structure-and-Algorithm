#include<iostream>
using namespace std;
void single(int arr[],int s) {

    for (int i=0;i<s;i++) {
        int count=0; // yha count har iteration ke baad 0 zero se shuru hoga agar use first loop ke bahar rkhte to ek iteration ke baad 2 se and then update hote rehta
        for (int j=0;j<s;j++) {
            if (arr[i]==arr[j]) {
                count++;
            }


        }

        if (count==1) {
            cout<<arr[i];
        }
    }
}
int main() {
    int arr[]={24,64,49,24,64};
    int s=sizeof(arr)/sizeof(arr[0]);
    single(arr,s);
    cout <<endl;
    return 0;

}