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
    ListNode* mergeNodes(ListNode* head) {

        if(!head)return nullptr;
        ListNode* dummy=new ListNode(0);
        ListNode* begin=dummy;
       

        ListNode* temp=head->next;
      
        int merge=0;
       

        while(temp!=nullptr)
        {
          if(temp->val==0)
          {
            begin->next=new ListNode(merge);
            begin=begin->next;
            merge=0;
          }
          else
          {
            merge+=temp->val;
          }
          temp=temp->next;


          

        }
        return dummy->next;
        
    }
};