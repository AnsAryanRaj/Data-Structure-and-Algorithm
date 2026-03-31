#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>num={24,56,83,395,88};
    cout<<"size of vector is: "<<num.size()<<endl;
    cout<<"The elements of array are: ";
    for (int i=0;i<num.size();i++) {

        cout<<(num.at(i))<< " ";
    }
    return 0;
}