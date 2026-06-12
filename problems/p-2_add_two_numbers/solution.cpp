#include <vector>
#include <algorithm>
#include "solution.h"

ListNode* Solution::solve(ListNode* l1, ListNode* l2){
    int list_one_size = 0;
    int list_two_size = 0;

    ListNode* first_one_temp = l1;
    ListNode* second_one_temp = l2;

    std::vector<int> output;
    int max_size = std::max(list_one_size, list_two_size);
    int carry = 0;
    while(first_one_temp!=nullptr || second_one_temp!=nullptr){
        int current_res = carry;
        if(first_one_temp!=nullptr){
            current_res+=first_one_temp->val;
            first_one_temp = first_one_temp->next;
        }
        if(second_one_temp!=nullptr){
            current_res+=second_one_temp->val;
            second_one_temp = second_one_temp->next;
        }
        carry = current_res / 10;
        output.push_back(current_res % 10);
    }
    if (carry != 0)
        output.push_back(carry);

    ListNode* head = nullptr;
    ListNode* current = nullptr;

    for (int val : output) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            current = head;
        }
        else {
            current->next = newNode;
            current = newNode;
        }
    }
    return head;
}

ListNode* Solution::test(ListNode* l1, ListNode* l2){
    return solve(l1, l2);
}