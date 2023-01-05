#include<stdio.h>
void main()
{
int choice;
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("SUNDAY\n");
break;
case 2:printf("MONDAY\n");
break;
case 3:printf("TUESDAY\n");
break;
case 4:printf("WEDNESDAY\n");
break;
case 5:printf("THURSDAY\n");
break;
case 6:printf("FRIDAY\n");
break;
case 7:printf("SATURDAY\n");
break;
default :printf("enter the choice between 1 yo 7");
break;
}
printf("end of switch case");
return;
}
