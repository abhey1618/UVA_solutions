#include <bits/stdc++.h>

typedef long long int lli;
#define fora(i,n) for(i=0;i<n;++i)
#define forb(i,n,j) for(i=j;i<n;++i)
#define deb(x) cout << #x << " " << x << endl;

using namespace std;

/*
We are gonna have 2 sets one containing the books that are already on shelf and the other containing the returned books which
will be put on the shelf when the shelve command is passed
Since we are using a set of pairs of authors and books the sets always remain sorted based on author names
For ease we will also use a map from book names to their authors
*/

void solve()
{
	int i,j,n,k;
	string s,book,auth,comm;
	int ind,nind;
	set<pair<string,string> > books,returned;
	map<string,string> bauth;
	while(true)
	{
		getline(cin,s);
		if(s=="END") break;
		ind=s.find('"',1);
		book = s.substr(1,ind-1);
		ind=s.find("by ",0);
		auth = s.substr(ind+2);
		bauth[book]=auth;
		books.insert({auth,book});
	}
	while(true)
	{
		getline(cin,s);
		if(s=="END") break;
		if(s=="SHELVE")
		{
			for(auto x:returned)
			{
				cout << "Put \"" << x.second << "\"";
				books.insert({bauth[x.second],x.second});
				auto it=books.find({bauth[x.second],x.second});
				if(it==books.begin()) cout << " first" << endl;
				else
				{
					--it;
					cout << " after \"" << it->second << "\"" << endl;
				}
			}
			cout << "END" << endl;
			returned.clear();
			continue;
		}
		ind=s.find(" ");
		comm=s.substr(0,ind);
		book=s.substr(ind+2);
		book=book.substr(0,book.length()-1);
		if(comm=="BORROW")
		{
			books.erase({bauth[book],book});
		}
		else if(comm=="RETURN")
		{
			returned.insert({bauth[book],book});
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}