#define FOR_EACH(it,x) for(typeof(x.begin()) it=x.begin(); it!=x.end(); ++it)
struct state
{
	int vertex, weight;
};
const int MAX = 1000; // the max number of vertices
vector<state> graph[MAX];  // adjacency list, g[i] - list of edges from vertex i
int dist[MAX];// dist[i] - distance from the source to vertex i
int n;  // number of vertices in the graph
=======================================================================================
=======================================================================================
void dijkstra(int source)
{
	memset(dist, 63, sizeof(dist));
	dist[source]=0;
  	priority_queue<state>q;
  	q.push((state){source,0});
 	while(!q.empty())
  	{
		state top = q.top(); q.pop();
		if(top.weight > dist[top.vertex]) continue;
		FOR_EACH(it,graph[top.vertex])
		{
			int alt = dist[top.vertex] + it->weight;
			if(alt < dist[it->vertex])
			{
				q.push((state){it->vertex, dist[it->vertex] = alt});
			}
		}
    }
}
22222222222222222222222222222222222222222222222222222222222
==================-------------------------------==============================
#include <bits/stdc++.h>
using namespace std;
 
#define pb            push_back
#define mp            make_pair
#define ff            first
#define ss            second
#define mod           1000000007
#define INF           1000000000
#define mxn           10005
 
typedef long long int intl;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< pii > vii;
 
bool vis[mxn];
int dist[mxn];
 
 
int dijkstra(vector< vii >& adj, int s, int e){
    dist[s] = 0;
    priority_queue< pii > pq;
    pq.push({0, s});
 
    while(!pq.empty()){
        pii p = pq.top(); pq.pop();
        int u = p.ss;
 
        if(vis[u]) continue; //already found the shortest path for vertex u
 
        int sz = adj[u].size();
        for(int i=0; i<sz; i++){
            int v = adj[u][i].ff;
            int cost = adj[u][i].ss;
            if(dist[v] > dist[u] + cost){
                dist[v] = dist[u] + cost;
                pq.push(mp(-dist[v], v));
            }
        }
        vis[u] = true;
        if(u==e) return dist[e];
    }
}
 
 
int main()
{
 
    int tc; cin>>tc;
 
    while(tc--){
        for(int i=0; i<mxn; i++){ dist[i] = INF; vis[i] = false; }
        int n, ad;
        cin>>n;
 
        string city;
        map<string , int> mep;
        vector< vii > adj(n+1);
 
        for(int i=0; i<n; i++){
            cin>>city;
            mep[city] = i+1;
            cin>>ad;
            for(int j=0; j<ad; j++){
                int v, c; cin>>v>>c;
                adj[i+1].pb(mp(v, c));
            }
        }
 
        int q; cin>>q;
        string beg, en;
        for(int i=0; i<q; i++){
            cin>>beg>>en;
            cout<<dijkstra(adj, mep[beg], mep[en])<<endl;
            for(int i=0; i<mxn; i++){ dist[i] = INF; vis[i] = false; }
        }
    }
 
    return 0;
}
