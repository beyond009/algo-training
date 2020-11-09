class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* l3  = new ListNode();
        ListNode* ans = l3;
        int f = 0;
        if(lists.size() == 1) return lists[0];
        if(lists.size() == 0) return NULL;
        while(1){
            int minn = 0x3f3f3f3f;
            int p = lists.size();
            int k = 0;
            for(int i = 0;i < lists.size();i++){
                if(lists[i] == NULL){
                    k++;
                    continue;
                }else{
                    if (lists[i]->val < minn)
                    {
                        minn = lists[i] -> val;
                        p = i;
                    }
                }
            }
            if(k == lists.size()) return NULL;
            if (k == lists.size() - 1)
            {
                if(f){
                    if(lists.size() == 2){
                        l3 -> val = lists[p] -> val;
                        if(lists[p] -> next != NULL){
                            lists[p] = lists[p] -> next;
                            l3 -> next = lists[p];
                        }
                    }else{
                        l3 -> next = lists[p];
                    }
                }
                else {
                    return lists[p];
                }
                return ans;
            }

            if(p != lists.size()){
                l3 -> val = minn;
                l3->next = new ListNode();
                if(k != lists.size() - 2 || lists.size() == 2){l3 = l3->next;f=1;}
                 
                lists[p] = lists[p] -> next;
            }
        }
    }
};