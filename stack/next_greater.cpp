#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//monotonic stack jab j i par dependent do as j=i+1
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int>mp;
        stack<int>st;

        for(int i=n-1;i>=0;i--){
         while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
         }

         mp[nums2[i]]= st.empty()?-1: st.top();
         st.push(nums2[i]);
        }

        vector<int>ans;
        for(auto e:nums1){
            ans.push_back(mp[e]);
        }
        return ans;
    }
};