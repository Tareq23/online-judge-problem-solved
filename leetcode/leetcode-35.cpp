#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size();
        int index=0;
        while(l<h)
        {
            int mid = (l+h)/2;
            if(nums[mid] == target) return mid;

            if(nums[mid] < target){
                l = mid+1;
                index = l;
            }
            else {
                h=mid;
                index = h;
            }
        }
        return index;
    }
};


int main(){

    vector<int> nums;
    int target  = 0;
    cout<<Solution().searchInsert(nums,target)<<endl;

}
