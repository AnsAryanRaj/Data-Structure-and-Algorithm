// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int recBS(vector<int> arr, int tar, int st, int end) {
//     if (st<=end) {
//         int mid=st+(end-st)/2;
//         if (tar>arr[mid]) {
//             return recBS(arr, tar, mid+1, end);
//
//         }
//         else if (tar<arr[mid]) {
//             return recBS(arr, tar, st, mid-1);
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }
//
// int main() {
//     // recBS obj; // here recBS is not a class so we dont need to create an object
//
//     vector<int>arr={-1,0,3,4,5,9,12};
//     int n=arr.size();
//     int tar=12, st=0, end=arr.size()-1;
//     int ans=recBS(arr,tar, st,end);
//     cout<<ans<<endl;
//     return 0;
//
//
// }