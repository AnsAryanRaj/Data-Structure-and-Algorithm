#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxsum=INT_MIN;
        for (int val:nums) {
            currsum+=val;
            maxsum=max(maxsum,currsum);
            if (currsum<0) {
                currsum=0;
            }
        }
        return maxsum;
    }
};

int main() {
    vector<int>nums={3,-4,5,4};
    Solution obj;
    int result=obj.maxSubArray(nums);
    cout<<"Maxium subarray sum: "<<result<<endl;
    return 0;

}