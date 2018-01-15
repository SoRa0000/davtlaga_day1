#include <stdio.h>
main(){
	int n,a[100],i=0,j,k,m;
		scanf("%d",&n);
		while(n>=2){
			a[i]=n%2;
			i++;
			n=n/2;
	}
		a[i]=n;
		for(i;i>=0;i--){
			printf("%d",a[i]);
	}
		
}
