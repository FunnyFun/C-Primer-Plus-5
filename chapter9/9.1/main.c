//9.2
//使用函数打印信头
//函数名：show_n_char()
//参数：姓名.NAME 地址.ADDRESS 打印*数.WIDTH
#define NAME "Funny"
#define ADDRESS "east river road 601"
#define WIDTH 40
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//申明函数
void show_n_char(char,int);
int main()
{
    int spaces;
    show_n_char('*',WIDTH);//第一行打40个*
    putchar('\n');
    show_n_char(' ',12);//空12个空格
    printf("%s\n",NAME);//打印姓名
    spaces=(WIDTH-strlen(ADDRESS))/2;//计算地址居中前面需空格数
    show_n_char(' ',spaces);//打印地址行空格
    printf("%s\n",ADDRESS);//打印地址
    show_n_char('*',WIDTH);//尾行再打40个*
}
//函数实现
void show_n_char(char ch,int num)
{
    int counter;
    for (counter=0;counter<num;counter++)
        putchar(ch);
}
