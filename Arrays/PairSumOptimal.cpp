// #include <iostream>
// #include <vector>
// using namespace std;
//
// vector<int> pairSum(vector<int>& v, int target) {
//
//     int st = 0;
//     int end = v.size() - 1;
//
//     vector<int> ans;
//
//     while (st < end) {
//
//         int sum = v[st] + v[end];
//
//         if (sum > target) {
//             end--;
//         }
//         else if (sum < target) {
//             st++;
//         }
//         else {
//             ans.push_back(st);
//             ans.push_back(end);
//             break;              // Pair found, so exit the loop
//         }
//     }
//
//     return ans;
// }
//
// int main() {
//
//     vector<int> v = {2, 7, 11, 15};
//     int target = 9;
//
//     vector<int> ans = pairSum(v, target);
//
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
//
//     return 0;
// }