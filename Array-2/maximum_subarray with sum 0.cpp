#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//jab sum repeat hoga toh uske beech wale elements ka sum 0 hoga
class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int,int>mp;
        int ans=0;
        int sum=0;
        mp[0]=-1;
        
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
            
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else {
                mp[sum]=i;
            }
        }
        return ans;
    }
};