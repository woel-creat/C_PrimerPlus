#include<stdio.h>

int main()
{
    printf("请输入一个三位数:");
    int k;
    scanf("%d",&k);
    int a=k/100;
    int c=k%10;
    int b=k%100/10;
    printf("倒置后是:%d\n",c*100+b*10+a);

    return 0;
}