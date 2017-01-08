#include<stdio.h>
#include<math.h>

int main()
{
    double number,power;

    while(scanf("%lf %lf",&number,&power)==2)
    {
        printf("%.0lf\n",pow(power,1/number));
    }

    return 0;
}
