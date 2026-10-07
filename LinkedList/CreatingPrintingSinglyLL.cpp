// #include<iostream>
// using namespace std;
// class Node {
// public:
//     int data; // to store the value
//     Node* next; // store the address of next node
//
//     Node(int value) { // constructor
//         data=value;
//         next=NULL; // initialized the next wiht NULL value
//     }
// };
// void display(Node* head) { // function to print the node
//     Node* temp=head;
//     while (temp !=NULL) {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     cout<<endl;
// }
//
// int main() {
//     Node* head=new Node(1);// we manually created the ll
//     Node* second=new Node(2);
//     Node* third= new Node(3);
//
//     head->next=second;
//     second->next=third;
//     third->next=NULL;
//
//     display(head);
//     return 0;
// }