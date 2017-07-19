class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        for( i = len-1; i>0; i--)
        {
            if(nums[i]>nums[i-1])
            {
                for(int j = len-1; j>i-1; j--)
                {
                    if(nums[j]>nums[i-1])
                    {
                        int temp = nums[i-1];
                        nums[i-1] = nums[j];
                        nums[j] = temp;
                        sort(nums.begin()+i,nums.end());
                        break;
                    }
                }
                if(i!=0)
                    break;
            } 
        }
        if(i == 0)
            sort(nums.begin(),nums.end());
    }
};