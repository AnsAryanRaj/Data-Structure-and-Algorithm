// #include<iostream>
// using namespace std;
// int bS(int arr[], int st, int end, int key) {
//     if (st>end) return -1;
//     int mid=st+(end-st)/2;
//     if (arr[mid]==key) return mid;
//     else if (arr[mid]>key) return bS(arr, st, mid-1, key);
//     else return bS(arr, mid+1,end, key);
// }
//
// int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//
//     int key;
//     cout<<"enter the key: ";
//     cin>>key;
//     int arr[n];
//     cout<<"enter the elements of arr: ";
//     for (int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int ans=bS(arr,  0,n-1,key);
//     cout<<"the index of the element is : "<<ans;
//     return 0;
//
// }