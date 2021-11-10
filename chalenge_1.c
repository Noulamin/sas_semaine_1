#include <stdio.h>

int main()
{
   char first_name[20];
   char last_name[20];
   char sex[20];
   int age;
   int phone_number;
   
   //get infos
   
   printf("\n");
   printf("get infos : ");
   printf("\n");

   printf("enter your first name : ");
   scanf("%s",&first_name);
   printf("enter your last name : ");
   scanf("%s",&last_name);
   printf("enter your age : ");
   scanf("%d",&age);
   printf("enter your sex : ");
   scanf("%s",&sex);
   printf("enter your phone number : ");
   scanf("%d",&phone_number);

   printf("\n");
   printf("get infos : ");
   printf("\n");
   
   //show infos

   printf("your first name is %s. \n",first_name);
   printf("your last name is %s. \n",last_name);
   printf("your age is %d years old.\n",age);
   printf("your sex is %s. \n",sex);
   printf("your phone number is +212%d. \n",phone_number);

   printf("\n");
   
}