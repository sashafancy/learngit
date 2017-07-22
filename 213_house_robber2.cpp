class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==0)
            return 0; 
        if(len==1)
            return nums[0];
        vector<int> mon(len,0);
        mon[0] = nums[0];
        mon[1] = nums[1];
        mon[2] = nums[0]+nums[2];
        for(int i = 3 ; i<len; i++)
            mon[i] = max(mon[i-2],mon[i-3]) + nums[i];
        int max1 = max(mon[len-2],mon[len-3]);
        
        vector<int> mon2(len-1,0);
        mon2[0] = nums[1];
        mon2[1] = nums[2];
        mon2[2] = nums[1]+nums[3];
        for(int i = 3 ; i<len-1; i++)
            mon2[i] = max(mon2[i-2],mon2[i-3]) + nums[i+1];
        int max2 = mon2[len-2];
        
        return max(max1,max2);
    }
};
