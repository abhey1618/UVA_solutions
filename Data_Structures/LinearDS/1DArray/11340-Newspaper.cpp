#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n,k;
	lli val=0,doll,cent;
	char car;
	string s;
	int m;
	cin >> n;
	map<char,lli> vals;
	fora(i,n)
	{
		cin >> car >> k;
		vals[car]=k;
	}
	cin >> m;
	cin.ignore();
	fora(i,m)
	{
		getline(cin,s);
		fora(j,s.length())
		{
			val+=vals[s[j]];
		}
	}
	doll=val/100;
	cent=val%100;
	if(cent>=10) cout << doll << "." << cent << "$" << endl;
	else cout << doll << ".0" << cent << "$" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) solve();
}
