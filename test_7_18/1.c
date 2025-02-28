#include<stdio.h>

int main()
{   //输入
    printf("请输入三个数进行比较，三个数之间需有空格:");
    //初始化
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    //比较
    if (a>b)    
            if(a>c){
                max=a;
                } else{
                max=c;
                }
                
    else 
            if(b>c){
                max=b;
                } else{
                max=c;
                }  
    //得出结果
    printf("最大的数为%d\n",max);
    return 0;          

}

