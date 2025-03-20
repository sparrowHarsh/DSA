int minCycle(int i,int n,vector<int> adj[]){
    queue<int> q;
 
    vector<int> distance(n+1,INT_MAX);
    vector<int> parent(n+1,0);
 
    q.push(i);
    distance[i] = 0;
    parent[i] = -1;
    int ans = INT_MAX;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int root = it;
 
        
        for(auto child:adj[root]){
            if(distance[child] == INT_MAX){
                distance[child] = distance[root] + 1;
                parent[child] = root;
                q.push(child);
            }else if(parent[root] != child){
                ans = min(ans, distance[child] + distance[root]+ 1);
            }
        }
    }
 
    return ans;
}
