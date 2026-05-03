//  #include<iostream>
//  using namespace std;
//  int main() {
//      int marks;
//      cout<<"enter the marks of student:";
//      cin>>marks;
//      if (marks>=90) {
//          cout<<"Grade=A";
//      }
//      else if (marks>=80) {
//          cout<<"Grade=B";
//      }
//      else if (marks>=70){
//          cout<<"Grade=C";
//      }
//      else {
//          cout<<"Grade=D";
//      }
//      return 0;
//  }
//
//
// //In case someone use invalid input then what to do , the code is below--
// #include<iostream>
// using namespace std;
//
// int main2() {
//     int marks;
//     cout << "Enter the marks of student: ";
//
//     cin >> marks;
//
//     // Check invalid input
//     if(cin.fail()) {
//         cout << "Invalid input! Please enter a number.";
//         return 0;
//     }
//
//     // Check valid range
//     if(marks < 0 || marks > 100) {
//         cout << "Marks should be between 0 and 100.";
//         return 0;
//     }
//
//     if (marks >= 90) {
//         cout << "Grade = A";
//     }
//     else if (marks >= 80) {
//         cout << "Grade = B";
//     }
//     else if (marks >= 70) {
//         cout << "Grade = C";
//     }
//     else {
//         cout << "Grade = D";
//     }
//
//     return 0;
// }