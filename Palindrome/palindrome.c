#include<stdio.h>
int main()
{
int rev=0,n,r,m;
printf("enter the number:");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
rev=10*rev+r;
n=n/10;
}
printf("Reverse of given number is %d\n",rev);
if(rev==m)
printf("The palindrome number is %d\n",m);
else 
printf("%d is not a palindrome\n",m);
return 0;
}
