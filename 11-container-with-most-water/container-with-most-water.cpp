class Solution {
public:
    int maxArea(vector<int>& height) {
        int L_P=0;
        int R_P=height.size()-1;
        int ans=0;

        while(L_P<R_P)
        {
            int w = R_P-L_P;
            int ht = min(height[L_P],height[R_P]);
            int area= w*ht;
            ans=max(ans,area);
            if(height[L_P]<height[R_P])
            {
                L_P++;
            }
            else
            {
                R_P--;
            }
        }
        return ans;
    }
};