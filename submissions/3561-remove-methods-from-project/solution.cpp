class Solution {
public:
    
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        unordered_map<int,vector<int>>invoke;
        for(auto &it:invocations)
        {
            int u=it[0];
            int v=it[1];
            invoke[u].push_back(v);
        }
        vector<int>visited(n,0);
        dfs(k,invoke,visited);
        vector<int>rem;
        for(auto &it:invocations)
        {
            int u = it[0];
            int v = it[1];
            if (!visited[u] && visited[v]) 
            {
                for (int i = 0; i < n; i++)
                    rem.push_back(i);
                return rem;
            }
        }
        for (int i = 0; i < n; i++) {
            if (!visited[i])
                rem.push_back(i);
        }

        return rem;

    }

    void dfs(int node,unordered_map<int,vector<int>>&invoke,vector<int>&visited)
    {
        visited[node]=1;
        for(auto &it:invoke[node])
        {
            if(!visited[it])
                dfs(it,invoke,visited);
        }
    }
};
