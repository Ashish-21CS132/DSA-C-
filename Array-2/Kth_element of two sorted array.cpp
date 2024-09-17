#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
       int i=0,j=0,kth=0;
       
       while(i<n && j<m){
           if(arr1[i]<arr2[j]){
              kth++;
              if(k==kth)return arr1[i];
              i++;
           }
           else {
               kth++;
               if(k==kth) return arr2[j];
               j++;
           }
       }
       
       while(i<n){
           kth++;
           if(k==kth) return arr1[i];
           i++;
       }
       while(j<m){
           kth++;
           if(k==kth) return arr2[j];
           j++;
       }
       return -1;
    }