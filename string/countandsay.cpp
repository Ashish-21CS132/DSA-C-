#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
//111222 -->3122 ans
class Solution {
public:
    string countAndSay(int n) {
       if(n==1)return "1";

       string say=countAndSay(n-1);
       
       string ans="";
       for(int i=0;i<say.size();i++){
        int ct=1;
        char ch=say[i];

        while(i<say.size() && say[i]==say[i+1]){
            ct++;i++;
        }
         ans+=(to_string(ct)+ch);
       }
       return ans;
    }
};