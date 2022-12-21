#include <stdio.h>
float f(float x,float y)
{
    //return(x+y+x*y);
    return(x+y);
}
int main()
{
    float x0,y0,xn,yn,n,h,slope;

    printf("Enter the intial values: \n");
    printf("x0: ");
    scanf("%f",&x0);
    printf("y0: ");
    scanf("%f",&y0);
    printf("Enter calculation point xn: ");
    scanf("%f",&xn);
    printf("Enter value of Step: ");
    scanf("%f",&h);
    printf("x0\t\ty0\t\tslope\t\tyn\n");
    printf("----------------------------\n");

    do
    {
        slope=f(x0,y0);
        yn=y0+(h*slope);
        printf("%f\t%f\t%f\t%f\n",x0,y0,slope,yn);
        y0=yn;
        x0=x0+h;
    }while(x0<xn);
    printf("Value at %0.2f is : %f",xn,yn);
    return 0;
}