#include <stdio.h>
#include <math.h>
main(){
	int n, a[100],i=0,k,sum=0,j=0;
	scanf("%d",&n);
	while(n>=2){
		a[i]=n%2;
		i++;
		n=n/2;
	}
	a[i]=n;
	k=i;
	while(j<=i){
		sum=sum+a[j]*pow(2,k);
		j++;
		k--;
	}
	printf("%d",sum);
}
