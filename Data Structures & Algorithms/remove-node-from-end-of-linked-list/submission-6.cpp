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

        
        
        ListNode*   h   =  head;
        ListNode*   prev = nullptr;

        int s = -1, // List size
        front_nth = -1; // The nth element to remove from the end front_nth = s - (s%n)        

        for(int i=0;front_nth < 0 || i < front_nth;i++)
        {

            if(h == head && i && s==-1)
            {
                s=i;
                if (s==1)
                    front_nth=0;
                else front_nth= s - n%s;
                i=0;
            };
            prev = head;
    
            // If we reach the end of the list
            if (!head->next) head = h;
            else  head = head->next;

        }
        
        if(!prev->next) h=h->next;
        else prev->next = head->next;
         
        return h;
    }
};
