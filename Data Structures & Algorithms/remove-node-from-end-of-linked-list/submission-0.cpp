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
        int len = 0;
        ListNode* temp = head;
        if(temp==NULL) return NULL;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }

        int i_rem = (len)- (n);

        if (i_rem == 0){
            ListNode* newNode = head->next;
            delete head;
            return newNode;
        }

        ListNode* newNode = head;
        while(i_rem-1>0){
            newNode = newNode->next;
            i_rem--;
        }
        ListNode* dele = newNode->next;
        newNode->next = newNode->next->next;
        delete dele;

        return head;
    }
};
