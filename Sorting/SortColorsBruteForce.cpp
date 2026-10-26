// #include<iostream>
// #include<vector>
// using namespace std;
//
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//
//         int n=nums.size();
//         int c0=0, c1=0, c2=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0){
//                 c0++;
//             }else if(nums[i]==1)
//             {
//                 c1++;
//             }
//             else{
//                 c2++;
//             }
//         }
//         int idx=0;
//
//         for(int i=0;i<c0;i++){
//             nums[idx++]=0;
//         }
//         for(int i=0;i<c1;i++){
//             nums[idx++]=1;
//         }
//         for(int i=0;i<c2;i++){
//             nums[idx++]=2;
//         }
//
//     }
// };
//
// int main() {
//     int n=5;
//     vector<int>nums={2,0,2,1,1,0,1,2,0,0};
//     Solution obj;
//     obj.sortColors(nums); // we don't need to pass n because n is already calculated
//     for (int x:nums) {
//         cout<<x<<" ";
//     }
//     return 0;
// }