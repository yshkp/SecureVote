
#include <bits/stdc++.h>
#define ll  long long
 
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    vector<ll> a(n+5,0);
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s & 1){
        cout<<"NO";
        return 0;
    }
    map<ll,int> first,second;
    first[a[0]] =1;
    for(ll i =1;i<n;i++){
        second[a[i]]++;
    }
    ll sd =0;
    for(ll i=0;i<n;i++){
        sd+= a[i];
        if(sd== s/2){
        cout<<"YES";
        return 0;}
        if(sd < s/2){
            ll x = s/2 - sd;
            if(second[x]>0){
            cout<<"YES";
            return 0;}
        }
        else{
            ll y = sd-s/2;
            if(first[y]>0)
            {
                cout<<"YES";
                return 0;
            }
        }
        first[a[i+1]]++;
        second[a[i+1]]--;
    }
    cout<<"NO";
    return 0;
 
 
}
