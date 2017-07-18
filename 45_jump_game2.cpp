class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size();
        vector<int> count(len,0);
        
        for(int i = 0; i<nums.size()-1 ; i++)
            for(int j = i+1; j<=min(i+nums[i],len-1); j++)
            {
                if(count[j]==0)
                    count[j] = count[i] + 1;
                else
                    count[j] = min(count[j],count[i]+1);                
            }

        return count[nums.size()-1];
    }
};