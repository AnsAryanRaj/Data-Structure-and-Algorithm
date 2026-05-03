/*1. Secure Password Generator
A company wants to create a secure password generator for their employees. The password must be based on
specific numeric properties to enhance its complexity and security. Write a program to validate and generate a
secure password according to the following rules:
1. Prime Number Validation:
• The user must input a 3-digit number. The program should first check if the number is a prime number.
• If it is not a prime number, the user should be prompted to enter another number until a valid prime
number is provided.
2. Sum of Digits Check:
• Once a valid prime number is entered, calculate the sum of its digits. If the sum of the digits is not
divisible by 3, ask the user to enter another prime number until a valid one is found.
3. Armstrong Number Check:
• Check entered prime number is Armstrong or not? If Armstrong are found, prompt the user to enter
another prime number and repeat the process.
Password Generation:
Concatenate the 1 if entered prime number is Armstrong otherwise 2 with the sum of the digits of the valid
prime number to form the secure password.

Example Scenario:
Sample Input
Enter a 3-digit prime number: 153
Sum of digits of 153 = 9
The sum is divisible by 3.
153 is Armstrong number
Sample Output
Secure Password:19 */

// #include <iostream>
// #include <cmath>
// using namespace std;
//
// // Function to check prime
// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
//
// // Function to calculate sum of digits
// int sumDigits(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }
//
// // Function to check Armstrong number
// bool isArmstrong(int n) {
//     int original = n, sum = 0;
//     while (n > 0) {
//         int digit = n % 10;
//         sum += pow(digit, 3);
//         n /= 10;
//     }
//     return sum == original;
// }
//
// int main() {
//     int num;
//
//     while (true) {
//         cout << "Enter a 3-digit prime number: ";
//         cin >> num;
//
//         // Check 3-digit
//         if (num < 100 || num > 999) {
//             cout << "Not a 3-digit number. Try again.\n";
//             continue;
//         }
//
//         // Check prime
//         if (!isPrime(num)) {
//             cout << "Not a prime number. Try again.\n";
//             continue;
//         }
//
//         int sum = sumDigits(num);
//
//         // Check sum divisible by 3
//         if (sum % 3 != 0) {
//             cout << "Sum of digits = " << sum << " (Not divisible by 3). Try again.\n";
//             continue;
//         }
//
//         // Check Armstrong
//         if (isArmstrong(num)) {
//             cout << num << " is an Armstrong number. Try again.\n";
//             continue;
//         }
//
//         // Generate password
//         int password = stoi("2" + to_string(sum));
//
//         cout << "Secure Password: " << password << endl;
//         break;
//     }
//
//     return 0;
// }