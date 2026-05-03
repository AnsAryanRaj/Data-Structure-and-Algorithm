// #include<iostream>
// using namespace std;
// int main() {
//     int n=10;
//     bool isPrime[n+1]; //array size becomes 11 because we store numbers 0->10.
//     for (int i=0;i<=n;i++) {  //assuming each number is prime
//         isPrime[i]==true;
//     }
//     isPrime[0] = isPrime[1] = false; // 0 and 1 are non prime
//
//     for (int i=2;i*i<=n;i++) {
//         if (isPrime[i]) { // checks if i is a prime
//             for (int j=i*i; j<=n; j=j+i) { //calculating multiple of i and j is changing becoz of iteration not i
//                 isPrime[j]=false;
//             }
//         }
//
//     }
//     for (int i=2; i<=n; i++) {  //printing the prime number
//         if (isPrime[i]) {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
//
// }
