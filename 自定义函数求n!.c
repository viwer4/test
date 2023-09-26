#include <stdio.h>
double fact( int n );

int main()
{
	int i, n;
	double result;          
	
	printf("Enter n:"); //自定义函数
	scanf("%d", &n);
	for( i = 0; i<=n; i++) {
		result=fact(i); //调用函数fact(i)计算i
		printf("%d!=%.0f\n", i, result);
	}
	return 0;
}
//定义求n！的函数
double fact(int n)
{
	int i;
	double product;
	
	product = 1;
	for(i=1;i<=n;i++) {
		product *= i;
	}
	return product;    //将结果会送主函数
}