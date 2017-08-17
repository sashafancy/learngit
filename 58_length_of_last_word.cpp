class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int count = 0;
        while(s[len-1]==' ')
        {
            len--;
        }
        for(int i = len; i>=0; i--)
        {
            if(s[i-1]==' '||i == 0)
                return count;
            count++;
        }
    }
};