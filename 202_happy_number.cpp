class Solution {
public:
    bool isHappy(int n) {
     while(n != 1)
     {
         int temp = 0;
         while(n != 0)
         {
             temp = temp + (n%10)*(n%10);
             n = n/10;
         }
         n = temp;
         if(n == 37)
             return false;
     }
     return true; 
    }
};