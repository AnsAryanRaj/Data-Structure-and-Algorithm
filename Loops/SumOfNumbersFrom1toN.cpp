 #include<iostream>
 using namespace std;
 int main() {
     int n;
     int sum=0;
     cout<<"Enter the number n:";
     cin>>n;
     for (int i=0; i<=n;i++) {
         sum=sum+i;

     }
     cout<<sum<<endl; // this line prints the sum of n numbers
     return 0;
 }


//Observe the difference between both the code--

 #include<iostream>
 using namespace std;
 int main() {
     int n;
     int sum=0;
     cout<<"Enter the number n:";
     cin>>n;
     for (int i=0; i<=n;i++) {
         sum=sum+i;
         cout<<sum<<endl; //this prints the sum in each iteration
     }

     return 0;
 }