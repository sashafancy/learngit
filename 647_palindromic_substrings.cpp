class Solution {
public:
    int countSubstrings(string s) {
        int count = s.length();

        for(int i = 1; i<s.length()-1; i++)
        {
            int j = 1;
            while(i+j<s.length()&&i-j>=0)
            {
                if(s[i-j] == s[i+j])
                {
                    count++;
                    j++;
                }    
                else
                    break;
            }  

        }
     
        for(int i = 0; i<s.length(); i++)
        {
            int j = 1;
            while(i+j<s.length()&&i-j+1>=0)
            {
                if(s[i-j+1] == s[i+j])
                {
                    count++;
                    j++;
                }    
                else
                    break;
            }  
        }  
   
        return count;
    }
};