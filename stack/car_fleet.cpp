#include<bits/stdc++.h>
using namespace std;


int main(){
return 0;
}

//monotonic stack jab j i par dependent do as j=i+1
//fleet means ek sath chalne wale cars
class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        int n=pos.size();
       vector<pair<float,float>>vp;
       stack<float>st;

       for(int i=0;i<n;i++){
        vp.push_back({pos[i],speed[i]});
       }
       sort(vp.begin(),vp.end()); 

       for(int i=0;i<n;i++){
        float time=((float)target-vp[i].first)/vp[i].second;

        while(!st.empty() && time>=st.top()){
            st.pop();
        }
        st.push(time);
       }

       return st.size();
    }
};