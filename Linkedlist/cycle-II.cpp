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

//if cycle detect then return the node where cycle starts else return NULL
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        bool flag=0;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) {flag=1; break;};
        }

        if(flag){
            ListNode* curr=head;
            while(curr!=slow){
                curr=curr->next;
                slow=slow->next;
            }
            return curr;
        }

        return NULL;
    }
};