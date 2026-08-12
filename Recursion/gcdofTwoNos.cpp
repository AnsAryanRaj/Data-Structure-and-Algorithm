// #include<iostream>
// using namespace std;
// int gcd(int a, int b) {
//
//     if (b==0) {
//         return a;
//     }
//     return gcd(b,a%b);
// }
// int main() {
//     int a=48;
//     int b=18;
//     cout<<"gcd of the nos is: "<< gcd(a, b);
//     return 0;
// }


//--------------------------------------------------------
// concept--
// Euclidean Algorithm

// GCD(a, b) = GCD(b, a % b)
// 48 % 18 = 12
// GCD(48,18)
// ↓
// GCD(18,12)
// 18 % 12 = 6
//
// ↓
//
// GCD(12,6)
//
// 12 % 6 = 0
//
// ↓
//
// GCD(6,0)
//
// Answer = 6