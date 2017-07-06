class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        if(len==0)
            return 0;
        if(len==1)
            return nums[0];
        int s_max[len] = {};
        int s_min[len] = {};
        int t_max[len] = {};
        int t_min[len] = {};
        /*
        s_max.push_back(nums[0]);
        s_min.push_back(nums[0]);
        t_max.push_back(nums[0]);
        t_min.push_back(nums[0]);    
        */
        s_max[0] = nums[0];
        s_min[0] = nums[0];
        t_max[0] = nums[0];
        t_min[0] = nums[0];  
        
        for(int i = 1; i < len ; i++)
        {
            if(nums[i]>=0)
            {   
                t_max[i] = max(t_max[i-1]*nums[i],nums[i]);
                t_min[i] = min(t_min[i-1]*nums[i],nums[i]);
                s_max[i] = max(s_max[i-1],t_max[i]);
                s_min[i] = min(s_min[i-1],t_min[i]);
            }
            else
            {
                t_max[i] = max(t_min[i-1]*nums[i],nums[i]);
                t_min[i] = min(t_max[i-1]*nums[i],nums[i]);
                s_max[i] = max(s_max[i-1],t_max[i]);
                s_min[i] = min(s_min[i-1],t_min[i]);
            }
            
        }
        return s_max[len-1];
    }
};