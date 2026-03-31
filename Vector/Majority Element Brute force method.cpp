#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n=v.size();
        for (int val:v) {
            int freq=0;
            for (int elem:v) {
                if (val==elem) {
                    freq++;
                }
            }
            if (freq>n/2) {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    vector<int>v={2,2,1,1,1,2,2};
    Solution obj;
    int result=obj.majorityElement(v);
    cout<<"Majority element is : "<< result<<endl;
    return 0;
}