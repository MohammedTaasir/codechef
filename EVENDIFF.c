#include<stdio.h>

int main(){
    int n,t,i,j,o,e;
    int a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        e=0,o=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]%2==0){
                o++;
            }
            else{
                e++;
            }
        }
        (o>e)?(printf("%d\n",e)):(printf("%d\n",o));
    }
}
