class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd_count=0,even_count=0;
        int min_odd=INT_MAX;
        for(int ch:nums1)
        {
            if(ch%2)
            {
                min_odd=min(min_odd,ch);
                odd_count++;
            }
            else
                even_count++;
        }
        if(!odd_count||!even_count)
            return true;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]%2==0)
            {
                if(nums1[i]-min_odd<1)
                    return false;
            }
        }
        return true;
        
    }
};
