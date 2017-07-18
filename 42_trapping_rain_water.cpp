class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        if(len == 0)
            return 0;
        int peak = 0,total = 0,water = 0,bar = 0;
        for(int i = 0; i<len; i++)
        {
            if(height[i]>height[peak])
                peak = i;   
            bar+=height[i];            
        }
      
        for(int i = 0; i<peak; )
            for(int j = i+1; j<=peak;j++)
                if(height[j]>=height[i])
                {
                    total = total+(j-i)*height[i];
                    i = j;
                    break;
                }

        for(int i = len-1;i>peak;)
            for(int j = i-1;j>=peak;j--)
                if(height[j]>=height[i])
                {
                    total = total+(i-j)*height[i];  
                    i = j;
                    break;
                }

        water = total +height[peak]- bar;
        return water;
                        
    }
};