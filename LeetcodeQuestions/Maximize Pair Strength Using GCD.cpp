// class Solution {
// public:
//     long long maxPairStrength(vector<int>& nums) {
//
//         int n=nums.size();
//         long long maximum=0;
//
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 long long g=gcd(nums[i], nums[j]);
//                 long long currstr=(1LL*nums[i]*nums[j])/ (g*g);
//                 // str=currstr;
//
//                 maximum=max(maximum, currstr);
//
//             }
//         }
//         return maximum;
//
//
//
//
//     }
// };