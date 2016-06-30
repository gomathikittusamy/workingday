#include<stdio.h>
#include<stdio.h>
void main()
{
char day[100];
printf("enter the day ");
scanf("%s",day);
if((strcmp(day=="sunday"))||(strcmp(day=="saturday")))
{
printf("false");
}
else
printf("true");
getch();
}
