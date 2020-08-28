#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n,k;
	int b,f,sec,insa,insb;
	while(true)
	{
		cin >> n >> b;
		if(n==0) break;
		vector<int> ln(n+1),rn(n+1);
		fora(i,n+1)
		{
			ln[i]=i-1;
			rn[i]=i+1;
		}
		fora(i,b)
		{
			cin >> f >> sec;
			if(ln[f]<1) cout << "* ";
			else cout << ln[f] << " ";
			if(rn[sec]>n) cout << "*" << endl;
			else cout << rn[sec] << endl;
			rn[ln[f]]=rn[sec];
			ln[rn[sec]]=ln[f];
		}
		cout << "-" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}