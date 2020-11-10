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
    ListNode* swapPairs(ListNode* head) {
        ListNode* ans = head;
        if(!head) return NULL;
        while(head -> next){
            int tmp = head -> val;
            head -> val = head -> next -> val;
            head -> next -> val = tmp;
            if(head -> next -> next)
                head = head -> next -> next;
            else if(head -> next)
                head = head -> next;
        }
        return ans;
    }
};