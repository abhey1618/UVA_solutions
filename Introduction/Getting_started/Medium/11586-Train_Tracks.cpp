#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n,k;
	string temp;
	bool ans=true;
	getline(cin,temp);
	k=temp.length();
	if(k==2) //can't have a self loop
	{
		cout << "NO LOOP" << endl;
		return;
	}
	int count[4];
	count[0]=count[1]=0;//counts of M and F as the first part of a track
	count[2]=count[3]=0;//counts of M and F as the second part of a track
	fora(i,k)
	{
		if(i%3==2) ++i;
		if(i%3==0)
		{
			if(temp[i]=='M') ++count[0];
			else ++count[1];
		}
		else
		{
			if(temp[i]=='M') ++count[2];
			else ++count[3];
		}
	}
	ans=((count[0]==count[3])&&(count[1]==count[2]));
	cout << (ans?"LOOP":"NO LOOP") << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,j,ans,t;
	cin >> t;
	cin.ignore();
	while(t--) solve();
}
