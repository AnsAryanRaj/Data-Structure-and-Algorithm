//Given number of tyres is 10 and vehicle is 3 and find number of cars and bike possible to make--

// #include <iostream>
// using namespace std;
//
// int main() {
//     int tyres, vehicles;
//     cout << "Enter number of tyres: ";
//     cin >> tyres;
//
//     cout << "Enter number of vehicles: ";
//     cin >> vehicles;
//
//     int cars = (tyres - 2 * vehicles) / 2;
//     int bikes = vehicles - cars;
//
//     if (cars >= 0 && bikes >= 0 && (4 * cars + 2 * bikes == tyres)) {
//         cout << "Cars = " << cars << endl;
//         cout << "Bikes = " << bikes << endl;
//     } else {
//         cout << "Not possible";
//     }
//
//     return 0;
// }