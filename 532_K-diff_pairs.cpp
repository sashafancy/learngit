class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if(nums.size()==1)
            return 0;
        // sort the vector nums
        sort(nums.begin(),nums.end());
        vector<int> dup(nums); 
        // define the beginning position of the duplicate elements
        vector<int>::iterator pos;
        pos = unique(nums.begin(),nums.end());
 
        // define 2 separate arrays: unique array & duplicate array

        nums.erase(pos,nums.end());
      
        if(k == 0)
        {
            vector<int> result = {};
            int count = 0;
            for(int i = 0; i<dup.size(); i++)
            {
                if(dup[i+1]==dup[i])
                    result.push_back(dup[i]);
            }
            vector<int>::iterator p;
            p = unique(result.begin(),result.end());
            result.erase(p,result.end());
            return result.size();
        }
        
        else
        {
            int count = 0;
            int len = nums.size();
            if(len<=1)
                return 0;
            for(int i = 1; i<len; i++)
                for(int j = 0;j<i; j++)
                    if(nums[i]-nums[j]==k)
                        count++;
            return count;
        }
    }
};