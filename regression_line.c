#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the no. of values: ");
    scanf("%d",&n);

    float x[n],y[n],sumx=0,sumy=0,sumxy=0,sumx2=0,a,b;
    printf("Enter the values of X:\n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        sumx=sumx+x[i];
        sumx2=sumx2+(x[i]*x[i]);
    }

    printf("Enter the values of Y: \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
        sumy=sumy+y[i];
        sumxy=sumxy+(y[i]*x[i]);
    }

    b=(float)(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    a= (float)(sumy-b*sumx)/n;

    printf("Regression line:\n");
    printf("Y=%0.3f + %0.3f*X",a,b);
    return 0;
}
