#include <vector>

#ifndef SOLUTION_19
#define SOLUTION_19

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{

    private:
        int linkedListSize(ListNode* iterator);
        ListNode* solve(ListNode* head, int n);
    public:
        void test(std::vector<int>& values, int n);

};

#endif SOLUTION_19