#include <stdio.h>

// chalenge_1 : Affichage Température -----------------------------
int main(){
    
    float temperature;
    float c;

    printf("\n");
    printf("enter temperature (Fahrenheit) : ");
    scanf("%f",&temperature);
    c = (temperature-32)/1.8;
    
    if(c < 14){
        printf("temperature is %.2f and its too cold. \n",c);
    }else
    if((c >= 15) && (c <= 23)){
        printf("temperature is %.2f and its cold. \n",c);
    }else
    if((c >= 24) && (c <= 47)){
        printf("temperature is %.2f and its hot. \n",c);
    }else
    if(c > 48){
        printf("temperature is %.2f and its too hot. \n",c);
    }
    printf("\n");
}

// chalenge_2 : Paire ou Impaire
int main(){
    
    int number;

    printf("\n");
    printf("enter number : ");
    scanf("%d",&number);
    
    if((number % 2) == 0){
        printf("the number %d is pair. \n",number);
    }else{
        printf("the number %d is impaire. \n",number);
    }
    printf("\n");
}

// chalenge_3 : Permutation Sous Conditions
int main()
{
    int a;
    int b;
    int c;

    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);

    if((a != b) || a < b){
        c = a;
        a = b;
        b = c;

        printf("a : %d \n",a);
        printf("b : %d \n",b);
    }
    else
    {
        printf("the number are the same value.");
    }
	
}

// chalenge_4 : 
int main(){

    int a;
    int b;
    int a_b;

    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);

    if(a == b){
        a_b = (a + b) * 3;
        printf("result : %d",a_b);
    }
    else
    {
        a_b = a + b;
        printf("result : %d",a_b);
    }
}

// chalenge_11 : wa9ila 
int main()
{
    int h1,m1,s1;
    int h2,m2,s2;

    int i = 1;

    printf("enter instant 1 : \n");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("enter instant 2 : \n");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    if(h1 > h2){
        i = 2;
    }

    if(h1==h2 && m1>m2){
        i = 2;
    }

    if(h1==h2 && m1==m2 && s1>s2){
        i = 2;
    }

    if(h1==h2 && m1==m2 && s1==s2){
        i = 0;
    }

    switch (i)
    {
    case 0:
        printf("les deux instants sont egaux");
        break;
    case 1:
        printf("la 1er instant vient avant la 2eme");
        break;
    case 2:
        printf("la 2eme instant vient avant la 1er");
        
    }

system ("pause");
return 0;
}

// chalenge_5 : 
