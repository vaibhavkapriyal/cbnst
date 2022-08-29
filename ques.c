#include <stdio.h>

int main()
{
	float tv,av,ae,re,pe;
	printf("Enter true value and Absolute value:-\n");
	scanf("%f",&tv);
	scanf("%f",&av);
	if(tv>av)
	{
		ae=tv-av;
	}
	else
	{
		ae=av-tv;
	}
	re=ae/tv;
	pe=re*100;
	printf("Absolute error :- %0.2f\n",ae);
	printf("Relative error :- %0.2f\n",re);
	printf("Percentage error :- %0.2f\n",pe);
	return 0;
}
