//monotonic stack jab j i par dependent do as j=i+1
#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ind(n);
        stack<int>s;

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && temp[s.top()]<=temp[i]) s.pop();

            ind[i]=s.empty()?0 : s.top()-i;
            s.push(i);
        }

        return ind;

    }
};