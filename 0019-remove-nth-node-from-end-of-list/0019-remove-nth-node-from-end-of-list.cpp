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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp1 = head;
        temp1= head;
        while (temp1 != NULL) {
            len++;
            temp1 = temp1->next;
        }
        if (len == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* temp2 = head;
        for (int i =0; i <len-n-1;i++) {
            temp2 = temp2->next;
        }
        ListNode* nodeToDelete = temp2->next;
        temp2->next = temp2->next->next;
        delete nodeToDelete;  
        
        return head;
    }
};