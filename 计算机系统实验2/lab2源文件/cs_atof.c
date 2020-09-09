#include<stdio.h>
#include<string.h>
#include<math.h>
double cs_atof(char a[])
{
	int i, length, t;
	double n = 0;
	length = strlen(a);
	for (i = 0; i < length; i++)
	{
		if (a[i] == '.')
		{
			t = i;
			continue;
		}
		n = n * 10 + a[i] - '0';
	}
    n=n * pow(10, (t - length + 1));
	return n;
}
int main()
{
	char a[100] = "2324.231";
	printf("%lf", cs_atof(a));
	return 0;
}
