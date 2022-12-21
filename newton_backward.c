#include <stdio.h>

float u_cal(int u,int n)
{
    float temp=u;
    for(int i=1;i<n;i++)
    {
        temp=temp*(u+1);
    }
    return temp;
}

int fact(int n)
{
    int f=1;
    for(int i=2;i<n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,i,j;
    printf("Enter the no. of values: ");
    scanf("%d",&n);

    float x[n];
    printf("Enter the value of X: \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    float y[n][n];
    printf("Enter the value of Y:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i][0]);
    }

    for(i=1;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            y[j][i]=y[j][i-1]-y[j-1][i-1];
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%f\t",x[i]);
        for(j=0;j<=i;j++)
        {
            printf("%f\t",y[i][j]);
        }
        printf("\n");
    }
    float value;
    printf("Enter the value you want to calculate at: ");
    scanf("%f",&value);

    float u=(value-x[n-1])/(x[1]-x[0]);
    float sum=y[n-1][0];

    for(i=1;i<n;i++)
    {
        sum=sum+(u_cal(u,i)*y[n-1][i])/fact(i);
    }
    printf("Value at %f is: %f",value,sum);

    return 0;
}