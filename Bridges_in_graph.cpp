

                               					  Bridges in Graphs
                               					  O(n+m)
                               					  video -> https://www.youtube.com/watch?v=aZXi1unBdJA
                               					  written -> https://cp-algorithms.com/graph/bridge-searching.html
                               					  
                    
  int ids[n+1];
  int low[n+1];
  
  find_bridges()
  {
   ids=0;
   low of i=i;
   for all vertex:
   if(it is unvisited then dfs)
   {
   dfs(node,-1);
   }
  }
  
  curr is storing id
  dfs(int node,int parent)
  {
   curr+=1;
   id[node]=low[node]=curr;
   
   for(int i=0;i<adj[node].size();i++)
   {
    if(!vis[ adj[node][i] ])
    {
    dfs(adj,adj[node][i],node);
    low[node]=min(low[node],low[to]);
     if(id[node]<low[to])
     {
  	bridges.pb(mp(node,to));
     }
    }
    else
    {
    low[node]=min(low[node],id[to]);
    }
    
   }
   
  }
