#include<stdio.h>

int main()
{
    printf("请输入一个数字（0和1除外），让我们判断是否是素数：");
    int k;
    int i;
    int isPrime=1;
    int ys=2;
    scanf("%d",&k);
    for(i=2;i<k;i++){
        if(k%i==0){
            isPrime=0;
            ys ++;
            }
    }
    if(isPrime==0){
        printf("这个数不是素数，且一共有%d个因数。",ys);
    }
    else{
        printf("这个数是素数。");
    }
    
    
}

