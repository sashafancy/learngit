class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        int s1 = nums1.size();
        int s2 = nums2.size();
        
        int i = 0;
        int j = 0;
        
        while((i<=s1-1)&&(j<=s2-1))
        {
            if(nums1[i]<nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
            }
                
            else
            {
                result.push_back(nums2[j]);
                j++;
            }
                
        }
        while(i<s1)
        {
            result.push_back(nums1[i]);
            i++;
        }
            
        while(j<s2)
        {
            result.push_back(nums2[j]);
            j++;
        }
           
        int s3 = result.size();
        float median = 0.0;
        if(s3%2==0)
            median = (result[s3/2-1]+result[s3/2])/2.0;
        else
            median = result[s3/2];
        return median;
    }
};