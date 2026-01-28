class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p=0;
        int n=prices.size();
        int best_b=prices[0];

        for(int i=0;i<n;i++)
        {
            if(prices[i]>best_b)
            {
                max_p=max(max_p,prices[i]-best_b);
            }
            best_b=min(best_b,prices[i]);
        }
        return max_p;
        
    }
};