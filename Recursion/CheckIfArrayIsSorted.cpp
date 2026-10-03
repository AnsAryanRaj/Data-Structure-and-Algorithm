// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int n) {
//     bool ascend=true;
//     bool descend=true;
//     for (int i=0;i<n-1;i++) {
//         if (arr[i]>arr[i+1]) ascend=false; //agar condition to ascend false mark kar denge
//
//         if (arr[i]< arr[i+1]) descend=false; //agar condition to descend false hoga
//
//     }
//     return ascend || descend; // nhi to return true agar inme se koi true hua to true return hoga
//
// }
// int main() {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//
//     int arr[n];
//     cout<<"enter the elements of array: ";
//     for (int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     cout<<isSorted(arr, n);
//     return 0;
// }