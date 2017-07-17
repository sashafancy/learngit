class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = nums[0];
        int t = nums[0];
        for(int i = 1; i<nums.size(); i++)
        {
            t = max(t+nums[i],nums[i]);
            s = max(s,t);
        }
        return s;
    }
};