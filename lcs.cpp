#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define rev(i,n) for(ll i=n-1;i>=0;i--)
#define haha(j,a,n) for(ll j=a;j<n;i++)
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define endl "\n"
#define bc(v) v.begin(),v.end()
#define vl vector<ll>
#define vi vector<int>
#define why 1000000007
#define NUM 100005
#define bhar(a) rep(i,a.size()) cin>>a[i];
#define show(a) rep(i,a.size()) cout<<a[i]<<" ";
#define sott(a) sort(bc(a))
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yeah(n) while(n--)
ll gcd(ll a, ll b){if(b==0) return a; else return gcd(b,a%b);}
string s1,s2;
ll lcs(ll i,ll j, ll count){
    if(i==0||j==0) return count;
    if(s1[i-1]==s2[j-1]) count = lcs(i-1,j-1,count+1);
    count = Max(count,lcs(i-1,j,0),lcs(i,j-1,0));
    return count;
}
int main(){
    ios
    cin>>s1>>s2;
    //cout<<s1<<endl<<s2;
    ll n=s1.size(),m = s2.size();
    //ll cs=0;
    cout<<lcs(n,m,0);
   // cout<<"HELLO WORLD";
    
}
    
