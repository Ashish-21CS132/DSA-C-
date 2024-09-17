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
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* curr1 = list1;
    ListNode* curr2 = list2;
    ListNode* dummy = new ListNode(0);
    ListNode* ans = dummy;

    while (curr1 && curr2) {
        if (curr1->val <= curr2->val) {
            ans->next = curr1;
            curr1 = curr1->next;
        } else {
            ans->next = curr2;
            curr2 = curr2->next;
        }
        ans = ans->next;
    }

    // Attach remaining nodes if any
    if (curr1) ans->next = curr1;
    if (curr2) ans->next = curr2;

    return dummy->next;
}

};