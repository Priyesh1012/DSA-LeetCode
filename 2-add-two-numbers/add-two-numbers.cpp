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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* total;
        int carry =  0;
        int sum = temp1->val + temp2->val + carry;
        if(sum > 9){
                total = new ListNode(sum % 10);
                carry = 1;
        }
        else{
            total = new ListNode(sum+carry);
            carry = 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
        ListNode* key = total;
        while(temp1 != NULL & temp2 != NULL){
            int sum = temp1->val + temp2->val + carry;
            if(sum > 9){
                key->next = new ListNode(sum % 10);
                carry = 1;
            }
            else{
              key->next = new ListNode(sum);
              carry = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            key = key->next;
        }

        if(temp1 != NULL && carry == 0){
            key->next = temp1;
        }
        else{
            while(temp1 != NULL){
                int sum = temp1->val + carry;
                if(sum > 9){
                    key->next = new ListNode(sum % 10);
                    carry = 1;
                }
                else{
                key->next = new ListNode(sum);
                carry = 0;
                }
                temp1 = temp1->next;
                key = key->next;
            }
        }
        if(temp2 != NULL && carry == 0){
            key->next = temp2;
        }
        else{
            while(temp2 != NULL){
                int sum = temp2->val+carry;
                if(sum > 9){
                    key->next = new ListNode(sum % 10);
                    carry = 1;
                }
                else{
                key->next = new ListNode(sum);
                carry = 0;
                }
                temp2 = temp2->next;
                key = key->next;
            }
        }
        if(carry == 1){

            key->next = new ListNode(1);
        }
        
        return total;
    }
};