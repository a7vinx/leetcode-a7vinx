class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* cur = head;
        while (cur) {
            ++len;
            cur = cur->next;
        }
        int mid = len / 2 + 1;
        cur = head;
        while (--mid) {
            cur = cur->next;
        }
        return cur;
    }

    /*
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    */
};
