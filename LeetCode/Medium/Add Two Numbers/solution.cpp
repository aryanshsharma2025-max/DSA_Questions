class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* ans = new ListNode(0);
        ListNode* p = ans;

        int carry = 0;

        while(l1 || l2 || carry)
        {
            int a = 0;
            int b = 0;

            if(l1)
            {
                a = l1->val;
                l1 = l1->next;
            }

            if(l2)
            {
                b = l2->val;
                l2 = l2->next;
            }

            int sum = a + b + carry;

            carry = sum / 10;

            p->next = new ListNode(sum % 10);
            p = p->next;
        }

        return ans->next;
    }
};