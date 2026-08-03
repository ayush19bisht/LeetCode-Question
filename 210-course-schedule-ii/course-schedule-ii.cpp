class Solution {
public:
    bool iscycledfs(int src , vector<bool>& vis , vector<bool>& recPath , vector<vector<int>>& prereq){
        vis[src] = true;
        recPath[src] = true;
        for(int i=0 ; i<prereq.size() ; i++){
            int v = prereq[i][0];
            int u = prereq[i][1];
            if(src == u){
                if(!vis[v]){
                    if(iscycledfs(v , vis , recPath , prereq)){
                        return true;
                    }
                }
                else if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }
    void toporder(int src , vector<bool>& vis , stack<int>& s ,  vector<vector<int>>& prereq){
        vis[src] = true;
        for(int i=0 ; i<prereq.size() ; i++){
            int v = prereq[i][0];
            int u = prereq[i][1];
            if(src == u){
                if(!vis[v]){
                    toporder(v , vis , s , prereq);
                }
            }
        }
        s.push(src);
    }
    vector<int> findOrder(int n, vector<vector<int>>& prereq) {
        vector<bool> vis(n,false);
        vector<bool>recPath(n,false);
        vector<int>ans;
        for(int i=0 ; i<n ; i++){
            if(!vis[i]){
                if(iscycledfs(i , vis , recPath , prereq)){
                    return ans;
                }
            }
        }

        //topological sort
        stack<int> s;
        vis.assign(n,false);
        for(int i=0 ; i<n ; i++){
            if(!vis[i]){
                toporder(i , vis , s , prereq);
            }
        }

        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};