// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher {
//
// private:
//     double salary;
//
// public:
//     string name;
//     string dept;
//     string subject;
//
//     Teacher() {
//         dept="Computer Science";
//
//     }
//     //Parameterized
//     Teacher(string name, string dept, string subject, double salary) {
//         this->name=name;
//         this->dept=dept;
//         this->subject=subject;
//         this->salary= salary;
//     }
//
//     //copy Constructor
//     Teacher(Teacher &orgObj) { //pass by reference
//         cout<<"I am custom copy constructor...\n";
//         this->name=orgObj.name;
//         this->dept=orgObj.dept;
//         this->subject= orgObj.subject;
//         this->salary=orgObj.salary;
//
//     }
//
//
//     void changeDept(string newDept) {
//         dept=newDept;
//
//     }
//     void getInfo() {
//         cout<<"name : "<<name<<endl;
//         cout<<"subject :"<<subject<<endl;
//     }
//
// };
//
//
// int main() {
//     Teacher t1("aryan", "cse","c++",000);
//
//     Teacher t2(t1); //default copy constructor -invoke
//
//     t2.getInfo();
//     return 0;
// }
