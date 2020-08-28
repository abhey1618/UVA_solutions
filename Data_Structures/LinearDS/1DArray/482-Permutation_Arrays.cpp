#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n,k;
	string s,val;
	cin.ignore();
	cin.ignore();
	getline(cin,s);
	stringstream ss(s);
	vector<int> inds;
	while(ss >> j) inds.push_back(j);
	vector<string> value(inds.size());
	fora(i,inds.size())
	{
		cin >> val;
		value[inds[i]-1]=val;
	}
	fora(i,inds.size()) cout << value[i] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		if(t>0) cout << endl;
	}
}