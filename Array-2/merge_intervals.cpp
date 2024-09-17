#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int n=in.size();
        sort(in.begin(),in.end());
        vector<vector<int>>v;
        int i=0,j=1;
        if(n==1) return in;
        while(j<n){
            if(j==n-1 && in[i][1]<in[j][0]){
                v.push_back(in[i]);
                v.push_back(in[j]);
                i=j; j++;
            }

            //no overlapping
           else if(in[i][1]<in[j][0]){
                v.push_back(in[i]);
                i=j; j++;
            }
            
            //overlapping found
            else if(in[i][1]>= in[j][0]){
                if(in[i][1]>in[j][1]){j++; continue;};
                in[i][1]=in[j][1];
                if(j==n-1) v.push_back(in[i]);
                j++;
            }
        }
        return v;
    }
};