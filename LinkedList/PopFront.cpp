// #include<iostream>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* next;
//
//     Node(int value) {
//         data=value;
//         next=NULL;
//     }
// };
//
// class List{
//     Node* head; // head pointer
//     Node* tail; // tail pointer
//
// public:
//     List(){
//         head=tail=NULL;
//     }
//
//     void push_front(int val) {
//         Node* newNode= new Node(val); //dynamic
//         if (head==NULL) {
//             head=tail=newNode;
//             return;
//         }
//         else {
//             newNode->next=head;
//             head=newNode;
//         }
//
//     }
//     //push back function to insert a new node at the end of the list
//     void push_back(int val) {
//         Node* newNode = new Node(val);
//
//         if (head == NULL) {
//             head=tail=newNode;
//
//         }else {
//             tail->next=newNode;
//             tail=newNode;
//         }
//     }
//
//     void pop_front() {
//         if (head==NULL) {
//             cout<<" L L is empty\n";
//             return;
//         }
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//
//         delete temp;
//
//     }
//
//     void printLL() {
//         Node* temp=head;
//         while (temp!=NULL) {
//             cout<<temp->data<<" ";
//             // cout<<temp->data<<"->";  // use this if you want arrow b/w the elts. instead of space
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
//
// int main() {
//     List ll;
//
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//
//
//     ll.push_back(4);
//
//     ll.pop_front();
//
//     ll.printLL();
//
//     return 0;
// }