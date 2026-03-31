#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(50);
    vec.push_back(26);
    vec.push_back(86);
    cout<<"vector after push back : ";
    for (int x:vec) {
        cout<<x<<" ";
    }
    return 0;
    cout<<vec.size()<<endl;

}

