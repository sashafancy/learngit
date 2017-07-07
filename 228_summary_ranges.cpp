class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int len = nums.size();
        vector<string> result;
        int count = 1;
    
        for(int i = 0; i<len ; i++)
        {
            if(nums[i+1]-nums[i]==1&& (i+1)!=len)
                count++;
            else
            {
                if(count==1)
                    result.push_back(to_string(nums[i]));   
                else
                {
                    result.push_back(to_string(nums[i-count+1])+"->"+to_string(nums[i]));
                    count = 1;
                }
            }
        }
        return result;
    }
};