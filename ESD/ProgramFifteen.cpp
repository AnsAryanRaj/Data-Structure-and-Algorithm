//Check whether a given array is sorted(ascending or descending) or unsorted without using variable--

/
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     int count = 0;
//     for(int i = 0; i < n - 1; i++) {
//         if(arr[i] <= arr[i + 1])
//             count++;
//     }
//     if(count == n - 1) {
//         cout << "Array is Sorted in Ascending Order";
//         return 0;
//     }
//     count = 0;
//     for(int i = 0; i < n - 1; i++) {
//         if(arr[i] >= arr[i + 1])
//             count++;
//     }
//     if(count == n - 1)
//         cout << "Array is Sorted in Descending Order";
//     else
//         cout << "Array is Unsorted";
//     return 0;
// }
