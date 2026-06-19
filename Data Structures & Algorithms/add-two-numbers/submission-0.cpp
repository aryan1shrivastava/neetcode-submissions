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
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* dummyHead =  new ListNode(0);
        ListNode* curr = dummyHead;
        int carry =0 ;

        while(t1!= NULL || t2!= NULL){

            int val1 =0 ;
            int val2 =0 ;

            if(t1){
                val1 = t1->val;
                t1 = t1->next;
            } 
            if(t2){
                val2 = t2->val;
                t2 = t2->next;
            } 

            int sum = carry + val1 + val2;
                       
            carry = sum / 10;

            ListNode* newNode = new ListNode(sum%10);

            curr->next = newNode;
            curr = curr->next;
        }

        if(carry){
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
        }

        return dummyHead->next;
    }
};
