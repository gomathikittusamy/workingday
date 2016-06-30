#include<stdio.h>
#include<stdio.h>
void main()
{
char day[100];
printf("enter the day ");
scanf("%s",day);
if((strcmp(day=="monday"))||(strcmp(day=="tuesday"))||(strcmp(day=="wednesday"))||(strcmp(day=="thuresday"))||(strcmp(day=="friday")))
{
printf("true");
}
else
printf("false");
getch();
}
