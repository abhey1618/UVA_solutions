#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve(int &t)
{
	int i,j,n,k;
	char c;
	int ind=0,val[100];
	memset(val,0,sizeof(val));
	string s;
	cin >> s;
	n=s.length();
	fora(i,n)
	{
		c=s[i];
		if(c=='>') ind=(ind+1)%100;
		else if(c=='<') ind=(ind-1+100)%100;
		else if(c=='+') val[ind]=(val[ind]+1)%256;
		else if(c=='-') val[ind]=(val[ind]-1+256)%256;
	}
	printf("Case %d: ",++t);
	fora(i,99)
	{
		printf("%02X ", val[i]);
	}
	printf("%02X\n", val[99]);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,cases=0;
	cin >> t;
	while(t--)
	{
		solve(cases);
	}
}