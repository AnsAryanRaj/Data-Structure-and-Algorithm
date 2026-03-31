#include<iostream>
using namespace std;
void Intersection(int arr1[],int arr2[],int s1, int s2) {
    for (int i=0;i<s1;i++) {
        for (int j=0;j<s2;j++) {
            if (arr1[i]==arr2[j]) {
                cout<<arr1[i]<< " +"
                                "";
                break;
            }
        }
    }
    cout<<endl;
}
int main() {
    int arr1[]={23,45,67,89};
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={23,48,69,89};
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    Intersection(arr1,arr2,s1,s2);
    cout<<endl;
    return 0;

}