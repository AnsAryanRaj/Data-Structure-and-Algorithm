// #include<iostream>
// using namespace std;
// int main() {
//     int n, m;
//     cout<<"enter the no of rows: ";
//     cin>>n;
//     cout<<"enter the no of cols: ";
//     cin>>m;
//     int arr[n][m];
//     cout<<"enter the elts. of an array: ";
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     int maxi=INT_MIN;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             if (arr[i][j]>maxi) {
//                 maxi=arr[i][j];
//             }
//         }
//     }
//     cout<<"the largest elt. is: "<<maxi<<endl;
//     return 0;
// }