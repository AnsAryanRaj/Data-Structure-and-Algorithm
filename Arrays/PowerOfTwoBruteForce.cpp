// #include<iostream>
// using namespace std;
//
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//
//         if (n <= 0) {
//             return false;
//         }
//         while (n % 2 == 0) {
//             n /= 2;
//         }
//         return n == 1; // by default in c++ , it will give answer in form of 0 and 1 , 1-> true and 0-> false;
//     }
// };
//
// int main() {
//     Solution obj;
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;
//     bool answer = obj.isPowerOfTwo(n);
//     cout<<boolalpha; // this let the code give output in form of true and false ;
//     cout << "Number is power of two: " << answer;
//     return 0;
// }


//Recursive Method ---
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//
//         if (n == 1)
//             return true;
//
//         if (n <= 0 || n % 2 != 0)
//             return false;
//
//         return isPowerOfTwo(n / 2);
//     }
// };