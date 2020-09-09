#include<stdio.h>
#include<math.h>
int main()
{
	int zhengshu=4321;
	char zi[100];
	int n,i;
	for ( n = 0; pow(10, n) <zhengshu; n++)
	{
	}
	for ( i = 0; i < n; i++)
	{
		zi[i] = (zhengshu / ((int)(pow(10, n - i - 1))))%10 + '0';
	}
	zi[n] = '\0';
	printf("%s", zi);
	return 0;
}
