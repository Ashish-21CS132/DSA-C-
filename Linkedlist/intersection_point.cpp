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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1=headA;
        ListNode* curr2=headB;

        while(curr1!=curr2){
            curr1=(curr1==NULL)?headB : curr1->next;
            curr2=(curr2==NULL)? headA:curr2->next;
        }

        return curr1;


    }
};