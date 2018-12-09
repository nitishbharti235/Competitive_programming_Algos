#define py first
#define px second
#define pairll pair<long,long>
// https://www.hackerearth.com/practice/math/geometry/line-sweep-technique/tutorial/

bool myfun(pairll a,pairll b)
{
 return a.px<b.px;
}

void closet_point(pairll pnts[],int n)
{
 sort(pnts,pnts+n,myfun);
 long long best=INT_MAX;
 
 set<pairll>Box;
 Box.insert(pnts[0]);
 int left=0;
 for(int i=1;i<n;i++)
 {
  while(left<i && pnts[i].px-pnts[i].px>best)
  {
   Box.erase(pnts[left++]);
  }
 
 
 for(auto it=Box.lower_bound(mp( pnts[i].py-best, pnts[i].px-best ));it!=Box.end() && it->py<=pnts[i].py+best;it++)
 {
  best=min(best, sqrt( pow( pnts[i].px-it->x ,2.0) +pow( pnts[i].py-it->y , 2.0 ) ) );
 }
 
 }
 return best;
}
