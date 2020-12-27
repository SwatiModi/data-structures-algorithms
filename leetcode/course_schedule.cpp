class Solution {
public:
    bool isCycle(vector<int> adj[], vector<int>& vis,  int i){
        if(vis[i] == 1)
            return true;
        
        if(vis[i]==0){
            vis[i]=1;
            for(int k=0; k<adj[i].size(); k++){
                if (isCycle(adj,vis, adj[i][k]))
                    return true;
            }   
        }
        
        vis[i] = 2;
        return false;
    }
        
    bool canFinish(int n, vector<vector<int>>& p) {
                
        vector<int> adj[n];
        for(int i=0; i<p.size(); i++){
            adj[p[i][1]].push_back(p[i][0]);
        }
        
        vector<int> vis(n,0);
        for(int i=0; i<n; i++){
            if (isCycle(adj, vis, i))
                return false;
        }
        
        return true;
    }
};

//https://leetcode.com/problems/course-schedule/discuss/658275/C%2B%2B-DFS-Easiest-Solution-With-Explanation-(My-1st-approach)