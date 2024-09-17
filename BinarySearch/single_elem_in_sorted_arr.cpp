#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n=nums.size();
       int l=0,h=n-1;

       while(l<h){
        int mid=l+(h-l)/2;
        
        // if mid is even and mid+1 element is same as mid element then single element is in right half
        if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid&1 && nums[mid]==nums[mid-1])){
            l=mid+1;
        }
        else h=mid;
       }

       return nums[l];
    }
};