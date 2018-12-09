
							  LCA
							  precomputation -> O(nlogn)
							  per query-> O(logn)
							  
						
						

int depth[1e5];
vector<int> tree[1e5];
int parent[1e5][log(1e5)];
int level=18;
void initialize()
{
 all parent=-1;
 all depth =0;
 
}
depth[0]=0;

//calculation using dfs
void(int node,int p)
{
 depth[node]=depth[p]+1;
 parent[node][0]=p;
 for(int i=0;i<tree[node].size();i++)
 {
  if(p==tree[node][i])continue;
  dfs(tree[node][i],node);
 }
}

void precompute()
{
 for(int i=1;i<level;i++)
 {
  for(int node=1;node<=n;node++)
  {
   if(parent[node][i-1]!=-1)
   {
    parent[node][i]=parent[ parent[node][i-1] ][i-1];
   }
  }
 }
}

int lca(int u,int v)
{
 if(depth[v]<depth[u])
 swap(u,v);
 
 int diff=depth[v]-depth[u];
 for(i=0;i<level;i++)
 {
  if((diff>>i)&1)
  {
  v=parent[v][i];
  }
 }
 
 if(u==v)return u;
 
 for(int i=level;i>=0;i--)
 {
  if( parent[u][i]!=parent[v][i])
  {
   u=parent[u][i];
   v=parent[v][i];
  }
 }
 return parent[u][0];
}


int main()
{
 store tree in 'tree' matrix
 
 dfs(1,0);
 
 precompute();
 find lca(u,v);
}










