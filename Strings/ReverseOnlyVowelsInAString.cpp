// #include<iostream>
// #include<string>
// #include<cctype>
// #include<algorithm>
// using namespace std;
// bool isVowel(char ch) {
//
//     ch=toupper(ch);
//
//     return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
//
// }
// int main() {
//     string s="Educator";
//     int st=0;
//     int end=s.length()-1;
//
//     while (st<end) {
//         //Move left pointer until it points to a vowel
//         while (st< end && !isVowel(s[st])) {
//             st++;
//         }
//
//         //Move right pointer until it points to a vowel
//         while (st<end && !isVowel(s[end])) {
//             end--;
//         }
//
//         //swap the vowels
//         swap(s[st], s[end]);
//
//         st++;
//         end--;
//     }
//     cout<<"String after reversing vowels: "<<s;
//
// }