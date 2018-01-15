#include <stdio.h>
main(){
	int n,a[100],l,i=0,b[100],k,j=0,m=0;
		scanf("%d",&n);
		while(n!=0){
			k=n%10;
		for(i=0;i<=3;i++){
			a[i]=k%2;
			k=k/2;
		}
		for(i=0;i<=3;i++){
			b[j]=a[i];
			l=j;
			j++;
		}
		n=n/10;	
	}
		while(l!=-1){
			printf("%d",b[l]);
			l--;
	}	
}
