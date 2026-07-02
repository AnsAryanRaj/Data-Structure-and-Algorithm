//write an array rotate an array--
//
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int last = arr[n - 1];
//     for (int i = n - 1; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = last;
//     cout << "Rotated Array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     bool ans = true;
//     for (int i=0;i<n;i++) {
//         if (arr[i]>arr[i+1]) {
//             ans=false;
//             break;
//         }
//
//
//     }
//     if (ans)cout<<"sorted";
//     else
//         cout<<"Not sorted";
//     return 0;
// }