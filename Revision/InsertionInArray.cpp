// #include<iostream>
// using namespace std;
// int main() {
//     int pos=2, value=69;
//     int arr[6]={34,58,30,20,39};
//     int n=5;
//     for (int i=n;i>pos;i--) {
//         arr[i]=arr[i-1];
//
//     }
//     arr[pos]=value;
//     n++;
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//A little bit different loop approach--
//
// #include<iostream>
// using namespace std;
// int main() {
//     int pos=2, value=69;
//     int arr[6]={34,58,30,20,39};
//     int n=5;
//     for (int i=n-1;i>=pos;i--) {
//         arr[i+1]=arr[i];
//
//     }
//     arr[pos]=value;
//     n++;
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }