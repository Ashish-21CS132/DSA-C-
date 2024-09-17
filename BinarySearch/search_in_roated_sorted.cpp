#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:

    int searchpiv(vector<int>& nums,int n){
      int l=0,h=n-1;

      while(l<h){
        int mid=l+(h-l)/2;

        if(nums[mid]>nums[h]){
            l=mid+1;
        }
        else h=mid;
      }
      return l;
    }

    int binarysearch(int l,int h,vector<int>nums,int target){
        while(l<=h){
            int mid=l+(h-l)/2;

            if(nums[mid]==target)return mid;
            if(nums[mid]>target) h=mid-1;
            else l=mid+1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
       int n=nums.size();

       int pivotind=searchpiv(nums,n);
       int ind=-1;
       cout<<"piv"<<pivotind<<endl;

       ind=binarysearch(0,pivotind-1,nums,target);
       if(ind!=-1) return ind;

       ind=binarysearch(pivotind,n-1,nums,target);

       return ind; 
    }
};