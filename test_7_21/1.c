#include <stdio.h>

int main()
{
    int k;
    int one,two,five;

    printf("请输入您想凑的面额（元）：");
    scanf("%d",&k);
    for(one=1;one<k*10;one++){
        for(two=1;two<k*10/2;two++){
            for(five=1;five<k*10/5;five++){
                if(one+two*2+five*5==k*10){
                    printf("可以用%d个一角和%d个两角和%d个五角组成%d元;\n",one,two,five,k);
                }
            }

        }

    }
    return 0;
}

