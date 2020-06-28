#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n;
	int k,m,c,r;
	bool ans=true;
	string temp;
	while(true)
	{
	    ans=true;
	    cin >> n;
	    if(n==0) break;
	    cin >> m;
	    map<string,int> cnt;
	    for(i=0;i<n;++i)
	    {
	        cin >> temp;
	        cnt[temp]=1;
	    }
	    for(i=0;i<m;++i)
	    {
	        int totr=0;
	        cin >> c >> r;
	        for(j=0;j<c;++j)
	        {
	            cin >> temp;
	            if(cnt.find(temp)!=cnt.end()) ++totr;
	        }
	        if(totr<r) ans=false;
	    }
	    cout << (ans?"yes":"no") << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,j,ans,t;
	solve();
}
