class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==0)
            return 0; 
        vector<int> mon(len,0);
        mon[0] = nums[0];
        mon[1] = nums[1];
        mon[2] = nums[0]+nums[2];
        for(int i = 3 ; i<len; i++)
            mon[i] = max(mon[i-2],mon[i-3]) + nums[i];
        return max(mon[len-1],mon[len-2]);
    }
};