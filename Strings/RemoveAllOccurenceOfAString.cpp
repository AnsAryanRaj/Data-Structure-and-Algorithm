// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length()>0 && s.find(part) < s.length()){
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//
//     }
// };
// int main() {
//     Solution obj;
//     string s;
//     cout<<"Enter the string: "<<endl;
//     cin>>s;
//     string part = "abc";
//     string ans=obj.removeOccurrences(s,part);
//     cout<<"Answer: "<<ans<<endl;
//     return 0;
// }