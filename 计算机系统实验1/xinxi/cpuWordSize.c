#include<stdio.h>
int cpuWordSize()
{
    printf("%d",sizeof(int *)*8);
}
int main()
{
    cpuWordSize();
	return 0;
}

