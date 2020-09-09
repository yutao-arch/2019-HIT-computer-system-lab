#include<stdio.h>
#include<stdbool.h>
bool islittleendian()
{
	int x = 0x00000001;
	return *(char*)& x;
}
int main()
{
	int r;
	r=islittleendian();
	printf("%d", r);
	return 0;
}
