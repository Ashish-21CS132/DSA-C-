#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;

        int sum=0;
        int count=0;
        

        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(sum==k)count++;
            if(mp.find(sum-k)!=mp.end())count+=mp[sum-k];
            
            mp[sum]++;
        
        }
        return count;
    }
};