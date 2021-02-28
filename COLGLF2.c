#include <stdio.h>------------------->COPIED FROM OTHER

int main(void) 
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	   long int s,j,k,m,cal=0,n;
	   scanf("%ld",&s);
	   long int intro[s];
	   for(j=0;j<s;j++)
	   {
	       scanf("%ld",&intro[j]);
	   }
	   for(m=0;m<s;m++)
	   {
	       long int ep=0;
	       scanf("%ld",&ep);
	       long int epi[ep];
	       for(k=0;k<ep;k++)
	       {
	         scanf("%ld",&epi[k]);
	         cal=cal+epi[k];
	       }
	       if(ep>1)
	       {
	           cal=cal-((ep-1)*(intro[m]));
	       }
	   }
	   printf("%ld\n",cal);
	   
	}
	return 0;
}



#include <stdio.h>-----------------------------------------> MINE

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
                    continue;-----------------------------------> i guess they dont accept solutions having continue.
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

