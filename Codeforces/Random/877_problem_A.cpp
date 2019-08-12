#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	char A[mx];
	
	string B[5] = {"Danil","Olya","Slava","Ann","Nikita"};
	ll C[5]={5,4,5,3,6};
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>A;
		n=strlen(A);
		rep(i,0,n){
			rep(j,0,5){
				f=0;
				rep(k,0,C[j]){
					if (i+k == n)
					{
						f=1;
						break;
					}
					if (A[i+k] != B[j][k])
					{
						f=1;
						break;
					}
				}
				if (f==0)
				{
					r++;
					i+=C[j]-1;
					break;
				}
			}
		}

		if (r==1)
		{
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	return 0;
}