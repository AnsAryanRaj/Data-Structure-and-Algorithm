// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec; // declaration of a vector
//     cout<<vec.size()<<endl; // size of a vector
//     return 0;
// }


//Push_back function
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     for (int val: vec) {
//         cout<<val<<" ";
//
//     }
//     cout<<endl;
//     return 0;
//
// }

//Initialising a vector with another vector--
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec1={1,2,3,4,5};
//
//     vector<int>vec2(vec1);
//     for (int val: vec2) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//
//     return 0;
// }

//Erase function--
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={1,2,3,4,5};
//
//     vec.erase(vec.begin()+1); // delete element at index 1 i.e, 2
//     for (int val: vec) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//deleting a range of elements--
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={1,2,3,4,5};
//
//     vec.erase(vec.begin()+1, vec.begin()+3); // delete element from index 1 to 2
//     for (int val: vec) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//empty() function--
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={1,2,3,4,5};
//
//     vec.clear();  // to delete all the elements of the vector
//     for (int val: vec) {
//         cout<<val<<" ";
//     }
//
//     cout<<"is empty:"<<vec.empty()<<endl; // gives 0 or 1 value indicating true or false
//
//     cout<<endl;
//     return 0;
// }