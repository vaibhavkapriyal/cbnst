#include <stdio.h>
#include <math.h>

float X(float y,float z)
{
    return((-17-4*y-z)/9);
}

float Y(float x,float z)
{
    return((4-x)/6);
}

float Z(float x,float y)
{
    return((x-2*y-14)/6);
}

int main()
{
    float x1=0,y1=0,z1=0,x2,y2,z2,err;
    int max,i=0;

    printf("Enter Maximum Iterations: ");
    scanf("%d",&max);

    printf("Enter the allowed Error Value: ");
    scanf("%f",&err);

    do
    {
        i=i+1;
        x2=X(y1,z1);
        y2=Y(x2,z1);
        z2=Z(x2,y2);

        if(fabs(x1-x2)<err && fabs(y1-y2)<err && fabs(z1-z2)<err)
        {
            printf("Roots of the Equation are: x=%0.2f     y=%0.2f    z=%0.2f\n",x2,y2,z2);
            return 0;
        }
        
        printf("Iteration: %d       Roots: x=%f     y=%f    z=%f\n",i,x2,y2,z2);
        x1=x2;
        y1=y2;
        z1=z2;
        if(i>=max)
        {
            printf("Maximum Iterations Reached!!!!\n");
            return 0;
        }
    } while (1);
    
}