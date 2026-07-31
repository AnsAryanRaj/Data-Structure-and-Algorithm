// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxwater=0;
//         for(int i=0;i<height.size();i++){
//             for(int j=i+1;j<height.size();j++){
//                 int width=j-i;
//                 int ht=min(height[i],height[j]);
//                 int currwater=width*ht;
//                 maxwater=max(maxwater, currwater);
//             }
//         }
//         return maxwater;
//     }
// };
// int main() {
//     Solution obj;
//     int n;
//     cout<<"Number of lines (n): ";
//     cin>>n;
//     vector<int> height(n);
//     cout<<"Enter the heights of the lines: ";
//     for (int i=0;i<n;i++) {
//         cin>>height[i];
//
//     }
//     int answer=obj.maxArea(height);
//     cout<<answer;
// }