

							    Can answer range min query in O(1)  hmmm......shocked?
							    but it will fail if there is a change in array for this scenerio we have to build it again... :(
								

finding minimum

#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    
    int k=log2(n);
    int sp[n][k+1];
    
    for(int i=0;i<n;i++)
        sp[i][0]=ar[i];
    
    for(int j=1;j<=k;j++)
    {
        for(int i=0; i+(1<<j) <=n;i++)
        {
            sp[i][j]=min( sp[i][j-1] , sp[ i+(1<<(j-1))  ][j-1] );
        }
    }
    
    int q;
    cin>>q;
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        int range=r-l+1;
        k=log2(range);
        cout<<min( sp[l][k],sp[r-(1<<k)+1][k] );
        cout<<'\n';
    }
    
    return 0;
}








