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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode();
        if(l1 == NULL || l2 == NULL){
            if(l1!=NULL) return l1;
            if(l2!=NULL) return l2;
            return NULL;
        }
        ListNode *ans=l3;
        ListNode *p1,*p2;
        p1 = l1,p2 = l2; 
        while(p1 != NULL && p2 != NULL) {
            if(p1->val >= p2->val){
                l3->val = p2->val;
                l3->next = new ListNode();
                
                p2=p2->next;
                
            }
            else{
                l3->val = p1->val;
                l3->next = new ListNode();
                
                p1=p1->next;
            }
            if(p1 != NULL && p2 != NULL) l3 = l3 ->next;
        }
        if(p1!=NULL){
            cout<<p1 -> val<<endl;
                l3 ->next=p1;
        }
       if(p2!=NULL){
           cout<<p2->val<<endl;
                l3 -> next=p2;
        } 
        return ans;
    }
};