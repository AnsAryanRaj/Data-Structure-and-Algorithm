// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Solution {
// public:
//     int search(vector<int>& nums, int tar) {
//
//         int st = 0;
//         int end = nums.size() - 1;
//
//         while (st <= end) {
//
//             int mid = st + (end - st) / 2;
//
//             // Target found
//             if (nums[mid] == tar) {
//                 return mid;
//             }
//
//             // Left half is sorted
//             if (nums[st] <= nums[mid]) {
//
//                 if (nums[st] <= tar && tar < nums[mid]) {
//                     end = mid - 1;
//                 }
//                 else {
//                     st = mid + 1;
//                 }
//             }
//
//             // Right half is sorted
//             else {
//
//                 if (nums[mid] < tar && tar <= nums[end]) {
//                     st = mid + 1;
//                 }
//                 else {
//                     end = mid - 1;
//                 }
//             }
//         }
//
//         // Target not found
//         return -1;
//     }
// };
//
// int main() {
//
//     Solution obj;
//
//     vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
//
//     int target;
//
//     cout << "Enter target: ";
//     cin >> target;
//
//     int ans = obj.search(nums, target);
//
//     if (ans != -1) {
//         cout << "Target found at index: " << ans << endl;
//     }
//     else {
//         cout << "Target not found" << endl;
//     }
//
//     return 0;
// }