#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r,simple_interest,compound_interest;
printf("enter the principle amount:");
scanf("%d",&p);
printf("enter the time period:");
scanf("%d",&t);
printf("enter the rate of interest:");
scanf("%d",&r);
simple_interest=(p*t*r)/100;
printf("The simple interest is %d\n",simple_interest);
compound_interest=p*(pow(1+r/100,t));
printf("The compound interest is %d",compound_interest);
return;
}
