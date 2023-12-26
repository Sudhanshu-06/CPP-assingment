#include<stdio.h>
int main()
{
    float cp,sp,profit,loss,profitper,lossper;
    printf("Enter the celling price: ");
    scanf("%f",&cp);
    printf("Enter the selling price:");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        profitper=(profit*100)/cp;
        printf("profit= %f",profit);
        printf("\nprofitpercent= %.f",profitper);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        lossper=(loss*100)/sp;
        printf("loss=%f",loss);
        printf("\nloss= %.f",lossper);
    }
    else{
        printf("No profit No loss");
    }
    return 0;

}
