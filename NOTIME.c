#include <stdio.h>

int main(void) {
    int t,h,x,n;
    scanf("%d %d %d",&t,&h,&x);
    while(t--){
        scanf("%d",&n);
        if((n + x)>=h){
            printf("YES");
            break;
        }
        if(t==0){
            printf("NO");
        }
    }
	// your code goes here
	return 0;
}

