#include<stdio.h>

int main()
{
    int x;
    printf("请输入一个数字让我们倒置：");
    scanf("%d",&x);
    int digit;
    int ret=0;

    while(x>0){
        digit=x%10;
        printf("%d",digit);
        ret=ret*10+digit;
        //printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
        x/=10;
    }
    printf("%d",ret);
    return 0;

}