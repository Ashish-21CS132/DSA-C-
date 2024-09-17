#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {

#define fori(n) for (int i = 0; i < n; i++)
#define forj(n) for (int j = 0; j < n; j++)
#define loop(a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
       
        vector<pair<int,int>>vp;
        fori(n){
            forj(m){
                if(mat[i][j]==0) vp.push_back({i,j});
            }

        }

        for(auto e:vp){
            for(int k=0;k<n;k++)mat[k][e.second]=0;
            for(int k=0;k<m;k++) mat[e.first][k]=0;
        }
    }
};