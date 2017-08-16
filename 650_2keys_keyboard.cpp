class Solution {
public:
    int minSteps(int n) {
        if(n == 1)
            return 0;
        if(n ==2)
            return 2;
        for(int i = n-1; i--; i>0)
        {
            if(n%i==0)
            {
                return minSteps(i)+(n/i);
                break;
            }
        }
    }
};