//Ek array hai jiske elements ko hum 3 se divide kar reh hai to count
//karna hai ki jo remainder ayenge wo each kitni baar ayenge
//
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {2,5,4,3,2,1,9,2};
//     int zero = 0, one = 0, two = 0;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++) {
//
//         int rem = arr[i] % 3;
//
//         if (rem == 0) {
//             zero++;
//         }
//         else if (rem == 1) {
//             one++;
//         }
//         else {
//             two++;
//         }
//     }
//     cout << "Remainder 0 = " << zero << endl;
//     cout << "Remainder 1 = " << one << endl;
//     cout << "Remainder 2 = " << two << endl;
//     return 0;
// }