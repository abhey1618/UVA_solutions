#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

void solve()
{
	int i,j,n;
	int rot;
	while(true)
	{
		cin >> n;
		string dir,cdir="+x";//cdir tells us which axis does the last thing points currently
		if(n==0) break;
		for(i=0;i<n-1;++i)
		{
			cin >> dir;
			if(dir=="No") continue;
			if(dir[1]==cdir[1])//cdir[1]==y or z
			{
				if(dir[0]==cdir[0]) cdir="-x";
				else cdir="+x";//if different sign then it negates each other's effect
			}//if it currently points in y or z direction and we get the opposite input it doesn't change direction in which last thing points
			else if(cdir[1]=='x')
			{
				if(cdir[0]=='+') cdir=dir;
				else if(dir[0]=='+') cdir="-"+dir.substr(1,1);
				else cdir="+"+dir.substr(1,1);
			}
		}
		cout << cdir << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,j,ans,t;
	solve();
}