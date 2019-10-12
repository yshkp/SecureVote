#include <bits/stdc++.h>
 
#define ll          long long
#define ld          long double
#define pb          push_back
#define pf          push_front
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
#define mod         1000000007
#define lp(i,a,b)   for(ll i=a;i<b;++i)
#define lpr(i,a,b)  for(ll i=a;i>=b;i--)
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll inf = (ll)1e7;
using namespace std;

int main(){
    ios
    ll n,m,k,i=3; cin>>n;
    if(n<3) {cout<<-1; return 0;}
    while(1){
            k = sqrt(pow(i,2)+pow(n,2));
        if(i*i + n*n == k*k)
            {cout<<i<<" "<<k; return 0;}
        i++;
    }
}