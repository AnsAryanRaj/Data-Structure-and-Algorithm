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


// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {

//         int n = nums.size();
//         int maximum = INT_MIN;

//         for (int i = 0; i < n; i++) {

//             for (int j = i; j < n; j++) {

//                 int sum = 0;

//                 for (int k = i; k <= j; k++) {
//                     sum += nums[k];
//                 }

//                 maximum = max(maximum, sum);
//             }
//         }

//         return maximum;
//     }
// };

