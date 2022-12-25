#include <stdio.h>

float y(int x)
{
    //return(x*x*x);
    return x;
}

int main()
{
    float sum=0,h;
    int a,b,n,i;

    printf("Enter the intervals A and B: ");
    scanf("%d %d",&a,&b);

    printf("Enter the no. of Intervals: ");
    scanf("%d",&n);

    sum=sum+(y(a)+y(b));
    h=(b-a)/n;

    for(i=a+h;i<b;i=i+h)
    {
        sum=sum+(2*y(i));
    }
    sum=(sum*h)/2;

    printf("Value of Intregal is: %0.2f",sum);
    return 0;

}
