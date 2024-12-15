/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* answer;
    struct ListNode* head;
    int             rest;
    int             sum;


    rest = 0;
    head = malloc(sizeof(struct ListNode));
    answer = head;
    while(l1 != NULL || l2 !=NULL || rest > 0)
    {
        sum = rest;

        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        rest = sum / 10;

        answer->next = malloc(sizeof(struct ListNode));
        answer = answer->next;
        answer->val = sum % 10;
        answer->next = NULL;
    }

    struct ListNode *result = head->next;
    free(head);
    return(result);
}