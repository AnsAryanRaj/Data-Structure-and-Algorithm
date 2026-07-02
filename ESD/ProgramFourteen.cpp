//Check whether a given array is sorted(ascending or descending) or unsorted--
//
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the size of array:";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of the array:";
//     for (int i=0;i<n;i++) {
//         cin>>arr[i];
//
//     }
//     bool asc=true;
//     bool desc=true;
//     for (int i=0;i<n-1;i++) {
//         if (arr[i]>arr[i+1])
//             asc=false;
//
//         if (arr[i]<arr[i+1])
//             desc=false;
//     }
//     if (asc)
//         cout<<"array is in ascending order:";
//     else if (desc)
//         cout<<"array is in descending order:";
//     else
//         cout<<"array is unsorted";
//
// }