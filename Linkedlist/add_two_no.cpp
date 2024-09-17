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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode* temp=head;
        int carry=0;

        while(l1 || l2 || carry){
            int dig=0;
            if(l1){
             dig=l1->val;
             l1=l1->next;
            }

            if(l2){
                dig+=l2->val;
                l2=l2->next;
            }

            dig+=carry;
            carry=dig/10;

            ListNode* newnode=new ListNode(dig%10);
            temp->next=newnode;
            temp=temp->next;
        }

        return head->next;
    }
};