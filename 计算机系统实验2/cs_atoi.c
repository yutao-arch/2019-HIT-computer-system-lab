#include<stdio.h>
int cs_atoi(char s[])
{
	int n = 0;
	for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		n = 10 * n + (s[i] - '0');
	}
	return n;
}
int main()
{
	int b;
	char a[] = "1234";
	b=cs_atoi(a);
	printf("%d", b);
	return 0;
}
