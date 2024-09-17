#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}
// 1=='island', 0=='water'
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]
// count the no of island
class Solution {
public:

    
    bool isvalid(int n,int m,int i,int j,vector<vector<char>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='1')return 1;
        return 0;
    }

    void dfs(vector<vector<char>>& grid ,int n,int m,int i,int j){
        grid[i][j]=0;

        if(isvalid(n,m,i-1,j,grid))dfs(grid,n,m,i-1,j);
         if(isvalid(n,m,i+1,j,grid))dfs(grid,n,m,i+1,j);
          if(isvalid(n,m,i,j-1,grid))dfs(grid,n,m,i,j-1);
           if(isvalid(n,m,i,j+1,grid))dfs(grid,n,m,i,j+1);
        

    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
     
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid,n,m,i,j);
                }
            }
        }

        return ans;
    }
};