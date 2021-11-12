#include <stdio.h>

// chalenge_1 : Affichage Informations -----------------------------
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


// chalenge_2 : Conversion du °C au °F ------------------------------------
int main()
{
   float temperature;
   float f;
   

   printf("\n");

   printf("enter temperature of Fahrenheit : ");
   scanf("%f",&temperature);
   printf("processing ... \n");
   f = (temperature * 1.8) + 32;
   printf("temperature C is : %.2f \n",f);

   printf("\n");
}

// chalenge_3 : Conversion du Mile au Km --------------------------------
int main()
{
    
   float distance;
   float mile;
   float km;
   

   printf("\n");

   printf("enter distance on m : \n");
   scanf("%f",&distance);
   km = (distance / 1000);
   mile = km * 1.609;
   printf("distance on mile is : %.2f mile. \n",mile);
   printf("\n");
}

// chalenge_4 : Conversion du Mile au Km --------------------------------
int main()
{
    
   float mile;
   float m;
   float km;
   

   printf("\n");

   printf("enter distance on mile : \n");
   scanf("%f",&mile);
   km = mile/1.609;
   m = km * 1000;
   printf("distance on m is : %.2f \n",m);

   printf("\n");
}

// chalenge_6 : Conversion du Fahrenheit au Celsius --------------------
int main()
{
   float temperature;
   float c;
   
   printf("\n");

   printf("enter temperature of Fahrenheit : ");
   scanf("%f",&temperature);
   printf("processing ... \n");
   c = (temperature - 32)/1.8;
   printf("temperature C is : %.2f \n",c);

   printf("\n");
}

// chalenge_7 : Calcule et affichage résultat en format décimal -----------------
int main()
{
    int a;
    int b;

    float plus;
    float subtract;
    float multiplication;
    float division;
    float rest;

    printf("\n");
    printf("enter value a : ");
    scanf("%d",&a);
    printf("enter value b : ");
    scanf("%d",&b);

    plus = a + b;
    subtract = a - b;
    multiplication = a * b;
    division = a / b;
    rest = a % b;

    printf("a + b : %.2f \n",plus);
    printf("a - b : %.2f \n",subtract);
    printf("a * b : %.2f \n",multiplication);
    printf("a / b : %.2f \n",division);
    printf("a %% b : %.2f \n",rest);

    printf("\n");
}

// chalenge_8 : Moyenne et somme de 4 nombres -----------------------------
int main()
{
    float a;
    float b;
    float c;
    float d;

    float somme;
    

    printf("\n");
    printf("enter value a : ");
    scanf("%f",&a);
    printf("enter value b : ");
    scanf("%f",&b);
    printf("enter value c : ");
    scanf("%f",&c);
    printf("enter value d : ");
    scanf("%f",&d);

    somme = (a + b + c + d)/4;
    

    printf("average is : %.2f \n",somme);

    printf("\n");
}

// chalenge_9 : Circonférence d'un cercle -------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    float ab;

    printf("\n");
    printf("enter coordonne x of a : \t");
    scanf("%d",&x1);
    printf("enter coordonne y of a : \t");
    scanf("%d",&y1);
    printf("enter coordonne x of b : \t");
    scanf("%d",&x2);
    printf("enter coordonne y of b : \t");
    scanf("%d",&y2);
    ab = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("AB = %.2f\n",ab);

    printf("\n");
}

// chalenge_10 : Circonférence d'un cercle ------------------------
int main()
{
    const float pi = 3.14;
    int r;
    float c;

    printf("enter the radius : ");
    scanf("%d",&r);
    c = 2 * pi * r;
    printf("the circumference is : %.2f \n",c);
}

// chalenge_11 :  Circonférence d'un rectangle --------------------
int main()
{
    int height;
    int width;

    int circumference;
    
    printf(" \n");
    printf("enter width of rectangle : ");
    scanf("%d", &width);
    printf("enter height of rectangle : ");
    scanf("%d", &height);

    circumference = 2 * (width + height);

    printf("circumference of rectangle is : %d \n",circumference);
    printf("\n");
}

// chalenge_12 : Nombre entier à trois chiffres en ordre inverse --------------
int main()
{
    int number = 0;
    int n;
    
    printf(" \n");
    printf("enter number a : ");
    
    scanf("%d", &n);

      number = (n%10)*100;
      n=n/10;
      number = number + (n%10)*10;
      n = n/10;
      number=number+n;

    printf("the opposite of is : %d \n", number);
    printf("\n");
}

// chalenge_13 : Affichage de la valeur octale et hexadécimale équivalente
int main()
{
   int n;

   printf("\n");
   printf("enter number : ");
   scanf("%d",&n);
   printf("number %d on octale is : %o. \n",n,n);
   printf("number %d on hexadecimele is : %x. \n",n,n);

   printf("\n");
}
