class Solution {
public:
int maxDepth=0;
vector<vector<int>>adj;
int MOD=1e9+7;
    int assignEdgeWeights(vector<vector<int>>& edges) {
        adj.resize(edges.size()+2);
        for(auto &e:edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        dfs(1,-1,0);
        return modPow(2,maxDepth-1);
    }

    long long modPow(long long base, long long exp)
    {
        long long ans=1;

        while(exp)
        {
            if(exp&1)
                ans=ans*base%MOD;
            base=base*base%MOD;
            exp>>=1;
        }
        return ans;
    }
    void dfs(int node,int parent,int depth)
    {
        maxDepth=max(maxDepth,depth);
       for(int nei:adj[node])
        {
            if(nei!=parent)
                dfs(nei,node,depth+1);
        }
    }
};
