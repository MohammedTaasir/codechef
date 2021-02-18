#include <stdio.h>

int main(void) {
    int t,i,j,n,a[1000000000],s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        s=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            s+=a[j];
        }
        if(s%2 == 0){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
    }
	// your code goes here
	return 0;
}
