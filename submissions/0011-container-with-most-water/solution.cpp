class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0,comp=0;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            if(height[right]>height[left])
            {
                comp=(height[left]*(right-left));
                if(comp>area)
                {
                    area=comp;
                }
                left++;
            }

            else
            {
                comp=(height[right]*(right-left));
                if(comp>area)
                {
                    area=comp;
                }
                right--;
            }
        }
        return area;
    }
};
