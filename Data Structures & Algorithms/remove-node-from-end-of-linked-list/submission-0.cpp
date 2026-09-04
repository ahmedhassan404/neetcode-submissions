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
        if (head == nullptr)
            return head;

        int length = 1;
        ListNode* current = head;

        while (current->next != nullptr) {
            current = current->next;
            length++;
        }

        int index = length - n;

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        ListNode* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;

        return head;
    }
};