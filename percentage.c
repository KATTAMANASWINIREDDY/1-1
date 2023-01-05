#include<stdio.h>
void main()
{
float percentage;
printf("enter the percentage");
scanf("%f",&percentage);
if(percentage>=70.0)
printf("DISTINCTION\n");
else if(percentage>=60.0&&percentage<70.0)
printf("FIRST CLASS\n");
else if(percentage>=50.0&&percentage<60.0)
printf("SECOND CLASS\n");
else if(percentage>=1.0&&percentage<40.0)
printf("FAIL\n");
else
printf("enter the percentage between 1 and 100\n");
printf("Percentage obtained is %.2f",percentage);
return;
}
