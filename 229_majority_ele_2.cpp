class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int len = nums.size();
        if(len==0||len==1)
           return nums;
        sort(nums.begin(),nums.end());
        int count = 1;
        int idx = 0;
        for(int i = 0; i<len-1 ; i++)
        {
            if(nums[i+1]!=nums[i])
            {
                if(count>len/3)
                    nums[idx++]=nums[i];
                count = 1;
            }
            else
                count++;
        }
        if(count>len/3)
            nums[idx++]=nums[len-1];
        nums.erase(nums.begin()+idx,nums.end());
        return nums;
    }
};