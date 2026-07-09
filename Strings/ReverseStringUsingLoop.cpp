// //Method 1-
// // #include<iostream>
// // #include<string>
// // using namespace std;
// // int main() {
// //     string s="Hemant Soren";
// //     int n=s.length();
// //     for (int i=n-1;i>=0;i--) {
// //         cout<<s[i];
// //
// //     }
// //     return 0;
// // }
//

// //Method 2-
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s="Hemant soren";
//     int n=s.length();
//     char temp[n];
//     for (int i=0;i<n;i++) {
//         temp[i]=s[n-1-i];
//     }
//     cout<<"Reverse of the string is:";
//     for (int i=0;i<n;i++) {
//         cout<<temp[i];
//
//     }
// }