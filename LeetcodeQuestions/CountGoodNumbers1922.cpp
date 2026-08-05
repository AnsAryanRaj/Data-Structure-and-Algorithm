// class Solution {
// public:
//     const int MOD = 1e9 + 7;
//
//     long long solve(long long idx, long long n) {
//         if (idx == n)
//             return 1;
//
//         long long ans = 0;
//
//         if (idx % 2 == 0) {
//             for (int i = 0; i < 5; i++) {
//                 ans = (ans + solve(idx + 1, n)) % MOD;
//             }
//         } else {
//             for (int i = 0; i < 4; i++) {
//                 ans = (ans + solve(idx + 1, n)) % MOD;
//             }
//         }
//
//         return ans;
//     }
//
//     int countGoodNumbers(long long n) {
//         return solve(0, n);
//     }
// };