#ifndef SOLUTION_2
#define SOLUTION_2

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{

    private:
        ListNode* solve(ListNode* l1, ListNode* l2);
    public:
        ListNode* test(ListNode* l1, ListNode* l2);

};

#endif SOLUTION_2