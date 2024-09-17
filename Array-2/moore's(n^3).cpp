#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//moore's voting algorithm(n/3)
//majority element maximum 2 hi honge
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int n=nums.size();
       int count1=0;
       int maj1=NULL;

       int count2=0;
       int maj2=NULL;

       for(int i=0;i<n;i++){
        if(nums[i]==maj1)count1++;
        else if(nums[i]==maj2)count2++;
        else if(count1==0){
            maj1=nums[i];
            count1=1;
        }
        else if(count2==0){
            maj2=nums[i];
            count2=1;
        }
        else {count1--;
        count2--;
        }
       } 
       
       vector<int>res;
       int freq1=0,freq2=0;
       for(auto e:nums){
        if(e==maj1)freq1++;
        else if(e==maj2)freq2++;

       }

       if(freq1>floor(n/3)){
        res.push_back(maj1);
       }
       if(freq2>floor(n/3)){
        res.push_back(maj2);
       }

       return res;
    }
};