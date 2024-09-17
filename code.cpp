#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums={1, 3, 3, 9, 10, 4};
    sort(nums.begin(),nums.end());

    int first=lower_bound(nums.begin(),nums.end(),9)-nums.begin();
    int last = lower_bound(nums.begin(), nums.end(), 12)-nums.begin();
    cout << "whdw" << nums[6] << endl;
    if(last==nums.size()) last--;
    else {
        nums[last]==12?last: last--;
    }
    cout<<first<<" "<<last<<endl;
    cout<<last-first+1<<endl;
    return 0;
}