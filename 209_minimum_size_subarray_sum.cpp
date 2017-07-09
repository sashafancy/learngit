class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        int len = nums.size();
        int result = len;
        
        for(int i = 0; i < len; i++)
        {
            int sub = 0;
            for(int j = i; j < len; j++) 
            {
                sub+=nums[j];
                if(sub>=s)
                {
                    result = min(result,j-i+1);                    
                    break;                    
                }
                else if(i==0&&j==len-1)
                    return 0;
            }
        }
        return result;         
    }
};