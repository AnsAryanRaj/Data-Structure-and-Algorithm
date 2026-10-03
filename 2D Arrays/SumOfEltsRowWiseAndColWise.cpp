// #include<iostream>
// using namespace std;
// int main() {
//     int n, m;
//     cout<<"Enter no of rows: ";
//     cin>>n;
//     cout<<"Enter no of cols: ";
//     cin>>m;
//     int arr[n][m];
//     cout<<"enter the elements of the array: ";
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Row-wise sum is--"<<endl;
//     for (int i=0;i<n;i++) {
//         int rowsum=0;
//         for (int j=0;j<m;j++) {
//             rowsum=rowsum+arr[i][j];
//         }
//         cout<<"sum of row "<<i<<" is: "<<rowsum<<endl;
//     }
//     cout<<"Col-wise sum is--"<<endl;
//     for (int j=0;j<m;j++) {
//         int colsum=0;
//         for (int i=0;i<n;i++) {
//             colsum=colsum+arr[i][j];
//         }
//         cout<<"sum of col "<<j<<" is: "<<colsum<<endl;
//     }
//     return 0;
// }