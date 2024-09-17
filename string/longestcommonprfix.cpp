#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int sz=strs.size();
       sort(strs.begin(),strs.end());
       string a=strs[0],b=strs[sz-1];
       for(int i=0;i<a.size();i++){
           if(a[i]==b[i])ans+=a[i];
           else break;
       }

       return ans;
    }
};