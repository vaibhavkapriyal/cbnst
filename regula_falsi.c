#include<stdio.h>
#include<math.h>

float f(float x)
{
    return((x*x*x)-2*x-5);
}

int main()
{
    float x1,x2,x;
    do
    {
        printf("Enter any two values: ");
        scanf("%f %f",&x1,&x2);

        if((f(x1)*f(x2))<0)
        {
            break;
        }
        else
        printf("Invalid Roots");
    } while (1);

    int flag=1;
     float err,mid;
     int itr=0;
     printf("Enter the allowed error value: ");
     scanf("%f",&err);
     do
     {
        itr++;
        mid=x1-((x2-x1)/(f(x2)-f(x1)))*f(x1);
        printf("Iteration no : %d,roots are : %f %f, value at current iteration %f\n",itr,x1,x2,f(mid));
        if(fabs(f(mid))<err)
        {
            flag=0;
            printf("Roots of the equation are : %f",mid);
        }
        if(f(x1)*f(mid)<0)
            x2=mid;
        else if(f(mid)*f(x2)<0)
            x1=mid;
     } while (flag);
     
    return 0;
}
