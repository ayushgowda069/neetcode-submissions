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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy =new ListNode(0);
        if(list1==nullptr) {
            dummy->next=list2;
            return dummy->next;
        }
        if(list2==nullptr) {
            dummy->next=list1;
            return dummy->next;
        }

        if(list1==nullptr&&list2==nullptr){
            return nullptr;
        }
        ListNode* a=list1;
        ListNode* b=list2;
        ListNode* temp=dummy;
        while(a!=nullptr && b!=nullptr){
            if(a->val<=b->val){
                dummy->next=a;
                dummy=dummy->next;
                a=a->next;
            }else{
                dummy->next=b;
                dummy=dummy->next;
                b=b->next;
            }
        }
        while(a!=nullptr&&b==nullptr){
            dummy->next=a;
            dummy=dummy->next;
            a=a->next;
        }
            while(b!=nullptr&&a==nullptr){
            dummy->next=b;
            dummy=dummy->next;
            b=b->next;
        }
        return temp->next;
    }
};
