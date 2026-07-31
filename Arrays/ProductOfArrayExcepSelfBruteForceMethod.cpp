// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> answer(n, 1);
//         vector<int> prefix(n, 1);
//         vector<int> suffix(n, 1);
//         for (int i=1;i<n;i++) {
//             prefix[i]=prefix[i-1]*nums[i-1];
//         }
//         for (int i=n-2;i>=0;i--) {
//             suffix[i]=suffix[i+1]*nums[i+1];
//         }
//         for (int i=0;i<n;i++) {
//             answer[i]=prefix[i]*suffix[i];
//         }
//         return answer;
//     }
//
// };
//
// int main() {
//     Solution obj;
//
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//
//     vector<int> nums(n);
//
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//
//     vector<int> result = obj.productExceptSelf(nums);
//
//     cout << "Product of array except self: ";
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//
//     cout << endl;
//
//     return 0;
// }

// Time complexity of this code is O(3n)

//Space complexity of this code is O(3n)