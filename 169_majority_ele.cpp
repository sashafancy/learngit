class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int len = nums.size();
        if(len==1)
            return nums[0];
        sort(nums.begin(),nums.end());
        int count = 1;
        for(int i = 0; i<len-1 ; i++)
        {
            if(nums[i+1]==nums[i])
            {
                count++;
            }
            else
            {
                if(count>len/2)
                    return nums[i];
                count = 1;
            }
        }
        if(count>len/2)
            return nums[len-1];
    }
};