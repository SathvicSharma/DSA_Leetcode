class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<vector<int>>graph(numCourses);
        for(auto &p:prerequisites)
            graph[p[1]].push_back(p[0]);
        stack<int>result;
        vector<int> visited(numCourses, 0);
        for(int i=0;i<numCourses;i++) 
        { 
            if(!visited[i])
            {
                if(!dfs(graph,visited,result,i))
                    return {};
            } 
                 
        }
        vector<int>ans;
        while(!result.empty())
        { 
            ans.push_back(result.top()); 
            result.pop(); 
        } 
        return ans;
    }
        bool dfs(vector<vector<int>>&graph,vector<int>&visited,stack<int>&result,int node) {
            if(visited[node]==1)
                return false;
            if(visited[node]==2)
                return true;             
            visited[node]=1; 
            for(int next:graph[node])
            { 
                if(!dfs(graph,visited,result,next))
                    return false;
            } 
            visited[node]=2;
            result.push(node);
            return true;
        }
    };
