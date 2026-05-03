/*Write a method to generate a secure code which the sum of all possible palindrome numbers between given two
numbers.
For Example:
Input: 10, 80
Output: 308
Explanation:   All palindrome numbers between 10 & 80 are: 11,22,33,44,55,66,77
                          Password= 11+22+33+44+55+66+77 = 308 */

// #include <iostream>
// using namespace std;
//
// // Function to check palindrome
// bool isPalindrome(int num) {
//     int original = num, reverse = 0;
//
//     while (num > 0) {
//         int digit = num % 10;
//         reverse = reverse * 10 + digit;
//         num /= 10;
//     }
//
//     return original == reverse;
// }
//
// // Function to generate secure code
// int generateSecureCode(int start, int end) {
//     int sum = 0;
//
//     for (int i = start; i <= end; i++) {
//         if (isPalindrome(i)) {
//             sum += i;
//         }
//     }
//
//     return sum;
// }
//
// int main() {
//     int start = 10, end = 80;
//
//     int result = generateSecureCode(start, end);
//     cout << "Secure Code: " << result << endl;
//
//     return 0;
// }