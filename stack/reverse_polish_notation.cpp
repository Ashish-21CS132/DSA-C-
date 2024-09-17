#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
   bool sign(string str){
        if(str=="+" || str=="-" || str=="*" || str=="/")return 1;

        return 0;
    }
    int evalRPN(vector<string>& tok) {
        stack<string>s;

        for(auto ch:tok){
            if(!sign(ch)){
            s.push(ch);
            
            }
            else {
              int a=stoi(s.top());
              s.pop();
              int b=stoi(s.top());
              s.pop();
              int cal;
              if(ch=="+") cal=b+a;
              if(ch=="-") cal=b-a;
              if(ch=="*") cal=b*a;
              if(ch=="/") cal=b/a;

              s.push(to_string(cal));
            }
        }

        return stoi(s.top());
    }
};