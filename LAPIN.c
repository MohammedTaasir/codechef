#include <stdio.h>
#include <string.h>

int main(void) {
    int i,j,k,n,a,t,m,w,z,c,u;
    char str[1000];
    char x[500], y[500];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",str);
        n=strlen(str);
        a=n/2;
        if(n%2==0){
            for(j=0;j<(n/2);j++){
                x[j]=str[j];
            }
            x[j]='\0';
            for(u=0,k=(n/2);k<n;k++,u++){
                y[u]=str[k];
            }
            y[u]='\0';
        }
        else{
            for(j=0;j<(n/2);j++){
                x[j]=str[j];
            }
            x[j]='\0';
            for(u=0,k=(n/2)+1;k<n;k++,u++){
                y[u]=str[k];
            }
            y[u]='\0';
        }
        //puts(x);
        //puts(y);
        m=strlen(x);
        //printf("%d",m);
        c=0;
        for(w=0;w<m;w++){
            for(z=0;z<m;z++){
                if(x[w]==y[z]){
                    c++;
                    y[z]='\0';
                    break;
                }
            }
        }
       // printf("%d--%d",c,m);
        if(c==m){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
	// your code goes here
	return 0;
}

