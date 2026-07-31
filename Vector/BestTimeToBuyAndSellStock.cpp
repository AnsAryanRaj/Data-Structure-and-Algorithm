// #include<iostream>
// #include<vector>
// using namespace std;
//
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//
//         int maxprofit = 0;
//         int bestbuy = prices[0];
//
//         for(int i=1;i<prices.size();i++){
//
//             if(prices[i] > bestbuy){
//                 maxprofit = max(maxprofit, prices[i]-bestbuy);
//             }
//
//             bestbuy = min(bestbuy, prices[i]);
//         }
//
//         return maxprofit;
//     }
// };
//
// int main(){
//
//     Solution obj;
//
//     int n;
//
//     cout<<"Enter number of days (n): ";
//     cin>>n;
//
//     vector<int> prices(n);
//
//     cout<<"Enter prices: ";
//
//     for(int i=0;i<n;i++){
//         cin>>prices[i];
//     }
//
//     int answer = obj.maxProfit(prices);
//
//     cout<<"Maximum Profit = "<<answer;
//
//     return 0;
// }