//ʹ�ú�����ӡһ����40��*��ɵ���ͷ
//��������starbar
//����������.NAME ��ַ.ADDRESS ��ӡ*��.WIDTH
#define NAME "Funny"
#define ADDRESS "east river road 601"
#define WIDTH 40
#include <stdio.h>
#include <stdlib.h>
//��������
void starbar(void);
int main()
{
    starbar();
    printf("\n%s\n",NAME);
    printf("%s\n",ADDRESS);
    starbar();
}
//����ʵ��
void starbar(void)
{
    int i;
    for (i=0;i<WIDTH;i++)
        printf("*");
}
