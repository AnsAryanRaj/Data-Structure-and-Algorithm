//Right rotation by 1 position--
// this is an array {2,1,5,7,9,4} and i want to turn
// this array to this {4,2,1,5,7,9}
//
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[]={2,1,5,7,9,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int last=arr[n-1];
//     for (int i=n-1;i>0;i--) {
//         arr[i]=arr[i-1];
//     }
//     arr[0]=last;
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//
// }