#include<stdio.h>
int N=1;
void fact(int n)
{
	int i = 1;
	for(; i <= n; i++){
		N *= i;
}
}

int main()
{
	fact(5);
	printf("%d", N);
	return 0;
}
