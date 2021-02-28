#include <stdio.h>

int main(void) {
    int t,d,c,i,a[3],b[3],sA,sB,with_d,with_c;
    scanf("%d",&t);
    while(t--){
        sA=0;
        sB=0;
        with_c=0;
        with_d=0;
        scanf("%d %d",&d,&c);
        for(i=0;i<3;i++){
            scanf("%d",&a[i]);
            sA+=a[i];
        }
        for(i=0;i<3;i++){
            scanf("%d",&b[i]);
            sB+=b[i];
        }
        
        with_d = sA + sB + (2*d);
        if(sA < 150){
            sA+=d;
        }
        if(sB < 150){
            sB+=d;
        }
        with_c = sA + sB + c;
        if(with_c < with_d){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
	// your code goes here
	return 0;
}

