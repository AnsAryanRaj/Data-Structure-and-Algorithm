// #include<iostream>
// using namespace std;
//
// int decToBinary(int n) {
//     int ans = 0;
//     int pow = 1;
//
//     while(n > 0) {
//
//         int bit = n ^ ((n >> 1) << 1);   // using XOR to get last bit
//
//         ans = ans + bit * pow;
//
//         pow = pow * 10;
//         n = n >> 1;   // divide by 2
//     }
//     return ans;
// }
// int main() {
//     int n = 10;
//     cout << decToBinary(n);
//     return 0;
// }