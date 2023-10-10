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
        //if (!list1 || !list2)
            //return (list1) ? list2 : list1;
        if (!list1)
            return list2;
        if (!list2)
            return list1;

        if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

// Previous (and longwinded) solution
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         // catch case where neither list is initialized
//         if (endOfBothLists(list1, list2)) 
//             return list1;
//         // catch cases where one list is null
//         if (endOfOneList(list1, list2)) 
//             return noneNullList(list1, list2);
        
//         // determine which node is added to mergedlist first
//         int first = 0;
//         ListNode* list1head = list1; 
//         ListNode* list2head = list2;
//         if (list1->val >= list2->val) {
//             first = list1->val;
//             list1head = list1->next;
//         } else {
//             first = list2->val;
//             list2head = list2->next;
//         }

//         return new ListNode(first, ListRecurse(list1head, list2head));
//     }

//     ListNode* ListRecurse(ListNode* list1head, ListNode* list2head) {
//         // base case, returns nullptr ListNode (end of merged list)
//         if (endOfBothLists(list1head, list2head))
//             return list1head;

//         int val = 0;
//         if (!endOfOneList(list1head, list2head)) {
//             if (list1head->val >= list2head->val) {
//                 val = list1head->val;
//                 list1head = list1head->next;
//             } else {
//                 val = list2head->val;
//                 list2head = list2head->next;
//             }
//         } else {
//             // would use noneNullList() here, but couldn't generalize listNode->next
//             if (list1head == nullptr) {
//                 val = list2head->val;
//                 list2head = list2head->next;
//             } else {
//                 val = list1head->val;
//                 list1head = list1head->next;
//             }
//         }
//         return new ListNode(val, ListRecurse(list1head, list2head));
//     }

//     bool endOfBothLists(ListNode* list1, ListNode* list2) {
//         return (list1 == nullptr && list2 == nullptr);
//     }

//     bool endOfOneList(ListNode* list1, ListNode* list2) {
//         return (list1 == nullptr || list2 == nullptr);
//     }

//     // checks both Listnodes, returns the one which is not a nullptr and moves forward one node
//     ListNode* noneNullList(ListNode* list1, ListNode* list2) {
//         return (list1 == nullptr) ? list2 : list1;
//     }
// };
