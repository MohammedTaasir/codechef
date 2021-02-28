#include <stdio.h>

int main(void) {
    int t,s,i,sum,j,c,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&s);
        int a[s];
        for(i=0;i<s;i++){
            scanf("%d",&a[i]);
        }
        sum=0;
        for(i=0;i<s;i++){
            scanf("%d",&j);
            c=0;
            while(j--){
                if(c==0){
                    scanf("%d",&b);
                    c++;
                    sum+=b;
                    continue;
                }
                scanf("%d",&b);
                sum+=(b-a[i]);
            }
        }
        printf("%d\n",sum);
    }
	// your code goes here
	return 0;
}

