// class Solution(object):
//     def reverseWords(self, s):
//         """
//         :type s: str
//         :rtype: str
//         """
//         ans=" ".join(s.strip().split()[::-1])
        
//         return ans
#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//remove extra spaces and reverse the string [ans=" ".join(s.strip().split()[::-1])]
        
class Solution {
public:
    string reverseWords(string s) {
       int n=s.size();
       stack<string>st;
       string ans="";

       for(int i=0;i<n;i++){
        if(s[i]==' ')continue;

        string word="";
        while(i<n && s[i]!=' '){word+=s[i];i++;}
        st.push(word);
       }

       while(!st.empty()){
         ans+=st.top();
         st.pop();
         ans+=" ";
       } 
       int size=ans.size();
       ans=ans.substr(0,size-1);
       return ans;
    }
};