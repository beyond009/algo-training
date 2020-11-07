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
        ListNode* prt = head;
        int cnt = 0;
        while(prt){
            cnt++;
            prt = prt -> next;
        }
        int a = cnt - n - 1;
        prt = head;
        if(a < 0) {
            head = head ->next;
            return head;
        }
        while(a--){
            prt = prt -> next;
        }
        if((prt -> next) ->next) prt -> next = (prt -> next) -> next;
        else prt -> next = NULL;
        return head;
    }
};