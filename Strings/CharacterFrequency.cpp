// #include<iostream>
// #include<string>
// #include<cctype>
//
// using namespace std;
// int main() {
//     string s="Aryan RAj";
//     int n=s.size();
//     string printedSofar="";
//     for (int i=0;i<s.length();i++) {
//         char ch=s[i];
//         //if ch not in printedSoFar, count and print the frequency of ch
//         if ( printedSofar.find(ch) == string:: npos) {
//
//             int count=0;
//             //int count = 0;
//             //Outer loop ke andar likha hai.Har baar i ki nayi iteration shuru hoti hai,
//             //to count naam ka naya variable banta hai aur phir se 0 se start hota hai.
//
//             //count the number of times ch occurs in the string
//             for (int j=0;j<s.length();j++) {
//                 if (ch==s[j]) {
//                     count++;
//
//                 }
//             }
//             cout<<ch<<":"<<count<<endl;
//             printedSofar +=ch;
//
//         }
//
//     }
// }