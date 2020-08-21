#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n,k;
	string s;
	char prev;
	int prevind,ans;
	while(true)
	{
		cin >> n;
		if(n==0) break;
		cin >> s;
		prevind=-1;
		prev='Z';
		//we store the previous type of place and its index
		ans=INT_MAX;
		fora(i,n)
		{
			if(s[i]=='Z')//if we have a Z we are done because we can't go less than 0
			{
				ans=0;
				break;
			}
			//if prev is same as s[i] we update prevind. Otherwise, we check if we get a minimum distance this time.
			if(s[i]=='R')
			{
				if(prev=='D') ans=min(ans,i-prevind);
				prevind=i;
				prev='R';
			}
			else if(s[i]=='D')
			{
				if(prev=='R') ans=min(ans,i-prevind);
				prevind=i;
				prev='D';
			}
		}
		cout << ans << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,j,ans,t;
	solve();
}