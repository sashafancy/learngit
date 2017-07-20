class Solution {
public:
    int reverse(int x) {
        long result = 0;
        if(x == INT_MIN)
            return 0;
        while(x != 0)
        {
            result += x%10;
            if(x>=10||x<=-10)
                result *= 10;
            x = x/10;
        }
        if(result>INT_MAX||result<INT_MIN)
            return 0;
        return result;
    }
};