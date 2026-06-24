class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count=0,max_ele=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            max_ele=max(max_ele,arr[i]);
            if(i==max_ele)
                count++;
        }
        return count;
    }
};
