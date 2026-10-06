// #include<iostream>
// #include<string>
// using namespace std;
//
// class Student {
// public:
//     string name;
//     double* cgpaPtr;
//
//     // Parameterized Constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }
//
//     // Deep Copy Constructor
//     Student(Student &obj) {
//         this->name = obj.name;
//
//         cgpaPtr = new double;
//         *cgpaPtr = *obj.cgpaPtr;
//     }
//
//     // Destructor
//     ~Student() {
//         cout << "HI, I delete everything\n";
//         delete cgpaPtr;
//     }
//
//     void getInfo() {
//         cout << "name: " << name << endl;
//         cout << "cgpa: " << *cgpaPtr << endl;
//     }
// };
//
// int main() {
//
//     Student s1("Rahul Kumar", 8.9);
//
//     s1.getInfo();
//
//     return 0;
// }