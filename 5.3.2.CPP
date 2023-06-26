//write a program to create a menu-driven program for Telecom call service conservation using nested switch case.

#include<stdio.h>
#include<conio.h>

void main(){

int choice,english,hindi,gujarati;

clrscr();

printf("press 1 for english...\n");
printf("press 2 for hindi...\n");
printf("press 3 for gujarati...\n");
printf("enter your language :");
scanf("%d",&choice);

switch(choice){
case 1:
   printf("press 1 for internet recharge..\n");
   printf("press 2 for top-up recharge..\n");
   printf("press 3 for special recharge..\n ");
   printf("enter your choice :");
   scanf("%d",english);
   switch(english){
   case 1:
   printf("you have sucessfully done internet recharge..\n");
   break;
   case 2:
   printf("you have sucessfully done top-up recharge..\n");
   break;
   case 3:
   printf("you have sucessfully done special recharge..\n");
   break;
   default:
   printf("no plan available\n");
   break;
}
case 2:
   printf("internet recharge ke liye 1 dabaiye..\n");
   printf("top-up recharge ke liye 2 dabaiye..\n");
   printf("special recharge ke liye 3 dabaiye..\n");
   printf("enter your choice :");
   scanf("%d",&hindi);
   switch(hindi){
   case 1:
   printf("Aapne safaltapurvak internet recharge kar liya he..\n");
   break;
   case 2:
   printf("Aapne safaltapurvak internet recharge kar liya he..\n");
   break;
   case 3:
   printf("Aapne safaltapurvak internet recharge kar liya he..\n");
   break;
   default:
   printf("koi plan available nahi hai\n");
   break;
}
case 3:
   printf("internet recharge mate 1 dabavo..\n");
   printf("top-up recharge mate 2 dabavo..\n");
   printf("special recharge mate 3 dabavo..\n");
   printf("enter your choice :");
   scanf("%d",&gujarati);
   switch(gujarati){
   case 1:
   printf("tame safaltapurvak special recharge karyu che..\n");
   break;
   case 2:
   printf("tame safaltapurval special recharge karyu che..\n");
   break;
   case 3:
   printf("tame safaltapurvak special recharge karyu che..\n");
   default:
   printf("koi plan available nathi\n");
   break;
   }
}

getch();
}