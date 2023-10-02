#include <stdio.h>

int main()
{
	int a;
	int x;
	int b = 0;
	int c = 0;
	int y;
	int z;
	printf("enter three integers.\n");
	scanf("%d %d %d",&a, &b, &c);
	if ( a >b ) {
		if ( a>c) {
			x = a;
		} else {
			x = c;
		}
	} else {
		if ( b>c ) {
			x = b;
		} else {
			x = c;
		}
	}
	printf("%d ",&x);
	return 0;
}