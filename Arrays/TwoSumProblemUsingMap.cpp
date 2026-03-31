#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void twoSum(int arr[], int n, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
            int complement = target - arr[i];

            if(m.find(complement) != m.end()) {
                cout<<"Indices: "<<m[complement]<<" "<<i;
                return;
            }
            m[arr[i]] = i;
        }
    }
};

int main() {
    int arr[5] = {2,1,5,6,4};
    int target = 9;
    Solution obj;
    obj.twoSum(arr,5,target);
    return 0;
}