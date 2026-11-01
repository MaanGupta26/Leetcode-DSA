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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr);

        int n=0;
        ListNode* curr = head;
        while (curr!= nullptr) {
            n++;
            curr = curr->next;

        }
        int base_size = n/k;
        int extra = n%k;
        curr = head;

        for (int i=0; i<k && curr!= nullptr;i++) {
            result[i] = curr;

            int part_size = base_size + (extra > 0 ? 1 : 0);
            extra--; 
            for (int j = 1; j < part_size; j++) {
                curr = curr->next;
            }
            
            ListNode* next_part = curr->next;
            curr->next = nullptr;
            curr = next_part;
        }
        
        return result;
    }
};