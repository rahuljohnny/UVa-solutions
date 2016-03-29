#include <stdio.h>
main()
{
int t;
long i,j,m,n,k,a[55],temp,c=0;
scanf("%d",&t);
for(m=0;m<t;m++)
{
scanf("%ld", &n);
for(i=0; i<n; i++)
scanf("%ld", &a[i]);
for(j=0;j<n;j++)
    for(k=0; k<(n-1)-j; k++)
        if(a[k] > a[k+1])
            {
            temp = a[k];
            a[k] = a[k+1];
            a[k+1] = temp;
            c++;
            }
printf("Optimal train swapping takes %ld swaps.\n", c);
c=0;
}
return 0;
}
