#include<stdio.h>

int main()
{
    printf("请输入一个数字：");
    int k;
    int digital;
    int ret=0;
    scanf("%d",&k);

    while(k>0){
        digital=k%10;
        ret=ret*10+digital;
        k /= 10;
    }
    printf("这个数字倒置后是:%d",ret);
    return 0;

    
}

