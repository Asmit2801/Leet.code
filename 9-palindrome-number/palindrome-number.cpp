class Solution {
public:
    bool isPalindrome(int x) 
    {
         int ans=0;
         int num=x;
         int rem;
         if(x<0){
            return false;
         }

         while(x!=0)
         {
            rem=x%10;
            x=x/10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7))
                return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8))
                return 0;
                ans = ans * 10 + rem;
         }
        
        return ans == num ;
    }
};