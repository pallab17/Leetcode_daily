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
        // base case
        if(!head || !head->next) return head;
// iterative soln Tc - O(N)  sc - (1)
        // ListNode *currentNode = head;
        // ListNode *nextNode = head->next;

        // while(nextNode){  // nextNode jodi na ei thake tahole gcd ber korbo ki bhabe

        // ListNode *gcdNode = new ListNode(__gcd(currentNode->val,nextNode->val));

        // currentNode->next = gcdNode;

        // gcdNode->next = nextNode;

        // currentNode = nextNode;

        // nextNode = nextNode->next;



        // }
        
        // return head;


// recursive soln
// tc - O(N)
// sc - O(N) recursion stack space

// recursion ke send korchi head r porer node gulo
        ListNode *recursionNode = insertGreatestCommonDivisors(head->next);

// gcd node ta bnaiye value push korchi
ListNode *gcdNode = new ListNode(__gcd(head->val,head->next->val));


gcdNode->next = recursionNode;

head->next = gcdNode;


return head;



    }
};