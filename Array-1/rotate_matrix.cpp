#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
       int n=mat.size();
       
        //transpose nikalo
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }

        //har row ko reverse karo
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
};