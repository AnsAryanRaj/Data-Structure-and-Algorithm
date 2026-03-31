#include<iostream>
#include<vector>
using namespace std;
int binSearch(vector<int>&v, int target) {

    int st=0, end=v.size()-1;
    while (st<=end) {
        int mid=(st+end)/2;

        if (target>v[mid]) {
            st=mid+1;
        }else if (target<v[mid]) {
            end=mid-1;

        }else {
            return mid;
        }
    }
    return -1;

}
int main() {
    vector<int>v={12,78,79,82,95};
    int target=78;
    int result=binSearch(v,target);
    cout<<"The target element is : "<<result<<endl;
    return 0;
}
