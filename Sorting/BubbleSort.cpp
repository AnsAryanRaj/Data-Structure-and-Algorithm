// #include<iostream>
// using namespace std;
//
// void bubbleSort(int arr[], int n) {
//     for (int i=0;i<n-1;i++) {
//         bool isSwap=false;  // hum mante hai ki array hai sorted nhi hai
//         for (int j=0;j<n-i-1;j++) {
//             if (arr[j]>arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//
//                 isSwap=true;
//             }
//         }
//         if (!isSwap) { // array is already sorted
//             //"Koi swapping nahi hui, matlab array already sorted hai.
//             //Aur passes karne ki zarurat nahi."
//
//             return;
//         }
//     }
// }
//
// void printArray(int arr[], int n) {
//
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main() {
//     int n=5;
//     int arr[]{4,1,5,2,3};
//
//     bubbleSort(arr, n);
//     printArray(arr,n);
//     return 0;
//
//
// }

//This is code of bubblsort