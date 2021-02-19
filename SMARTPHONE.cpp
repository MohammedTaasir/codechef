#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,i;
    cin>>n;
    long long int arr[n], profit[n], max=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        profit[i]=arr[i]*(n-i);
        if(max<profit[i]){
            max=profit[i];
        }
    }
    cout<<max<<"\n";
	// your code goes here
	return 0;
}
