#include<vector>
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;      
        ListNode *current = head;
        vector<int> v;
        while(current != NULL){
            v.push_back(current->val);
            current=current->next;
        }
        current = head;
        for(int i=v.size()-1; i >= 0; i--){
            current->val = v[i];
            current=current->next;
        }
        return head;
        
    }
};
