#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:

    bool valid(string str){
        stack<char>s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='(') s.push('(');
            else if(!s.empty()  && s.top()=='(') s.pop();
            else return 0;
        }

        return 1;
    }
    vector<string> generateParenthesis(int n) {
        string ans="";

        for(int i=0;i<n;i++)ans+='(';
        for(int i=0;i<n;i++) ans+=')';
         vector<string>ansss;
         ansss.push_back(ans);

        string res=ans;
        next_permutation(res.begin(),res.end());
       

        while(res!=ans){
            if(valid(res))ansss.push_back(res);
            next_permutation(res.begin(),res.end());
        }

        return ansss;


    }
};