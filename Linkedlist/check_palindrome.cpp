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

// Recursive approach
class Solution {
public:

    ListNode* curr;
    bool rec(ListNode* head){
        if(!head) return true;
        
        bool ans=rec(head->next);
        if(head->val!=curr->val)return false;

        curr=curr->next;
        return ans;
    }

    bool isPalindrome(ListNode* head) {
        curr=head;
        return rec(head);
    }
};

// Iterative approach slow and fast pointer
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;


        while(fast && fast->next) {
            fast = fast->next->next;

            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }

        // If the number of nodes is odd, move slow to the next node
        if (fast)
            slow = slow->next;
        
        while(prev && slow) {
            if(prev->val != slow->val) {
                return false;
            }

            prev = prev->next;
            slow = slow->next;
        }

        return true;
    }
};
