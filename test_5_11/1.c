#include<stdio.h>

#define p 60

int main(){
    int a=1;
    int b;
    int c;
    printf("请输入您想让我们转换的分钟值：");
    while(1){
        scanf("%d",&a);
        if(a>=60){
            b=a/p;
            c=a%p;
            printf("为%d小时%d分钟,请继续输入：",b,c);
       }
        else if(a>0&&a<60){
            printf("为0小时%d分钟，请继续输入：",a);
       }
        else{
            printf("程序退出");
            break;
        }
     }
     return 0;
    }
    