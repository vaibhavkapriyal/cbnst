#include <stdio.h>
#include <math.h>

float u_cal(int u,int n)
{
    float temp=u;
    for(int i=1;i<n;i++)
    {
        temp=temp*(u-i);
    }
    return temp;
}

int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,i,j;
    printf("Enter the no of inputs: ");
    scanf("%d",&n);
    float x[n];
    printf("Enter the value of X:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    float y[n][n];
    printf("Enter the value of Y:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i][0]);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%f\t",x[i]);
        for(j=0;j<n-i;j++)
        {
            printf("%f\t",y[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value you want to calculate at: ");
    float value;
    scanf("%f",&value);
    float u=(value-x[0])/(x[1]-x[0]);
    float sum=y[0][0];
    for(i=1;i<n;i++)
    {
        sum=sum+((u_cal(u,i)*y[0][i])/fact(i));
    }
    printf("Value at %f is: %f",value,sum);

    return 0;
}