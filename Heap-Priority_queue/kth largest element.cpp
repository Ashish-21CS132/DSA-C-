#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int>q;
       for(int i=0;i<nums.size();i++){
           q.push(nums[i]);
       }

       for(int i=0;i<k-1;i++){
           q.pop();
       }

       return q.top();
    }
};