// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     long long totalSum = 0;
//
//     for(int i = 0; i < n; i++) {
//         totalSum += (long long)arr[i] * (i + 1) * (n - i);  //formula for calculating the sum of subarray of an array
//     }
//
//     cout << "Total sum of all subarrays = " << totalSum;
//
//     return 0;
// }