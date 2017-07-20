class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l = 0,r = height.size()-1;
        int count = 2*r;
        int mmax = min(height[0],height[r])*(r-l);
        while(count>0)
        {
            if(height[l]<=height[r])
            {
                for( int i = l; i<r; i++)
                {
                    if(height[i]>height[l])
                    {
                        mmax = max(mmax,min(height[i],height[r])*(r-i));
                        l = i;  
                        break;
                    }
                    count--;
                }
            }
            else if (height[l]>height[r])
            {
                for(int i = r; i>l; i--)
                {
                    if(height[i]>height[r])
                    {
                        mmax = max(mmax,min(height[i],height[l])*(i-l));
                        r = i;
                        break;
                    }
                    count--;
                }
            }          
        }
        return mmax;
    }
};