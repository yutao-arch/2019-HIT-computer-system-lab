#include<stdio.h>

typedef struct comp

{

    int price;

}ls;

typedef union compu

{

    int amount;

    char app;

}yu;

enum DAY

{

    mon=1,tue,wed

}day;



typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,size_t len)

{

    size_t i;

    for(i=0;i<len;i++)

    {

        printf(" %.2x",start[i]);

    }

    printf("\n");

}

void show_int(int x)

{

    show_bytes((byte_pointer) &x,sizeof(int));

}

void show_short(short x)

{

    show_bytes((byte_pointer) &x,sizeof(short));

}

void show_long(long x)

{

    show_bytes((byte_pointer) &x,sizeof(long));

}

void show_char(char x)

{

    show_bytes((byte_pointer) &x,sizeof(char));

}

void show_float(float x)

{
    show_bytes((byte_pointer) &x,sizeof(float));

}

void show_double(double x)

{
    show_bytes((byte_pointer) &x,sizeof(double));
}

void show_pointer(void *x)

{

    show_bytes((byte_pointer) &x,sizeof(void *));

}

int main()

{

    int a=465;

    int* a1=a;

    short b=1;

    long c=287788;

    char d='b';

    float e=3.46;

    double f=5.623;

    ls g;

    g.price=77;

    yu h;

    h.amount=76;

    h.app='B';

    day=wed;



    printf("int类型变量名：    a        内容：%-8d  地址：%p 对应16进制的内存各字节：",a,&a);

    show_int(a);

    printf("\n");



    printf("short类型变量名：  b        内容：%-8d  地址：%p 对应16进制的内存各字节：",b,&b);

    show_short(b);

    printf("\n");



    printf("long类型变量名：   c        内容：%-8ld  地址：%p 对应16进制的内存各字节：",c,&c);

    show_long(c);

    printf("\n");



    printf("char类型变量名：   d        内容：%-8c  地址：%p 对应16进制的内存各字节：",d,&d);

    show_char(d);

    printf("\n");



    printf("float类型变量名：  e        内容：%f  地址：%p 对应16进制的内存各字节：",e,&e);

    show_float(e);

    printf("\n");



    printf("double类型变量名： f        内容：%f  地址：%p 对应16进制的内存各字节：",f,&f);

    show_double(f);

    printf("\n");



    printf("pointer类型变量名：a1       内容：%p  地址：%p 对应16进制的内存各字节：",a1,&a1);

    show_pointer(a1);

    printf("\n");



    printf("struct类型变量名： g.price  内容：%d        地址：%p 对应16进制的内存各字节：",g.price,&g.price);

    show_int(g.price);

    printf("\n");



    printf("union类型变量名：  h.amount 内容：%d        地址：%p 对应16进制的内存各字节：",h.amount,&h.amount);

    show_int(h.amount);

    printf("                   h.app    内容：%c         地址：%p 对应16进制的内存各字节：",h.app,&h.app);

    show_char(h.app);

    printf("\n");



    printf("enum类型变量名：   day      内容：%d         地址：%p 对应16进制的内存各字节：",day,&day);

    show_int(day);

    printf("\n");


    printf("main函数的地址为 %lx\n",main);
    printf("\n");

    printf("print函数的地址为 %lx",printf);





}


