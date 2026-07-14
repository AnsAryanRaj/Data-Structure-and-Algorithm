// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     int maxsum=INT_MIN;
//     for (int st=0;st<n;st++) {
//         int currsum=0;
//         for (int end=st;end<n;end++) {
//             currsum=currsum+arr[end];
//             maxsum=max(currsum, maxsum);
//         }
//
//     }
//     cout<<"maximum subarray sum is: "<<maxsum;
//     return 0;
// }