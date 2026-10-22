// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
//
// int main() {
//     //stock prices
//     vector<int> price ={100, 80, 60, 70, 60, 75, 85};
//
//     //solution
//     vector<int>ans(price.size(), 0);
//     stack<int>s;
//
//     for (int i=0;i<price.size();i++) { // n times run karega
//
//         while (s.size()> 0 && price[s.top()] <= price[i]) {  // run n times bcoz each elt can be dlt once and enterd in stack once
//             s.pop();
//         }
//         if (s.empty()) {
//             ans[i] = i+1;
//
//         }else {
//             ans[i]=i- s.top(); // i- prevhigh
//         }
//         s.push(i);
//     }
//     for (int val: ans) {
//
//         cout<<val<<" ";
//     }
//     cout<<endl;
//
//     return 0;
//
//
// }