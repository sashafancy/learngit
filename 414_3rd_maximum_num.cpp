class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count = 0;
        vector<int>::iterator pos;
        sort(nums.begin(),nums.end(),greater<int>());
        pos = unique(nums.begin(),nums.end());
        nums.erase(pos,nums.end());
        if(nums.size()<3)
            return nums[0];
        else 
            return nums[2];
    }
};