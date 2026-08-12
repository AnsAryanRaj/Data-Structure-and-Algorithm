// # Smallest Missing Integer Greater Than the Maximum Sequential Sum
//
// You are given an integer array `nums`.
//
// A **sequential group** is a contiguous group of elements in the array where each element is exactly `1` greater than the previous element.
//
// For example:
//
// * `[2,3,4]` is a sequential group because `3 = 2 + 1` and `4 = 3 + 1`.
// * `[5,6,7]` is also a sequential group.
// * `[2,4,5]` is not a sequential group because `4 != 2 + 1`.
//
// Every individual element is considered a sequential group of length `1`.
//
// For every sequential group, calculate the sum of its elements.
//
// Let `maxSum` be the **maximum sum among all sequential groups** in the array.
//
// Return the **smallest integer strictly greater than `maxSum` that does not appear in `nums`**.
//
// ## Example 1
//
// **Input:**
//
// ```text
// nums = [2,3,4,2,5,6,7]
// ```
//
// **Output:**
//
// ```text
// 19
// ```
//
// **Explanation:**
//
// The sequential groups are:
//
// ```text
// [2,3,4] → 2 + 3 + 4 = 9
// [2]     → 2
// [5,6,7] → 5 + 6 + 7 = 18
// ```
//
// The maximum sequential sum is `18`.
//
// The smallest integer strictly greater than `18` is `19`.
//
// Since `19` does not appear in `nums`, the answer is `19`.
//
// ---
//
// ## Example 2
//
// **Input:**
//
// ```text
// nums = [1,2,3,8,9,10,11,5]
// ```
//
// **Output:**
//
// ```text
// 39
// ```
//
// **Explanation:**
//
// The sequential groups are:
//
// ```text
// [1,2,3]       → 6
// [8,9,10,11]   → 38
// [5]           → 5
// ```
//
// The maximum sequential sum is `38`.
//
// The smallest integer strictly greater than `38` that does not appear in the array is `39`.
//
// Therefore, the answer is `39`.
//
// ---
//
// ## Example 3
//
// **Input:**
//
// ```text
// nums = [5,6,7,8]
// ```
//
// **Output:**
//
// ```text
// 27
// ```
//
// **Explanation:**
//
// There is only one sequential group:
//
// ```text
// [5,6,7,8]
// ```
//
// Its sum is:
//
// ```text
// 5 + 6 + 7 + 8 = 26
// ```
//
// The smallest integer strictly greater than `26` that does not appear in the array is `27`.
//
// ---
//
// ## Example 4
//
// **Input:**
//
// ```text
// nums = [1,2,3,10,11,12,13,14]
// ```
//
// **Output:**
//
// ```text
// 61
// ```
//
// **Explanation:**
//
// The sequential groups are:
//
// ```text
// [1,2,3]          → 6
// [10,11,12,13,14] → 60
// ```
//
// The maximum sequential sum is `60`.
//
// The smallest integer strictly greater than `60` that does not appear in the array is `61`.
//
// ---
//
// ## Constraints
//
// * `1 <= nums.length <= 10^5`
// * `1 <= nums[i] <= 10^4`
// * `nums` may contain duplicate integers.
// * A sequential group must consist of **contiguous elements** of the array.
// * Every individual element is considered a sequential group.
// * The answer must be **strictly greater than `maxSum`**.
// * The returned integer must not appear in `nums`.
//
// ## Function Signature
//
// ```cpp
// class Solution {
// public:
//     int smallestMissingAfterMaxSum(vector<int>& nums) {
//
//     }
// };
// ```

// class Solution {
// public:
//     int solve(vector<int>& nums) {
//         int n = nums.size();
//
//         int maxSum = nums[0];
//         int sum = nums[0];
//
//         for(int i = 1; i < n; i++) {
//             if(nums[i] == nums[i - 1] + 1) {
//                 sum += nums[i];
//             }
//             else {
//                 maxSum = max(maxSum, sum);
//                 sum = nums[i];
//             }
//         }
//
//         maxSum = max(maxSum, sum);
//
//         int candidate = maxSum + 1;
//
//         while(true) {
//             bool found = false;
//
//             for(int x : nums) {
//                 if(x == candidate) {
//                     found = true;
//                     break;
//                 }
//             }
//
//             if(!found) {
//                 return candidate;
//             }
//
//             candidate++;
//         }
//
//         return -1;
//     }
// };