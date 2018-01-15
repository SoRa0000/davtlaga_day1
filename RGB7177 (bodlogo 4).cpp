#include <stdio.h>
#include <math.h>
main(){
	int n,i=0,sum=0,s=1,k;
	scanf("%d",&n);
	while(n!=0){
		k=n%10;
		s=k*pow(2,i);
		i++;
		n=n/10;
		sum=sum+s;
	}
	if(sum%15==0) printf("Yes");
	else printf("No");
}

