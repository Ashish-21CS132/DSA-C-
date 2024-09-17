#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={3,4,2,1,9,8,6,7};
    priority_queue<int>q;
    for(auto e:v){
        q.push(e);
    }
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}