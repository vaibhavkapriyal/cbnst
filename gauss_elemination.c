#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of equations: ");
    scanf("%d",&n);

    float arr[n][n+1];
    float b[10];
    float c;

    printf("Enter the co-efficients of the equations: \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<(n+1);j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%f",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                c=arr[j][i]/arr[i][i];

                for(k=0;k<n+1;k++)
                {
                    arr[j][k]=arr[j][k]-(c*arr[i][k]);
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%0.1f\t",arr[i][j]);
        }
        printf("\n");
    }

    b[n]=arr[n][n+1]/arr[n][n];
    for(int i=n-1;i>=1;i--)
    {
        float sum=0;
        for(int j=i+1;j<=n;j++)
        {
            sum=sum+arr[i][j]*b[j];
        }
        b[i]=(arr[i][n+1]-sum)/arr[i][i];
    }
    printf("Solution for given equations\n");
    for(int i=1;i<=n;i++)
    {
        printf("x%d=>%f\n",i,b[i]);
    }

    return 0;
}