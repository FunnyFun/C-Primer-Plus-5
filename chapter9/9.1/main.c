//使用函数打印一个由40个*组成的信头
//函数名：starbar
//参数：姓名.NAME 地址.ADDRESS 打印*数.WIDTH
#define NAME "Funny"
#define ADDRESS "east river road 601"
#define WIDTH 40
#include <stdio.h>
#include <stdlib.h>
//申明函数
void starbar(void);
int main()
{
    starbar();
    printf("\n%s\n",NAME);
    printf("%s\n",ADDRESS);
    starbar();
}
//函数实现
void starbar(void)
{
    int i;
    for (i=0;i<WIDTH;i++)
        printf("*");
}
