// #include<iostream>
// using namespace std;
// int value(char c) { //value function
//     switch (c) { //roman char ko number me convert karega
//         case'I':return 1;
//         case'v':return 5;
//         case'X':return 10;
//         case'L':return 50;
//         case'C':return 100;
//         case'D':return 500;
//         case'M':return 1000;
//     }
//     return 0;
// }
//
// int romanToInt(string s) { //ye func. poori string ko roman se number me convert karta hai
//     int total=0;
//     for (int i=0;i<s.length();i++) {
//         int current =value(s[i]); //strings are arranged in sequence so they can be treated as array
//         int next=value(s[i+1]);
//
//         if (current<next)
//             total-=current;
//         else
//             total+=current;
//     }
//     return total;
// }
//
// int main() {
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     cout<<romanToInt(s);
//     return 0;
// }