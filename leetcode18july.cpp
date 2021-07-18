class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return head;
        if(k==1) return head;
        ListNode *dummy= new ListNode(0);
        dummy->next=head;
        ListNode *cur=dummy, *forw=dummy, *back=dummy;
        int c=0;
        while(cur->next!=NULL)
        {
            cur=cur->next;
            c++;
        }
        while(c>=k)
        {
            cur=back->next;
            forw=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=forw->next;
                forw->next=back->next;
                back->next=forw;
                forw=cur->next;
            }
            back=cur;
            c=c-k;
            
        }
        return dummy->next;
    }
};
