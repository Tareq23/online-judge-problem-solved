#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prevValue = nums[0];
        int cnt=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == prevValue) continue;
            prevValue = nums[i];
            nums[cnt] = prevValue;
            cnt++;
        }
        return cnt;
    }
};


int main(){

    vector<int> nums;

    cout<<Solution().removeDuplicates(nums)<<endl;

}
