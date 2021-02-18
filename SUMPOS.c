
#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n;
	int a[5][3];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	    for(j=0;j<3;j++){
	        scanf("%d",&a[i][j]);
	    }
	}
	
	for(i=0;i<n;i++){
	    if(a[i][0]+a[i][1]==a[i][2]){
	        printf("YES\n");
	        //continue;
	    }
	    else if(a[i][0]+a[i][2]==a[i][1]){
	        printf("YES\n");
	        //continue;
	    }
	    else if(a[i][1]+a[i][2]==a[i][0]){
	        printf("YES\n");
	        //continue;
	    }
	    else{
	        printf("NO\n");
	    }
	} 
	return 0;
}
