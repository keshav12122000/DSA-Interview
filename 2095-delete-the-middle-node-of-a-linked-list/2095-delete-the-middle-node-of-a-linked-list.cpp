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
    int count(ListNode* head){
         ListNode* node=head;
        int count=0;
        while(node!=NULL){
            count++;
            node=node->next;
        }
        return count/2;
    }
    void delete1(ListNode* head,ListNode* node){
        // node->val=node->next->val;
        node->next=node->next->next;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return NULL;
        ListNode* node=head;
        // int count=0;
        // while(node!=NULL){
        //     node=node->next;
        //     count++;
        // }
        // cout<<count;
        int mid=count(head);
        for(int i=0;i<mid-1;i++){
            node=node->next;
            // if(node->next==NULL)
            //     delete1(head,node);
        }
        // if(node=count/2){
            delete1(head,node);
        // }
        
        return head;
    }
};