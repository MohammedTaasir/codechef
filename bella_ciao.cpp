//MINE
#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	float D,d,change;
	int P,Q,interval,t,val,sum,ctr;
	
	
	cin>>t;
	while(t--){
	     val=0;
	     sum=0;
	     ctr=0;
	    cin>>D>>d>>P>>Q;
	    interval=d;
	    
	    change=ceil(D/d);
	    //cout<<"change ="<<change<<" "<<"interval = "<<interval<<" ";
	    
	    for(int i=0;i<change;i++){
	        d=interval;
	        while(d--){
	            ctr++;
	            if(ctr>D){
	                break;
	            }
	            val=(P+i*Q);
	            sum+=val;
	            //cout<<"val = "<<val<<" ";
	        }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}

//PASSED

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll D,d,P,Q,x;
        cin>>D>>d>>P>>Q;
        ll count = 0;
        x=D/d;
        
        if(x%2==0){
            //if sum is even we need to apply this formula for AP
            count=d*((x/2)*(2*P+(x-1)*Q));
        }else{
            //if sum is odd then apply this formula for AP
            count=d*(x*(P+((x-1)/2)*Q));
        }
        //atlast do final sum
        count+=(D%d)*(P+(x)*Q);
        cout<<count<<"\n";
    }
}
