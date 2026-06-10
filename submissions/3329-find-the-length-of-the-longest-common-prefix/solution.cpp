class Solution {
public:
    unordered_set<int>st;
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {      
        for(int i=0;i<arr1.size();i++)
            ins(arr1[i]);
        int max_pre=0;
        for(int i=0;i<arr2.size();i++)
        {
            int x=arr2[i];
            while(x>0)
            {
                if(st.find(x)!=st.end())
                    max_pre=max(max_pre,x);
                x/=10;
            }
        }
        return pre_size(max_pre);
    }


    void ins(int n)
    {
        while(n>0)
        {
            st.insert(n);
            n/=10;
        }
    }
    int pre_size(int n)
    {
        int size=0;
        while(n>0)
        {
            size++;
            n/=10;
        }
        return size;
    }
};
