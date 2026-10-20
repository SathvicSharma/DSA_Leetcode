class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
        vector<int>divs;
        for(int i=1;i*i<=sorted.size();i++)
        {
            if(nums.size()%i==0)
            {
                divs.push_back(i);
                if(i!=nums.size()/i)
                    divs.push_back(nums.size()/i);
            }
        }
        int ans=0;
        for(int k:divs)
        {
            bool check=true;
            for(int s=0;s<nums.size()&&check;s+=k)
            {
                int desc=0,pos=-1;
                for(int j=0;j<k;j++)
                {
                    int a=nums[s+j];
                    int b=nums[s+(j+1)%k];
                    if(a>b)
                    {
                        desc++;
                        pos=j;
                        if(desc>1)
                            break;
                    }
                }
                if(desc>1)
                {
                    check=false;
                    break;
                }
                int r=(desc==0)?0:(pos+1)%k;
                for (int j=0;j<k;j++) 
                {
                    if (nums[s+(r+j)%k]!=sorted[s+j]) 
                    {
                        check=false;
                        break;
                    }
                }
            }
            if (check) ans += k;
        }
        return ans;

    }
};
