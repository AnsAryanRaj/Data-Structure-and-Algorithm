// class Solution {
// public:
//     int missingInteger(vector<int>& nums) {
//         int n = nums.size();
//
//         int sum = nums[0];
//
//         for(int i = 1; i < n; i++) {
//             if(nums[i] == nums[i - 1] + 1) {
//                 sum += nums[i];
//             }
//             else {
//                 break;
//             }
//         }
//
//         while(true) {  // Candidate check karte raho. Jab tak answer nahi milta, rukna mat.
//
//             bool found = false;
//
//             for(int x : nums) {
//                 if(x == sum) {
//                     found = true;
//                     break;
//                 }
//             }
//
//             if(!found) {
//                 return sum;
//             }
//
//             sum++;
//         }
//
//         return sum;
//     }
// };
//
// //Note--Prefix = array ke starting se continuous part.

//use while(true)--
//
// while(true) ko yaad rakho as:
// "Repeat indefinitely until I explicitly break or return."
// Aur jab tum question solve karte waqt socho:
// "Mujhe answer milne tak repeat karna hai, lekin mujhe nahi pata kitni baar."
// Tab while(true) ek strong option hai.