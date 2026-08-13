// // Find the maximum sum of any 4 consecutive elements.
// #include<iostream>
// #include<vector>
// #include<cctype>
// #include<algorithm>
// using namespace std;
// int main() {
//     vector<int>v={1,4,2,10,23,3,1,0,20};
//     int k=4;
//
//
//     int windowsum=0;
//
//     for (int i=0;i<k;i++) {
//         windowsum=windowsum+v[i];
//     }
//
//     int maxsum=windowsum;
//
//     for (int i=k;i<v.size();i++) {
//
//         windowsum=windowsum+v[i];
//         windowsum=windowsum-v[i-k];
//
//         maxsum=max(maxsum, windowsum);
//
//     }
//     cout<<maxsum;
// }