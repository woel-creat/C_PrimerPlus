#include<stdio.h>

int main()
{
    printf("请输入一个数字：");
    int k;
    int n=0;
    scanf("%d",&k);
    while (k>0)
    {
        k/=10;
        n++;
    }
    printf("这个数字是%d位数",n);
    return 0;
}

