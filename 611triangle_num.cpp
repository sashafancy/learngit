class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count = 0;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<len;i++)
        {
            for(int j = i+1;j<len;j++)
            {
                for(int m = j+1; m<len;m++)
                {
                    if(nums[i]+nums[j]>nums[m])
                    	count++;
                    else
                        break;
                }
            }
        }
        return count;
        
    }
};