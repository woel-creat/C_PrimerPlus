#include<stdio.h>

int main()
{   
    int sum=0;
    int count=0;
    int number;
    do{ 
        printf("请输入数字进行求平均数，以输入-1表示停止：");
        scanf("%d",&number);
        if(number !=-1){
            sum += number;
            count ++;
        }
      }  while (number!= -1);
    

        printf("计算的平均数是：%f\n",1.0*sum/count);
        return 0;
}

