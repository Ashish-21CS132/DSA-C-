#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode* next):val(x),next(next){}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    if (!head) return NULL;

    ListNode* curr = head;
    int count = 0;

    // First, check if there are at least k nodes left in the linked list
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }

    // If we have k nodes, then we reverse them
    if (count == k) {
        curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        int ct = 0;

        while (curr && ct < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            ct++;
        }
        
        // Recursively call for the remaining list and connect it
        if (next) {
            head->next = reverseKGroup(next, k);
        }

        // prev is the new head after reversing the k nodes
        return prev;
    }

    // If we don't have k nodes, return the head as it is
    return head;
}

};