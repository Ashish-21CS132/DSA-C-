#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//o(n) solution
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int ans=1;
        unordered_set<int>st(nums.begin(),nums.end());
        
        for(auto e:st){
            if(st.find(e-1)==st.end()){
                int c=1;
                int x=e;
                while(st.find(x+1)!=st.end()){
                    c++;
                    x++;

                }
                ans=max(ans,c);
            }
        }

        return ans;


    }
};