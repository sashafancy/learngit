class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int len = numbers.size();
        int l = 0;
        int r = len-1;
        
        while(true)
        {
            if(numbers[l]+numbers[r]==target)
            return {l+1,r+1};
            else if(numbers[l]+numbers[r]>=target)
                r = r - 1;
            else
                l = l + 1;            
        }
    }
};