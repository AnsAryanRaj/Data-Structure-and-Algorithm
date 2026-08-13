// #include <iostream>
// #include <string>
// using namespace std;
//
// bool isVowel(char ch) {
//     return ch == 'a' || ch == 'e' || ch == 'i' ||
//            ch == 'o' || ch == 'u';
// }
//
// int main() {
//     string s;
//     cin >> s;
//
//     int k = 3;
//     int count = 0;
//
//
//     for(int i = 0; i < k; i++) {
//         if(isVowel(s[i])) {
//             count++;
//         }
//     }
//
//     cout << count << " ";
//
//
//     for(int i = k; i < s.length(); i++) {
//
//
//         if(isVowel(s[i - k])) {
//             count--;
//         }
//
//
//         if(isVowel(s[i])) {
//             count++;
//         }
//
//         cout << count << " ";
//     }
//
//     return 0;
// }