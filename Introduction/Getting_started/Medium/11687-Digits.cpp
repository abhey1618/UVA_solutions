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
	int ans=0,ndig;
	while(true)
	{
		ans=1;
		cin >> s;
		if(s=="END") break;
		n=s.length();
		if(s=="1")
		{
			cout << ans << endl;
			continue;
		}
		++ans;
		while(n!=1)
		{
			ndig=0;
			while(n!=0)
			{
				n/=10;
				++ndig;
			}
			n=ndig;
			++ans;
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