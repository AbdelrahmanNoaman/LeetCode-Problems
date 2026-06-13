#include <iostream>
#include <vector>
#include "solution.h"

int Solution::linkedListSize(ListNode* iterator){
    int ctr = 0;
    ListNode* nu3 = iterator;
    while(nu3){
        ctr++;
        nu3 = nu3->next;
    }
    return ctr;
}

ListNode* Solution::solve(ListNode* head, int n){
    int size = linkedListSize(head);
    int target = size - n + 1;    
    int ctr = 1;
    ListNode* iterator = head;
    while(iterator){
        if(ctr == target - 1){
            iterator->next = iterator->next->next;
            return head;
        }
        if(ctr == target){
            head = head->next;
            return head;
        }
        iterator = iterator->next;
        ctr++;
    }
    return head;
}

void Solution::test(std::vector<int>& values, int n){
    // Pre-processing: Generate the linked list framework from the vector
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for(int val : values) {
        ListNode* newNode = new ListNode(val);
        if(!head) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Execution of algorithmic logic
    ListNode* resultHead = solve(head, n);
    
    // Post-processing: Format and print output, cleaning up memory allocation layout
    std::cout << "[";
    ListNode* temp = resultHead;
    while(temp != nullptr) {
        std::cout << temp->val;
        if(temp->next) std::cout << ", ";
        ListNode* nextNode = temp->next;
        delete temp; // Avoid memory leaks
        temp = nextNode;
    }
    std::cout << "]" << std::endl;
}