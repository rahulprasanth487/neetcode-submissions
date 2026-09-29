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
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;


        ListNode* res = NULL;
        ListNode* head = res;

        while(list1!=NULL && list2 != NULL){
            if (list1->val<= list2->val){
                if (res==NULL){
                     res=list1;
                     head = res;
                }
                else {
                    res->next = list1;
                    res = res->next;
                }

                list1 = list1->next;
            }
            else{
                if (res==NULL){
                    res=list2;
                    head = res;
                }
                else {
                    res->next = list2;
                    res = res->next;
                }

                list2 = list2->next;
            }
        }


        if (list1==NULL && list2) res->next = list2;
        if (list2==NULL && list1) res->next = list1;

        return head;

    }
};
