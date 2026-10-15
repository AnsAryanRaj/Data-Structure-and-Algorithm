// class Solution {
// public:
//     void removeCycle(ListNode* head) {
//         if (head == NULL) return;
//
//         ListNode* slow = head;
//         ListNode* fast = head;
//
//         // Step 1: Detect cycle
//         do {
//             if (fast == NULL || fast->next == NULL) {
//                 return; // No cycle
//             }
//
//             slow = slow->next;
//             fast = fast->next->next;
//
//         } while (slow != fast);
//
//         // Step 2: Find cycle starting node
//         slow = head;
//
//         if (slow == fast) {
//             // Cycle starts at head
//             while (fast->next != slow) {
//                 fast = fast->next;
//             }
//             fast->next = NULL;
//             return;
//         }
//
//         while (slow->next != fast->next) {
//             slow = slow->next;
//             fast = fast->next;
//         }
//
//         // Step 3: Remove cycle
//         fast->next = NULL;
//     }
// };