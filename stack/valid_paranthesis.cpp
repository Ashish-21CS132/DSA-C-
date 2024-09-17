#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();

        unordered_map<char,int>m={{'(',-1},{')',1},{'{',-2},{'}',2},{'[',-3},{']',3}};
        stack<char>st;
        for(int i=0;i<n;i++){
            if(m[s[i]]<0) st.push(s[i]);

            
               else if(!st.empty() && m[st.top()]==-m[s[i]])st.pop();
            
            else return 0;
        }

        return st.empty();
    }
};