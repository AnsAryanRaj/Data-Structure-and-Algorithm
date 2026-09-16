// #include<iostream>
// #include<map>
// using namespace std;
// int main() {
//     map<int, string> m;
//     m[101]="Aryan";
//     m[102]="Rahul";
//     m[103]="Aman";
//     cout<<m[101];
// }

//Example 2--
// #include <iostream>
// #include <map>
// using namespace std;
//
// int main() {
//     map<int, string> m;
//
//     m[101] = "Aryan";
//     m[102] = "Rahul";
//     m[103] = "Aman";
//
//     cout << m[101] << endl;
//
//     if(m.find(102) != m.end()) {
//         cout << "Found" << endl;
//     }
//
//     m.erase(103);
//
//     cout << "Size: " << m.size() << endl;
//
//     for(auto x : m) {
//         cout << x.first << " " << x.second << endl;
//     }
// }