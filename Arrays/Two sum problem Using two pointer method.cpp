// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// vector<int> twosum(vector<int> v,int target) {
//     vector<int> ans;
//     int n = v.size();
//
//     sort(v.begin(), v.end());  // important
//
//     int i = 0, j = n - 1;
//
//     while (i < j) {
//         int pairsum = v[i] + v[j];
//
//         if (pairsum > target) {
//             j--;
//         }
//         else if (pairsum < target) {
//             i++;
//         }
//         else {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }
//
// int main() {
//     vector<int> v = {2,7,1,1,5};
//     int target = 9;
//
//     vector<int> ans = twosum(v, target);
//
//     if(ans.size() > 0) {
//         cout << ans[0] << " " << ans[1];
//     } else {
//         cout << "No pair found";
//     }
//
//     return 0;
// }