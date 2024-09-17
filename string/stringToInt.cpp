#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    int myAtoi(string s) {
       int i=0;
       int sign=1;
       long ans=0;
       int n=s.size();

       while(i<n && s[i]==' ')i++;
       if(s[i]=='-'){
           sign=-1;
           i++;
       }

       else if(s[i]=='+')i++;
       
       while(i<n){
           if(s[i]>='0' && s[i]<='9'){
               ans=ans*10+s[i]-'0';

               if(ans>INT_MAX && sign==-1)return INT_MIN;
               else if(ans>INT_MAX && sign==1) return INT_MAX;
               i++;
           }
           else return ans*sign;
       }

       return ans*sign;

    }
};