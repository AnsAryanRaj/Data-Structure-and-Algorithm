// #include<iostream>
// #include<string>
// #include<cctype>
// #include<algorithm>
// using namespace std;
// void printFreq(string s) {
//
//     // create an array of characters of string
//     int l= s.length();
//     char characters[l];
//     for (int i=0;i<l;i++) {
//         characters[i]=s[i];
//     }
//
//     // sort this array in ascending order
//     std::sort(characters, characters + l);
//
//     //count frequencies and print
//     int i=0;
//     while (i<l) {
//         int j=i;
//         char ch=characters[i];
//         while (i<l && characters[i]==ch) {
//             i++;
//         }
//         int count=i-j;
//         cout<<ch<<":"<<count<<endl;
//     }
// }
//
// int main() {
//     string s="Programming";
//     printFreq(s);
//     return 0;
// }worwnnn