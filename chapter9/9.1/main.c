//9.2
//ʹ�ú�����ӡ��ͷ
//��������show_n_char()
//����������.NAME ��ַ.ADDRESS ��ӡ*��.WIDTH
#define NAME "Funny"
#define ADDRESS "east river road 601"
#define WIDTH 40
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��������
void show_n_char(char,int);
int main()
{
    int spaces;
    show_n_char('*',WIDTH);//��һ�д�40��*
    putchar('\n');
    show_n_char(' ',12);//��12���ո�
    printf("%s\n",NAME);//��ӡ����
    spaces=(WIDTH-strlen(ADDRESS))/2;//�����ַ����ǰ����ո���
    show_n_char(' ',spaces);//��ӡ��ַ�пո�
    printf("%s\n",ADDRESS);//��ӡ��ַ
    show_n_char('*',WIDTH);//β���ٴ�40��*
}
//����ʵ��
void show_n_char(char ch,int num)
{
    int counter;
    for (counter=0;counter<num;counter++)
        putchar(ch);
}
