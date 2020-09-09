#include <stdio.h>
int main()
{
	int i;
	float zheng0, fu0, minfudian, maxfudian, guifudian, wuqiong, feishu;
	char* z;
	z = (char*)& zheng0;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b00000000;
	printf("正0  %f",zheng0);
	printf("\n");

	z = (char*)& fu0;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b10000000;
	printf("负0  %f",fu0);
	printf("\n");

	z = (char*)& minfudian;
	*z = 0b00000001;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b00000000;
	printf("最小浮点正数  %.46f",minfudian);
	printf("\n");

	z = (char*)& maxfudian;
	*z = 0b11111111;
	*(z + 1) = 0b11111111;
	*(z + 2) = 0b01111111;
	*(z + 3) = 0b01111111;
	printf("最大浮点正数  %f",maxfudian);
	printf("\n");


	z = (char*)& guifudian;
	*z = 0b00000001;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b10000000;
	*(z + 3) = 0b00000000;
	printf("最小正规范浮点数  %.39f",guifudian);
	printf("\n");


	z = (char*)& wuqiong;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b10000000;
	*(z + 3) = 0b01111111;
	printf("正无穷大  %f",wuqiong);
	printf("\n");


	z = (char*)& feishu;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b11100101;
	*(z + 3) = 0b01111111;
	printf("nan  %f",feishu);
	printf("\n");
}
