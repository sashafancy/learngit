class Solution {
public:
    int pathSum(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        if(len == 0)
            return 0;
        vector<int> count(len,0);
        count[len-1] = 1;
        for(int i = len-1; i>=0; i--)
        {
            for(int j = len-1; j>i; j--)
            {
                if(nums[j]/100==nums[i]/100+1)
                {
                    if(nums[j]%100/10==nums[i]%100/10*2||nums[j]%100/10==nums[i]%100/10*2-1)
                        count[i] +=count[j];
                    else if(j == i+1&& count[i]==0)
                        count[i] = 1;
                }
                else if(j == i+1&& count[i]==0 )
                    count[i] = 1;
            }       
        }
        for(int i = len-1; i>=0; i--)
            sum += nums[i]%10*count[i];
        return sum;    
    }
};