#include <stdio.h>

int main()
{
    int k;
    int i;
    double sum=0.0;
    double sign=1.0;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        sum+=sign/i;
        sign=-sign;
    }
    printf("%f",sum);
    return 0;
}
