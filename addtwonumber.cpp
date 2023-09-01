class Solution {
public:
    ListNode* addTwoNumbers(ListNode* m, ListNode* n) {
        int cy = 0;
        ListNode* dy = new ListNode(0);
        ListNode* l = dy;
        while (m || n) {
            int sum = cy;
            if (m) {
                sum += m->val;
                m = m->next;
            }
            if (n) {
                sum += n->val;
                n = n->next;
            }
            
            if (sum > 9) {
                cy = 1;
                sum = sum % 10;
            }
            else {
                cy = 0;
            }

            l->next = new ListNode(sum);
            l = l->next;
        }
        
        if (cy) {
            l->next = new ListNode(cy);
        }
        
        return dy->next;
    }
};