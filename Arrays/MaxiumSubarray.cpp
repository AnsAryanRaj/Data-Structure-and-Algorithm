// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currsum=0;
//         int maxsum=INT_MIN;
//         for (int val:nums) {
//             currsum+=val;
//             maxsum=max(maxsum,currsum);
//             if (currsum<0) {
//                 currsum=0;
//             }
//         }
//         return maxsum;
//     }
// };


//without using kadane's algorithm--
//
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//
//         int n = nums.size();
//         int maximum = INT_MIN;
//
//         for (int i = 0; i < n; i++) {
//
//             for (int j = i; j < n; j++) {
//
//                 int sum = 0;
//
//                 for (int k = i; k <= j; k++) {
//                     sum += nums[k];
//                 }
//
//                 maximum = max(maximum, sum);
//             }
//         }
//
//         return maximum;
//     }
// };
// int main() {
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int> nums(n);
//     cout<<"Enter the elets.";
//     for (int i=0;i<n;i++) {
//         cin>>nums[i];
//     }
//     Solution obj;
//     int ans=obj.maxSubArray(nums);
//     cout<<"Maxium Subarray Sum= "<< ans<<endl;
//     return 0;
// }