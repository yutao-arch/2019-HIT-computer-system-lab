#include <stdio.h>
#include <stdio.h>
int utf8len(char* x)
{
	int c = 0;
	for (; *x != '\0';)
	{
		if ((*x >> 7) == 0)
		{
			x++;
		}
		else if ((*x >> 4) == 14)
		{
			x = x + 3;
		}
		else if ((*x >> 4) == 15)
		{
			x = x + 4;
		}
		else
		{
			x = x + 2;
		}
		c++;
	}
	return c;
}
int main()
{
	char a[] = "12грЬЮ";
	int j = utf8len(a);
	printf("%d", j);
	return 0;
}
