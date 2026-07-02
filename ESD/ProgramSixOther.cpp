//Ek array hai jiske elements ko hum 3 se divide kar reh hai to count
//karna hai ki jo remainder ayenge wo each kitni baar ayenge
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     cout<<"Enter the number of elements in the array: ";
//     int n;
//     cin >> n;
//
//     int arr[n];
//     int count[3] = {0};
//     cout<<"Enter the elements of the array";
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         int rem = arr[i] % 3;
//         count[rem]++;
//     }
//
//     cout << "Remainder 0: " << count[0] << endl;
//     cout << "Remainder 1: " << count[1] << endl;
//     cout << "Remainder 2: " << count[2] << endl;
//
//     return 0;
// }