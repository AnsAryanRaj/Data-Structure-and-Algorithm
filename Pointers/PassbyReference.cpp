// #include<iostream>
// using namespace std;
// void changeA(int a) {
//     a=20;
//
// }
// int main() {
//     int a=10;
//
//     changeA(a);
//
//     cout<<"inside main fnx: "<<a<<endl;
//     return 0;
// }

//now using pass by reference using pointers
//
// #include<iostream>
// using namespace std;
// void changeA(int* ptr) { //ptr stores the address of a
//     *ptr=20;    //change the values stored at that address
//     //yha value 10 honi chahiye thi but humne 20 assign kar diya
//
// }
// int main() {
//     int a=10;
//     changeA(&a); //&a gives the address of the variable a
//
//     cout<<"inside main fnx : "<<a<<endl; // 20
//     return 0;
// }

//now using pass by reference using alias
//
// #include<iostream>
// using namespace std;
// void changeA(int &b) { // pass by reference using alias
//     b=20;
//
// }
// int main() {
//     int a=10;
//     changeA(a);
//
//     cout<<"inside main fnx : "<<a<<endl; // 20
//     return 0;
// }

