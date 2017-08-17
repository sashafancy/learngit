class Solution {
public:
    int mySqrt(int x) {
        
        int l = 1, r = x;
        int mid;
        
        while(true)
        {
            if(r<l)
                return r;
            mid = (l-r)/2+r;
            if(x/mid == mid)
                return mid;
            else if(x/mid < mid)
                r = mid - 1;
            else 
                l = mid + 1;
        }
    }
};