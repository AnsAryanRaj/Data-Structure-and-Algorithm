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
//     void pop_back() {
//         if (head==NULL) {
//             cout<<"List is empty";
//             return ;
//         }
//         Node*temp=head;
//         while (temp->next !=tail) {
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         delete tail;
//         tail=temp;
//     }
//     //function to insert in the middle of the LL
//     void insertLL(int val, int pos) {
//         if (pos < 0) {
//             cout<<"invalid pos\n";
//             return ;
//         }
//         if (pos==0) {
//             push_front(val);
//             return;
//         }
//         Node* temp = head;
//         for (int i=0;i< pos-1;i++) {
//             if (temp==NULL) { // hume jis pos pe node create karna hai usse pehle wale node pe aa gye
//                 cout<<"invalid pos\n";
//                 return ;
//             }
//             temp=temp->next;
//
//         }
//         Node* newNode =new Node(val); // wha ane ke baad hum new node create kar rhe hai
//         newNode->next=temp->next;
//         temp->next=newNode;
//
//     }
//
//     //print the LL
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
//     ll.insertLL(4,1);
//
//
//
//     ll.printLL();
//
//
//     return 0;
// }