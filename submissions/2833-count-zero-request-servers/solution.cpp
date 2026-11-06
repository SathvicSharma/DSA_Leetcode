
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {

        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        vector<pair<int,int>> q;
        for(int i = 0; i < queries.size(); i++)
            q.push_back({queries[i], i});

        sort(q.begin(), q.end());
        vector<int> arr(queries.size());
        vector<int> freq(n + 1, 0);
        int l = 0, r = 0;
        int active = 0;
        for(int i = 0; i < q.size(); i++) 
        {
            int beg = q[i].first - x;
            int end = q[i].first;
            int idx = q[i].second;
            while(r < logs.size() && logs[r][1] <= end) 
            {
                int id = logs[r][0];
                if(freq[id] == 0)
                    active++;
                freq[id]++;
                r++;
            }
            while(l<r&&logs[l][1]<beg)
            {
                int id=logs[l][0];
                freq[id]--;
                if(freq[id]==0)
                    active--;
                l++;
            }
            arr[idx]=n-active;
        }
        return arr;
    }
};

