// #include<iostream>
// #include <climits>
// using namespace std;
// int secondLargest(int arr[], int n) {
//     int first=INT_MIN, second=INT_MIN;
//     for (int i=0;i<n;i++) {
//         if (arr[i]>first) {
//             second=first;
//             first=arr[i];
//             if (arr[i]>second && arr[i]!=first) {
//                 second=arr[i];
//             }
//         }
//     }
//     return second;
// }
// int main() {
//     int arr[5]={2,3,6,8,9};
//     int ans=secondLargest(arr, 5);
//     cout<<"Second Largest Element is: "<<ans;
//     return 0;
// }