#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}   

//{1,2,3,4} join by ring and adjacent robbering is not possible
class Solution {
public:
    int robHelper(vector<int>& nums, int start, int end, vector<int>& memo) {
        if (start > end) return 0;
        if (memo[start] != -1) return memo[start];
        
        int robCurrent = nums[start] + robHelper(nums, start + 2, end, memo);
        int skipCurrent = robHelper(nums, start + 1, end, memo);
        
        memo[start] = max(robCurrent, skipCurrent);
        return memo[start];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        
        // Case 1: Rob houses from 0 to n-2
        vector<int> memo1(n, -1);
        int rob1 = robHelper(nums, 0, n - 2, memo1);
        
        // Case 2: Rob houses from 1 to n-1
        vector<int> memo2(n, -1);
        int rob2 = robHelper(nums, 1, n - 1, memo2);
        
        return max(rob1, rob2);
    }
};