#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//A A A B B B n=2
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int time=0;
       unordered_map<int,int>mp;

       for(auto e:tasks) mp[e]++;

       priority_queue<int>q;
       for(auto e:mp)q.push(e.second);

       while(!q.empty()){
        vector<int>temp;
        int cycle=n+1;

        while(cycle && !q.empty()){
            temp.push_back(q.top()-1);
            q.pop();
            cycle--;
        }

        for(auto e:temp){
            if(e>0)q.push(e);
        }

        if(q.empty())time+=temp.size();
        else time+=(n+1);


       } 
       return time;
    }
};