// #include<iostream>
// using namespace std;
// void mergeArrays(int a[], int n, int b[], int m, int result[]) {
//     int i=0, j=0, k=0;
//     while (i<n && j<m) {
//         if (a[i]< b[j]) result[k++] = a[i++]; // iska matlab hai result[k]=a[i] and then k++ & i++;
//         else result [k++] = b[j++];
//     }
//     while (i<n) result[k++]=a[i++];
//     while (j<m) result[k++]=b[j++];
//
// }
//
// int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int a[n];
//     cout<<"enter a's elts.";
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     int m;
//     cout<<"enter m: ";
//     cin>>m;
//     int b[m]; // C++ mein size ke bina normal array declare nahi kar sakte. ->int a[];
//     cout<<"enter b's elts: ";
//     for (int i=0;i<m;i++) {
//         cin>>b[i];
//     }
//     int result[n+m];
//     mergeArrays(a, n, b, m, result);
//
//     cout<<"Merged array: ";
//
//     for (int i=0;i<n+m;i++) {
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }