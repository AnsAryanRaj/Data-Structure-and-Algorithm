// //Anagram--Two strings are anagrams if they contain the same characters with the same frequencies,
// //but the characters can be in a different order.
//
// #include<iostream>
// #include<string>
// #include<cctype>
// #include<algorithm>
// using namespace std;
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//
//         sort(s.begin(), s.end()); //arranges every char in ascend. order from begin to end
//
//         sort(t.begin(), t.end());
//
//         if(s==t){
//             return true;
//         }
//         else{
//             return false;
//         }
//
//     }
// };
//
// int main() {
//     string s="listen";
//     string t="silent";
//     Solution obj;
//
//     if (obj.isAnagram(s,t)) {
//         cout<<"Anagram";
//
//
//     }
//     else {
//         cout<<"Not Anagram";
//     }
//     return 0;
//
// }
//
