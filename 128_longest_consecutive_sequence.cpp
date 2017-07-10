class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int len = nums.size();
        if(len==0)
            return 0;
        sort(nums.begin(),nums.end());
        int count = 1;
        int temp = 1;
        
        for(int i = 0; i<len-1; i++)
        {
            if(nums[i+1]==nums[i]+1)
                temp++;  
            else if(nums[i+1]==nums[i])
            {}
            else
            {
                count = max(count,temp);
                temp = 1;                
            }

        }
        count = max(count,temp);
        return count;
        
    }
};