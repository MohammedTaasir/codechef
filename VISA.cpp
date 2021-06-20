#include<bits/stdc++.h>

using namespace std;

#define ll long long

 

 

void solve(){

    ll x1,x2,y1,y2,z1,z2;

    cin>>x1>>x2>>y1>>y2>>z1>>z2;

    if(x2>=x1 && y2>=y1 && z2<=z1)

        cout<<"YES"<<endl;

    else

        cout<<"NO"<<endl;

}

 

int main(){

  

    ll t=1;

    cin>>t;

    while(t--){

        solve();

    }

}
