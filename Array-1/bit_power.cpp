#include<bits/stdc++.h>
using namespace std;

int main(){
return 0;
}

class Solution {
public:
    double myPow(double x, int n) {
     double ans = 1;

    while (n > 0) {

        int last_bit = (n & 1);

        // Check if current LSB
        // is set
        if (last_bit) {
            ans = ans * x;
        }

        x = x * x;

        // Right shift
        n = n >> 1;
    }

    return ans;   
    }
};