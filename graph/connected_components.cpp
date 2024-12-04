// It can be done by the variout method. Basic method is to use a dfs

// code

void dfs(int  root,vector<int> adj[], vector<bool> &visit){
  visit[root] = true;
  for(auto child:adj[root]){
      if(!visit[child]) dfs(root,adj,visit)
  }
}

now inside the main function call funciton over every node where visit[node] is zero
