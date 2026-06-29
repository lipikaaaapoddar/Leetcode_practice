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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* a_list = list1;
        ListNode* b_list = list1;
        ListNode* list_2 = list2;
        while(a>1){
            a_list = a_list->next;
            a--;
        }
        while(b+1 !=0){
            b_list = b_list->next;
            b--;
        }
        a_list->next = list2;
        while(list_2->next!= NULL) list_2= list_2->next;
        list_2->next = b_list;
        return list1;
    }
};