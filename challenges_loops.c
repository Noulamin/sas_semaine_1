#include <stdio.h>
#include <stdlib.h>


// challenge_1 : table de multiplication
int main()
{

    int number;
    int v = 0;
    printf("enter number : \n");
    scanf("%d",&number);
    
    for(int i = 1;i <= number;i++){
        if((number % i) == 0){
            v++;
        }
        
    }

    if(v == 2){
        printf("%d est premier. \n",number);
    }
    else{
        printf("%d  n'est pas premier. \n",number);
    }
}

// challenge_2 : pyramide d'étoile
int main()
{

    int number;
    int j,i;
    int v = 0;
    printf("enter number : \n");
    scanf("%d",&number);
   
        for(i = 1;i <= number;i++){
            for(j = number - i; j >= 1;j--){
                
                    printf(" ");
            }

            for(j = 1;j <= i+i-1; j++){
           
            printf("*");
        }
            printf("\n");
    }
}

// challenge_3 : 
int main()
{

    int number;
    int v = 0;
    printf("enter number : \n");
    scanf("%d",&number);
    
    for(int i = 1;i <= number;i++){
        if((number % i) == 0){
            v++;
        }
    }

    if(v == 2){
        printf("%d est premier. \n",number);
    }
    else{
        printf("%d  n'est pas premier. \n",number);
    }
}

// challenge_4 : 
int main(){

    int max = 0;
    int som = 0;
    int a = 1;
    

    printf("enter number (must be under 100 and more than 0) : \n");


   while (a != 0)
   {
        do{
            scanf("%d",&a);
            if(a > 100  || a < 0){
                printf("sorry but this number is more then 100 or less than 0. \n");
            }
            if(a > max && a < 100){
            max = a;
            } 


        }while (a > 100  || a < 0);
        som += a;
   }

    printf("la somme est : %d \n",som);
    printf("max est : %d \n",max);
}


