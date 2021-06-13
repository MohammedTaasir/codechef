#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int powerMod(ll a, ll b){
    if(a==0) return 1;
    if(b==1) return a;
    if(b%2==0){
        ll output = powerMod(a, b/2);
        return (output*output)%mod;
    }else{
        ll output = powerMod(a, (b-1)/2);
        return ((a*output)%mod*output)%mod;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m,temp;
        cin>>n>>m;
        temp = powerMod(2,n)-1;
        cout<<powerMod(temp,m)<<"\n";
    }
}
