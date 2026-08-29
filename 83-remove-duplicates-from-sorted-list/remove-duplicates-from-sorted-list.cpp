/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Handle edge case for empty list or single node
        if (head == nullptr) {
            return head;
        }
        
        ListNode* current = head;
        
        // Traverse the list
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Duplicate found: save reference to the duplicate node to delete it
                ListNode* duplicate = current->next;
                // Skip the duplicate node
                current->next = current->next->next;
                // Free the memory to prevent memory leaks
                delete duplicate;
            } else {
                // No duplicate: move the pointer forward
                current = current->next;
            }
        }
        
        return head;
    }
};