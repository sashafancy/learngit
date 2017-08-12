class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return 0;
        vector<int> s(len,1);

        for(int i = 1; i<len; i++)
        {
            for(int j = 0; j<i; j++)
            {
                if(nums[i]>nums[j])
                    s[i] = max(s[i],s[j] + 1);
            }
        }
        
        int m = 1;
        for(int i = 0; i<len; i++)
            m = max(m,s[i]);
        return m;
    }
};