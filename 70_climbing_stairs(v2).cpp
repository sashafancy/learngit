class Solution {
public:
    int climbStairs(int n) {
        int start = 0, end = 1;
        for(int i = 2; i<n+2; i++)
        {
            if(start<end)
            {
                start += end;
            }
            else
                end += start;
        }
        return max(start,end);
    }
};