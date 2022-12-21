#include <stdio.h>

float f(float x,float y)
{
    return (y-x);
}

int main()
{
    float x0,y0,k1,k2,k3,k4,yn,h,xn;
    printf("Enter the Initial conditions: \n");
    printf("x0: ");
    scanf("%f",&x0);
    printf("y0: ");
    scanf("%f",&y0);
    printf("Enter calculation point xn: ");
    scanf("%f",&xn);
    printf("Enter value of Step: ");
    scanf("%f",&h);

    do
    {
        k1=h*(f(x0,y0));
        k2=h*(f((x0+(h/2)),(y0+(k1/2))));
        k3=h*(f((x0+(h/2)),(y0+(k2/2))));
        k4=h*(f((x0+h),(y0+k3)));
        yn=yn+((k1+(2*k2)+(2*k3)+k4)/6);
        y0=yn;
        x0=x0+h;
    } while (x0<xn);
    printf("Value at %0.2f is : %f",xn,yn);
    
}