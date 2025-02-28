#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        int currsum=0;
        int maxsum=INT_MIN;

        for(int i=0;i<n;i++){
          currsum+=nums[i];
          if(currsum>maxsum){
            maxsum=currsum;
          }

          if(currsum<0)currsum=0;
        }

        return maxsum;
    }
};