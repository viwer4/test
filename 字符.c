#include <stdio.h>
int main()
{
	char ch;
	int frist=1,k;
	printf("Enter 8 characters:");
	for(k=1;k<=8;k++){
		ch=getchar();
		if(frist==1){
			putchar(ch);
			frist=0;
		}else{
			putchar('-');
			putchar(ch);
		}
	}
	return 0;
}