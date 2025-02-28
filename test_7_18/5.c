#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int number = rand()%100+1;
    int a=0;
    int count=0;
    do{printf("请猜一个在一到一百之间的数字：");
       scanf("%d",&a);
       count++;
       if(a<number){
        printf("您输入的数字小了，请继续猜想。");
       }else if(a>number){
        printf("您输入的数字大了，请继续猜想。");
        }
       }while(a!=number);
    printf("猜对啦，太棒啦，正确数字就是%d,您一共猜了%d次",a,count);
    return 0;
}