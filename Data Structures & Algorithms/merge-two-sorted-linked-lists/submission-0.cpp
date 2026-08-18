class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1,ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        ListNode* ans=new ListNode(-1);
        ListNode* curr=ans;

        while(h1!=NULL && h2!=NULL){
            if(h1->val<=h2->val){
                curr->next=h1;
                h1=h1->next;
            }else{
                curr->next=h2;
                h2=h2->next;
            }

            curr=curr->next;
        }

        if(h1!=NULL){
            curr->next=h1;
        }else{
            curr->next=h2;
        }

        return ans->next;
    }
};