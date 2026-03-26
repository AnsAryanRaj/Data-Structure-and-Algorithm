// #include<iostream>
// using namespace std;
// int minIndex(int arr[], int s) {
//     int min=arr[0];
//     int index=0;
//     for (int i=1;i<s;i++) {
//         if (arr[i]<min) {
//             min=arr[i];
//             index=i;
//
//         }
//     }
//     return index;
// }
//
// int maxIndex(int arr[], int s) {
//     int max=arr[0];
//     int index=0;
//     for (int i=1;i<s;i++) {
//         if (arr[i]>max) {
//             max=arr[i];
//             index=i;
//
//         }
//     }
//     return index;
// }
// int main( ) {
//     int arr[]={23,46,85,69};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     int minIdx=minIndex(arr,s);
//     int maxIdx=maxIndex(arr,s);
//     swap(arr[minIdx],arr[maxIdx]);
//     cout<<"Array after swapping smallest and largest elements : ";
//     for (int i=0;i<s;i++) {
//         cout<<arr[i]<<" ";
//
//     }
//     cout<<endl;
//     return 0;
//
// }