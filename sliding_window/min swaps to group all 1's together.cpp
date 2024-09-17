#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    // ring ho to arr ko do baar add kar lo
    // fir maine sliding window perform kar diya
    int minSwaps(vector<int>& nums) {
      
      int n=nums.size();
      if(n==1)return 0;
      vector<int>v(2*n);
      for(int i=0;i<n;i++)v[i]=nums[i];
      for(int i=0;i<n;i++) v[i+n]=nums[i];

      int c1=count(nums.begin(),nums.end(),1);
      int mini=INT_MAX;
      
      int zeros=0;
      for(int j=0;j<c1;j++){
        if(v[j]==0)zeros++;
      }

      for(int i=1;i<2*n-c1;i++){
        if(v[i+c1-1]==0)zeros++;
        if(v[i-1]==0)zeros--;
        mini=min(mini,zeros);
      } 
      return mini; 
    }
};