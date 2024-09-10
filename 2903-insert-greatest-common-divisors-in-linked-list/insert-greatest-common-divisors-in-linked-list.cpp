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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode *currentNode = head;
        ListNode *nextNode = head->next;

        while(nextNode){  // nextNode jodi na ei thake tahole gcd ber korbo ki bhabe

        ListNode *gcdNode = new ListNode(__gcd(currentNode->val,nextNode->val));

        currentNode->next = gcdNode;

        gcdNode->next = nextNode;

        currentNode = nextNode;

        nextNode = nextNode->next;



        }
        
        return head;
    }
};