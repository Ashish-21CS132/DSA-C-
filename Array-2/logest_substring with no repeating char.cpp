#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//jab vlaue repeat ho rhi ho to start ko update kr do aur lenght ko update kr do
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
         
         map<char,int>m;
         int maxi=1,start=-1;
        for(int i=0;i<n;i++){
            if(m[s[i]]>start){
                start=m[s[i]];
            }
            m[s[i]]=i;

            maxi=max(maxi,i-start);
        }

        return maxi;
        
       
    }
};