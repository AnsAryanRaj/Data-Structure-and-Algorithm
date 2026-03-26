// #include<iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//
//     if (n <= 1) {
//         cout << "Not a prime number";
//         return 0;
//     }
//
//     bool isPrime = true;
//
//     for (int i = 2; i <= n - 1; i++) {
//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
//
//     if (isPrime==true) {
//         cout << "Prime Number";
//     } else {
//         cout << "Non Prime Number";
//     }
//
//     return 0;
// }