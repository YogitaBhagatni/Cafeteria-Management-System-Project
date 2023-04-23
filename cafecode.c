#include<stdio.h>
#include<conio.h>
int main()
{
int Momos,Frenchfries,Manchurian,Pizza,n=0,i,sum=0;
Momos=1;
Frenchfries=2;
Manchurian=3;
Pizza=4;
printf("\n\t\tWELCOME TO CURIOUS CAFE!");
printf("\n\n\t\t******MENU*****\n");
printf("\n\t1.Momos Rs.100\n\t2.Frenchfries Rs.70\n\t3.Manchurian Rs.90\n\t4.PizzaRs.150");
for(n=1;n!=0;)
{
printf("\n\n ENTER YOUR ORDER NO:");
scanf("%d",&n);
 switch(n)
 {
 case 0:
 printf("\n\n-----------BILL-------------");
 printf("\n\nYour total bill=%d",sum);
 printf("\nThank you for visiting our Cafe!\nHave a nice day!");
 break;
 case 1:
 printf("\nYour order is placed of Rs.100\nAny other order please?Or press 0 for bill");
 i=100;
 break;
 case 2:
 printf("\nYour order is placed of Rs.70\nAny other order please?Or press 0 for bill");
 i=70;
 break;
 case 3:
 printf("\nYour order is placed of Rs.90\nAny other order please?Or press 0 for bill");
 i=90;
 break;
 case 4:
 printf("\nYour order is placed of Rs.150\nAny other order please?Or press 0 for bill");
 i=150;
 break;
 default :
 printf("Sorry! this is not in Menu\n Please choose from 1 to 4 for ordering or press 0 for bill");
 i=0;
 }
 if(n!=0)
 sum=sum+i;
 }
}
