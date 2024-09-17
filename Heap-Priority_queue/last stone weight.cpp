#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}   


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();

        priority_queue<int>q;
        for(auto e:stones)q.push(e);
        int x,y;
        while(!q.empty()){
             x=q.top();
            q.pop();

            if(q.empty())return x;
             y=q.top();
            q.pop();

            q.push(x-y);
        }
        return x;
    }
};