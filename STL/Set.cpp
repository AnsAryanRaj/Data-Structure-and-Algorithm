//Example 1--

// #include<iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<int>s;
//
//     s.insert(10);
//     s.insert(20);
//     s.insert(30);
//
//     for (auto x:s) {
//         cout<<x<<" ";
//     }
// }


//Example 2--


// #include <iostream>
// #include <set>
// using namespace std;
//
// int main() {
//     set<int> s;
//
//     s.insert(30);
//     s.insert(10);
//     s.insert(20);
//     s.insert(10);
//
//     cout << "Set: ";
//
//     for(auto x : s) {
//         cout << x << " ";
//     }
//
//     cout << endl;
//
//     if(s.find(20) != s.end()) {
//         cout << "20 Found" << endl;
//     }
//
//     s.erase(20);
//
//     cout << "After erase: ";
//
//     for(auto x : s) {
//         cout << x << " ";
//     }
// }