#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}



class Solution {
public:

    bool isvalid(vector<vector<int>>& grid,int n,int m,int i,int j){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1)return 1;
        return 0;
    }

    void dfs(vector<vector<int>>& grid,int n,int m,int i,int j,int &ans){
        grid[i][j]=0;

        if(isvalid(grid,n,m,i-1,j)) {
            ans++; dfs(grid,n,m,i-1,j,ans);
        }
         if(isvalid(grid,n,m,i+1,j)) {
            ans++; dfs(grid,n,m,i+1,j,ans);
        }
         if(isvalid(grid,n,m,i,j-1)) {
            ans++; dfs(grid,n,m,i,j-1,ans);
        }
         if(isvalid(grid,n,m,i,j+1)) {
            ans++; dfs(grid,n,m,i,j+1,ans);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans,maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=0;
                
                if(grid[i][j]==1){
                    ans++;
                    dfs(grid,n,m,i,j,ans);
                }
                maxi=max(maxi,ans);
            }
        }

        return maxi;
    }
};