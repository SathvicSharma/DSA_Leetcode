class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minDiff=INT_MAX,s=arr.size()-1;
        vector<vector<int>>ans;
        for(int i=0;i<s;i++)
        {
            minDiff=min(minDiff,arr[i+1]-arr[i]);
        }

        for(int i=0;i<s;i++)
        {
            if(arr[i+1]-arr[i]==minDiff)
                ans.push_back({arr[i],arr[i+1]});
        }
        
        return ans;
    }
};
