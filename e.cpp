#include <bits/stdc++.h>
 
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pll         pair<ll,ll>
#define vl          vector<ll>
#define vll         vector<pll>
#define ml          map<ll,ll>
#define mll         map<pll,ll>
#define all(a)      a.begin(),a.end()
#define x           first
#define y           second
#define sz(x)       (ll)x.size()
#define endl        '\n'
#define mod        1000000007
#define lp(i,a,b)   for(ll i=a;i<b;++i)
#define lpr(i,a,b)  for(ll i=a;i>=b;i--)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ios
    ll q; cin>>q;
    while(q--){
    	ll n,f=1,p=0; cin>>n;
    	vl a(n),b(n);
    	lp(i,0,n) cin>>a[i];
    	lp(i,0,n) cin>>b[i];
    	lp(i,0,n){
    		if(f==1)
    		if((a[i]==1 || a[i]==2))
    			continue;
    		else{
    			if((b[i]==1 || b[i]==2))
    				{cout<<"NO"<<endl; p=1; break;}
    			f=2;
    		}
    		else{
    		if((b[i]==1 || b[i]==2))
    			continue;
    		else {
    			if((a[i]==1 || a[i]==2))
    				{cout<<"NO"<<endl; p=1; break;}
    			f=1;
    		}
    	}}
    	if(p==1)
    		continue;
    	if(f==2)
    		cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
}