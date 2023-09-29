#include <stdio.h>

int main()
{
	int n;
	double m,i;
	scanf("%d",&n);
	if ( n<=50) {
		printf("kWh=%d,pay=%0.2f",n,m=n*0.53);
	} else {
		i = n-50;
		printf("kWh=%d,pay=%0.2f",n,m=50*0.53+i*0.58);
	}
	return 0;
}