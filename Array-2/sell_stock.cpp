#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//minvalue and maxprofit ko maintain karo
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int mini=p[0];
        int ans=INT_MIN;

        for(int i=0;i<n;i++){
           ans=max(ans,p[i]-mini);
           mini=min(p[i],mini);
        }

        return ans;
    }
};