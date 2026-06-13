#include <iostream>
#include <vector>
#include "solution.h"

int main(){
    auto createList = [](const std::vector<int>& nums) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        for(int num : nums) {
            ListNode* newNode = new ListNode(num);
            if(!head) {
                head = newNode;
                tail = head;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    };

    ListNode* l1 = createList({2, 4, 3});
    ListNode* l2 = createList({5, 6, 4});

    Solution AddTwoNumbersProblem;
    ListNode* result = AddTwoNumbersProblem.test(l1, l2);
    
    ListNode* temp = result;
    while(temp != nullptr) {
        std::cout << temp->val << (temp->next ? " -> " : "");
        temp = temp->next;
    }
    
    return 0;
}