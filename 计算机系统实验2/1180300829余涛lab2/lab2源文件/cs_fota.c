#include<stdio.h>
#include<math.h>
int length(double num)
{
	int len = 0;
	while (num > 0.001)
	{
		num = num / 10;
		len++;
	}
	return len;
}
int main()
{
	double fudian = 4321.238;
	char zi[100];
	int n, i,zheng,p,m=1;
	n = length(fudian);
	for (zheng = 0; pow(10, zheng) < fudian; zheng++)
	{
	}
	for (i = 0; i < zheng; i++)
	{
		zi[i] = (((int)fudian) / ((int)(pow(10, zheng - i - 1)))) % 10 + '0';
	}
	zi[zheng] = '.';
	for (p= zheng+1; p< n+1; p++)
	{
		zi[p] = ((int)(fudian * pow(10, m) ))% 10+'0';
		m++;
	}
	zi[n+1] = '\0';
	printf("%s", zi);
	return 0;
}
