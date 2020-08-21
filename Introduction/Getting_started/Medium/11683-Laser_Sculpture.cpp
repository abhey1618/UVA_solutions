#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n,k;
	int cur,prev,a,c,ans;
	while(true)
	{
		cin >> a;
		if(a==0) break;
		cin >> c;
		fora(i,c)
		{
			cin >> cur;
			if(i==0) ans=a-cur;
			else
			{
				if(cur<prev) ans=ans+(prev-cur);
			}
			prev=cur;
		}
		cout << ans << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}