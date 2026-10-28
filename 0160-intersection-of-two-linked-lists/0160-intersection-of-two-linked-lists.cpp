class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         map<ListNode*,bool>mpp;

         ListNode* temp1=headA;
         ListNode* temp2=headB;

         while(temp1 != NULL){
            mpp[temp1]=true;
            temp1=temp1->next;
         }

         while(temp2 != NULL){
            if(mpp.find(temp2) != mpp.end()){
                return temp2;
            }

            temp2=temp2->next;
         }

         return NULL;

    }
};