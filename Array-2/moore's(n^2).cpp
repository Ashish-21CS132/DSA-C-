#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

//moore's voting algorithm
//majority element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int count=0;
       int maj=NULL;

       for(int i=0;i<n;i++){
        if(nums[i]==maj)count++;
        else if(count==0){
            maj=nums[i];
            count=1;
        }
        else count--;
       } 
       return maj;
    }
};