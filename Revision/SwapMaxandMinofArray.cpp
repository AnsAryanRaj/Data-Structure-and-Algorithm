// #include<iostream>
// #include<vector>
// using namespace std;
// int minIndex(int arr[],int n) {
//     int min=arr[0];
//     int index=0;
//     for (int i=0;i<n;i++) {
//         if (arr[i]<min) {
//             min=arr[i];
//             index=i;
//         }
//     }
//     return index;
//
// }
//
// int maxIndex(int arr[], int n) {
//     int max=arr[0];
//     int index=0;
//
//     for (int i=0;i<n;i++) {
//         if (arr[i]>max) {
//             max=arr[i];
//             index=i;
//         }
//     }
//     return index;
// }
// int main() {
//     int arr[]={23,58,59,49};
//     int n=sizeof(arr)/sizeof(int);
//
//     int minIdx=minIndex(arr, n);
//     int maxIdx=maxIndex(arr, n);
//     swap(arr[minIdx],arr[maxIdx]);
//
//     cout<<"Array after swapping is: ";
//
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//
//     }
//     return 0;
//
//
// }