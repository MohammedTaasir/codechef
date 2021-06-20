#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m;
    cin>>n>>m;
    string arr[n];
    ll flag=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        for(auto j:arr[i])
            flag^=(j-'0');
    }
    if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
