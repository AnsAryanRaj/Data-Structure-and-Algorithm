// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     string reverseStr(string s, int k) {
//         int n=s.length();
//         for(int i=0 ;i<n;i+=2*k){
//             int st=i;
//             int end=min(i+k-1, n-1);
//             while(st<end){
//                 swap(s[st], s[end]);
//                 st++;
//                 end--;
//             }
//         }
//         return s;
//     }
// };
// int main() {
//     string s;
//     cout<<"Enter the string s: "<<endl;
//     cin>>s;
//     int k;
//     cout<<"Enter the value of K : "<<endl;
//     cin>>k;
//     Solution obj;
//     string ans=obj.reverseStr(s, k);
//     cout<<"Answer string is : "<<ans;
//     return 0;
// }