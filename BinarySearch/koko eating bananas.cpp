#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& pi, int h) {
        int n=pi.size();
        int ans=1;

        sort(pi.begin(),pi.end());

        int i=1,j=pi[n-1];

        while(i<=j){
            int mid=i+(j-i)/2;
           
            long long c=0;
            for(auto e:pi){
               c+=(e/mid + (e%mid!=0));
            }
           
            
            
            if(c<=h){ans=mid; j=mid-1;}
            else i=mid+1;
        }
        
        return ans;

    }
};