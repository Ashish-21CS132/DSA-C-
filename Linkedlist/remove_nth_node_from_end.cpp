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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=head;
        ListNode* temp=head;

        while(n--){
            temp=temp->next;
        }

        if(!temp) {
            ListNode* result=head->next;
            delete(head);
            return result;
            }

        while(temp->next){
            temp=temp->next;
            prev=prev->next;
        }

        ListNode* delnode=prev->next;

        prev->next=prev->next->next;
        delete(delnode);

        return head;
    }
};