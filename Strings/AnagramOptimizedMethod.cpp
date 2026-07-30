// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length()!=t.length()) {
//             return false;
//
//             int freq[26]={0};
//
//             for (char ch:s) {
//                 freq[ch-'a']++;
//             }
//
//             for (char ch:t) {
//                 freq[ch-'a']--;
//             }
//
//             for (int i=0;i<26;i++) {
//                 if (freq[i] !=0) {
//                     return false;
//                 }
//             }
//             return true;
//         }
//     }
// };
// int main() {
//     string s="listen";
//     string t="silent";
//     Solution obj;
//
//     if (obj.isAnagram(s,t)) {
//         cout<<"Anagram";
//     }
//     else {
//         cout<<"Not Anagram";
//     }
//     return 0;
// }