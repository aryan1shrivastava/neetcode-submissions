class Solution {
public:

    void dfs(int u, vector<vector<int>> &adj, vector<bool> &vis){
        vis[u] = true;

        for(auto v: adj[u]){
            if(vis[v] == false){
                dfs(v, adj, vis);
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n ,false);

        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        int res =0;

        for(int i=0 ;i<n; i++){
            if(vis[i] == false){
                res++;
                dfs(i, adj, vis);
            }
        }

        return res;
    }
};
