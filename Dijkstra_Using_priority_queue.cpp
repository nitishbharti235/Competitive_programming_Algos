
//https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/tutorial/
// O(E+logV)
const int N=300005;
vector< pair<int,int> > edges[N]; // first== weight second = vertex
int dist[N];
bool vis[N];
vector<int>g[N];
map<pair<int,int>,int> mpi;
int parent[N];
vector<int>ans;
void dijkstra()
{
 multiset<pair<int,int> >pq;
 pq.insert({0,1});
 
 while(pq.size()!=0)
 {
  pair<int,int>current=*pq.begin();
  pq.erase(pq.begin());
  int vertex=current.second;
  int weight=current.first;
  if(vis[vertex])
  continue;
  
  vis[vertex]=true;
  
  for(int i=0;i<edges[vertex].size();i++)
  {
      int e = v[x][i].f; int w = v[x][i].s;
      if(dist[x] + w < dist[e]  )
      {            
          dist[e] = dist[x] + w;
          pq.insert({dist[e], e} );
          parent[e]=vertex;
      }
  }
 }
}
void dfs(int node,int p)
{
 if(ans.size()>=k)return;
 for(int i=0;i<)
}
int main()
{
 memset(dist,INT_MAX,sizeof(dist));
 int n,m,k;
 cin>>n>>m>>k;
 int a,b,w;
 cin>>a>>b>>w;
 for(int i=0;i<m;i++)
 {
  cin>>a>>b>>w;
  mpi.insert({a,b},i+1);
  mpi.insert({b,a},i+1);
  edges[a].pb(w,b);
  edges[b].pb(w,a);
 }
 dijkstra();
 dfs(1,0);
 return 0;
}
