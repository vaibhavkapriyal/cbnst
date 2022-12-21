#include <stdio.h>
#include <math.h>

float y(float x)
{
    return (1/(1+(x*x)));
}

int main()
{
    float sum=0,h,a,b;
    int n,i,c=1;

    printf("Enter the intervals A and B: ");
    scanf("%f %f",&a,&b);

    printf("Enter the no. of Intervals: ");
    scanf("%d",&n);

    sum=sum+(y(a)+y(b));
    h=(a+b)/n;

    for(i=a+h;i<b;i=i+h)
    {
        if(c%2==0)
        {
            sum=sum+(2*y(i));
        }
        else
        {
            sum=sum+(4*y(i));
        }
        c++;
    }
    sum=(sum*h)/3   ;

    printf("Value of Intregal is: %0.2f",sum);
    return 0;

}