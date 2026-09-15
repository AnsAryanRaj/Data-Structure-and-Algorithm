// //linkedlist basic program--
// #include<iostream>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node*next;
//
//     Node(int value) {
//         data=value;
//         next=NULL;
//     }
// };
// int main() {
//     int k;
//     cout<<"enter number of nodes: ";
//     cin>>k;
//
//     Node* head=NULL;
//     Node* tail=NULL;
//
//     for (int i=1;i<=k;i++) {
//         int data;
//         cout<<"enter data of node"<<i<<":";
//         cin>>data;
//
//         Node* newNode=new Node(data);
//
//         if (head==NULL) {
//             head=newNode;
//             tail=newNode;
//         }else {
//             tail->next=newNode;
//             tail=newNode;
//         }
//     }
//     cout<<"Linked list:";
//
//     Node* temp=head;
//     while (temp!=NULL) {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }