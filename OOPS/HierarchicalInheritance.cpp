// #include<iostream>
// #include<string>
// using namespace std;
//
// class Person {
// public:
//     string name;
//     int age;
// };
//
// class Student : public Person {
// public:
//     int rollno;
// };
//
// class Teacher : public Person {
// public:
//     string subjects;
// };
//
// class TA : public Student, public Teacher {
// };
//
// int main() {
//
//     TA t1;
//
//     t1.Student::name = "tony stark"; // scope specify karna jaruri h anytha ambigous data show hoga
//     // because person ka properties 2 baar inherit ho rha student and teacher me then TA usse bna hai.
//     t1.Student::age = 21;
//
//     t1.rollno = 69;
//     t1.subjects = "engineering";
//
//     cout << t1.Student::name << endl;
//     cout << t1.subjects << endl;
//     cout << t1.rollno << endl;
//     cout << t1.Student::age << endl;
//
//     return 0;
// }


// IMPORTANT -- use Virtual for removing ambigous data and making multiple copies of properties in the class using (virtual);
//
// #include<iostream>
// #include<string>
// using namespace std;
//
// class Person {
// public:
//     string name;
//     int age;
// };
//
// class Student : virtual public Person {
// public:
//     int rollno;
// };
//
// class Teacher : virtual public Person {
// public:
//     string subjects;
// };
//
// class TA : public Student, public Teacher {
// };
//
// int main() {
//
//     TA t1;
//
//     t1.name = "tony stark";
//     t1.age = 21;
//     t1.rollno = 69;
//     t1.subjects = "engineering";
//
//     cout << t1.name << endl;
//     cout << t1.subjects << endl;
//     cout << t1.rollno << endl;
//     cout << t1.age << endl;
//
//     return 0;
// }