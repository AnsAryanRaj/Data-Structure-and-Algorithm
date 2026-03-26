// #include<iostream>
// #include<cmath>
// using namespace std;
//
// int binToDec(int n) {
//     int power = 0;
//     int ans = 0;
//
//     while(n > 0) {
//         int rem = n % 10;
//         n = n / 10;
//
//         ans = ans + rem * pow(2, power);
//         power++;
//     }
//
//     return ans;
// }
//
// int main() {
//     cout << binToDec(1010);
//     return 0;
// }