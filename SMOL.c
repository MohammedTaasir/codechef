#include <stdio.h>

int main(void) {
    int t,i,c;
    int a[100000000];
    scanf("%d",&t);
    while(t--){
        
        for(i=0;i<10;i++){
            scanf("%d",&a[i]);
        }
        
        scanf("%d",&c);
        
        for(i=9;i>=0;i--){
            c=c-a[i];
            if(c<0){
                printf("%d\n",(i+1));
                break;
            }
        }
        
    }
	// your code goes here
	return 0;
}

