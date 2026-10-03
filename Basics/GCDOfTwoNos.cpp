// #include<iostream>
// using namespace std;
//
// int gcd(int a, int b) {
//     while (b!=0) {
//         int rem=a%b;
//         a=b;
//         b=rem;
//     }
//     return a;
// }
// int main() {
//     int a=48;
//     int b=18;
//     cout<<"gcd of the nos is: "<< gcd(a, b);
//     return 0;
// }


//Method 2--

// #include<iostream>
// using namespace std;
// int gcd(int a, int b) {
//     while (a>0 && b>0) {
//         if (a>b) {
//             a=a%b;
//         }
//         else {
//             b=b%a;
//         }
//     }
//     if (a==0) return b;
//     return a;
// }
// int main() {
//     cout<<gcd(20,28)<<endl;
//     return 0;
// }