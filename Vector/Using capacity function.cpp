#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec;

    // inserting elements
    vec.push_back(25);
    vec.push_back(50);
    vec.push_back(26);
    vec.push_back(86);

    // removing last element
    vec.pop_back();

    cout << "Vector after pop_back : ";

    // printing vector elements
    for(int x : vec) {
        cout << x << " ";
    }

    cout << endl;

    // printing size
    cout << "Size of vector : " << vec.size() << endl;

    // printing capacity
    cout << "Capacity of vector : " << vec.capacity() << endl;

    return 0;
}