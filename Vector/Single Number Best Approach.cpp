 #include<iostream>
 using namespace std;
 int single(int arr[],int s) {
     int ans=0;
     for (int i=0;i<s;i++) {
         ans=ans^i;

     }

     return ans;

 }

 int main() {
     int arr[]={4,1,2,1,2};
     int s=sizeof(arr)/sizeof(arr[0]);
     int result=single(arr,s);
     cout<<"The result is : " <<result;
     cout<<endl;
     return 0;
 }


Using vector --

 #include<iostream>
 #include<vector>
 using namespace std;
 class Solution {
 public:
     int singleNumber(vector<int>& nums) {
         int ans=0;
         for (int val: nums) {
             ans=ans^val;
         }
         return ans;
     }
 };

 int main() {
     vector<int> nums={ 4,1,2,1,2};
     Solution obj;
     int result=obj.singleNumber(nums);
     cout<<"The single number is: "<< result<<endl;
     return 0;
 }