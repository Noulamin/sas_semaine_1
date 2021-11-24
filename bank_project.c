#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

FILE* file;

struct XD
{
    char first_name[15];
    char last_name[15];
    char cin[15];
    char amount[15];
}account;

void loging();
void check_entered_for_login();
void check_entered_for_menu();
void menu();
void create_account();
void check_entered_for_create();
void create_multiple_account();
int  check_entered_for_c_m_a();
void save_data();
void save_multiple_accounts();
void withdrawal();
void get_accounts_info();
int check_user_if_exist();
int index_of_line();
void get_all_users_info();
void Deposit();
void show_infos();
void check_entered_show_infos();
void ascending_order(int min);
void ascending_order1(int min);
void affichage_plus();
void affichage_plus1();
void tris_bulle1();
void tris_bulle2();
void search_by_cin();
void search_checker();

char first[20];
char last[20];
char cin[20];
char amount[20];
char all_users[100][200];
char all_users_amount[100][200];
char check_names[100][200];

int n_o_acccounts;
bool is_finished = false;
bool is_login_in = false;
char _cin[12];
char password[15];
char something[30];
char word[20];
int _line;
int users_count = 0;
bool user_exist = false;
char* where;
int number_of_accounts;
int numberr[50];
int numberr__[50];
int num_temp[50];
int counter_ = 0;
int number_greater = 0;

bool while_1 = true;
int choised = 1;
char text_entered[30];
bool can_search = false;
char char_temp[100];

int main(){
    
    printf("\e[1;1H\e[2J");
    system("cls");
    
    for (int i = 1; i <= 100; i++)
    {
        strcpy(all_users[i],"");
    }
    

    if (is_login_in == false)
    {

        strcpy(first,"");
        strcpy(text_entered,"");
        strcpy(_cin, "");
        strcpy(password, "");
        loging();
    }
    else
    {
        
    }
}

void loging(){
        
        char login_temp[30];
        char password_temp[30];
        printf("\n");
        printf("                 bank  name \n");
        printf(" ________________ login in ________________ \n");
        printf("\n");

            if (choised == 1)
            { 
                strcpy(login_temp,text_entered);
                strcpy(_cin,text_entered);
                
            }else{
                if (!strcmp(login_temp,"________"))
                {
                    strcpy(_cin,login_temp);
                }
                
            }
            if (choised == 2)
            {
                strcpy(password_temp,text_entered);
                strcpy(password,text_entered);
            }else
            {
                if (!strcmp(password_temp,"________"))
                {
                    strcpy(password,password_temp);
                }
            }

        printf("1. enter CIN      : %s \n",_cin);
        printf("2. enter password : %s \n",password);
        printf("\n");
        printf("3.               =  login  =\n");
       
        printf("\n");
       // printf("4. dont have an account ? \n");
        printf("0. exit \n");

        
        printf(" __________________________________________ \n");
        printf("\n");
        printf("%d /: ",choised);
        scanf("%s",&something);
        check_entered_for_login();
}

void check_entered_for_login(){
    if(!strcmp(something,"1")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 1;
        printf("\e[1;1H\e[2J");
        system("cls");
        loging();
    }
    if(!strcmp(something,"2")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        
        choised = 2;
        printf("\e[1;1H\e[2J");
        system("cls");
        loging();
    }
    if(!strcmp(something,"3")){
        printf("\e[1;1H\e[2J");
        system("cls");
        menu();
    }
    if(!strcmp(something,"0")){
        printf("\e[1;1H\e[2J");
        system("cls");
        system("exit");
    }
    else{
        strcpy(text_entered,something);
        printf("\e[1;1H\e[2J");
        system("cls");
        loging();
    }
}

void menu(){
    
    printf("\n");
    printf("               bank  name \n");
    printf(" ________________ menu ________________ \n");
    printf("\n");
    printf("1. create bank account.\n");
    printf("2. create multiple bank accounts.\n");
    printf("3. withdrawal.\n");
    printf("4. Deposit.\n");
    printf("5. show accounts infos.\n");
    printf("6. Fidelisation.\n");
    printf("0. exit.\n");
    printf(" ______________________________________ \n");
    printf("\n");
    printf("%d /: ",choised);
    scanf("%s",&something);

    if(!strcmp(something,"1")){
        choised = 1;
        printf("\e[1;1H\e[2J");
        system("cls");
        strcpy(text_entered,"");
        create_account();
    }
    if(!strcmp(something,"2")){
        choised = 2;
        printf("\e[1;1H\e[2J");
        system("cls");
        create_multiple_account();
    }
    if(!strcmp(something,"3")){
        printf("\e[1;1H\e[2J");
        system("cls");
        withdrawal();
    }
    if(!strcmp(something,"4")){
        printf("\e[1;1H\e[2J");
        system("cls");
        Deposit();
    }
    if(!strcmp(something,"5")){
        printf("\e[1;1H\e[2J");
        system("cls");
        show_infos();
    }
    if(!strcmp(something,"0")){
        printf("\e[1;1H\e[2J");
        system("cls");
        system("exit");
       // menu();
    }
}

void create_account(){
    printf("\n");
    printf("                    bank name \n");
    printf(" ________________ create account ________________ \n");
    printf("\n");

    char first_temp[20];
    char last_temp[20];
    char cin_temp_[20];
    char amount_temp[20];

            if (choised == 1)
            { 
                strcpy(first_temp,text_entered);
                strcpy(first,text_entered);
                
            }else{
                if (!strcmp(first_temp,"________"))
                {
                    strcpy(first,first_temp);
                }
                
            }
            if (choised == 2)
            {
                strcpy(last_temp,text_entered);
                strcpy(last,text_entered);
            }else
            {
                if (!strcmp(last_temp,"________"))
                {
                    strcpy(last,last_temp);
                }
            }
            if (choised == 3)
            {
                strcpy(cin_temp_,text_entered);
                strcpy(cin,text_entered);
            }else
            {
                if (!strcmp(cin_temp_,"________"))
                {
                    strcpy(cin,cin_temp_);
                }
            }
            if (choised == 4)
            {
                strcpy(amount_temp,text_entered);
                strcpy(amount,text_entered);
            }else
            {
                if (!strcmp(amount_temp,"________"))
                {
                    strcpy(amount,amount_temp);
                }
            }

    printf("1. enter first name : %s \n",first);
    printf("2. enter last name  : %s \n",last);
    printf("3. enter cin        : %s \n",cin);
    printf("4. enter amount     : %s \n \n",amount);
    printf("5. create account. \n");
    printf("0. back. \n");

    printf(" ________________________________________________ \n");
    printf("\n");
    printf("%d /: ",choised);
    scanf("%s",&something);
    check_entered_for_create();
}

void check_entered_for_create()
{
    if(!strcmp(something,"1")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 1;
        printf("\e[1;1H\e[2J");
        system("cls");
        create_account();
    }
    if(!strcmp(something,"2")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        
        choised = 2;
        printf("\e[1;1H\e[2J");
        system("cls");
        create_account();
    }
    if(!strcmp(something,"3")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 3;
        printf("\e[1;1H\e[2J");
        system("cls");
        create_account();
    }
    if(!strcmp(something,"4")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 4;
        printf("\e[1;1H\e[2J");
        system("cls");
        create_account();
    }
    if(!strcmp(something,"5")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        save_data();
        create_account();
    }
    if(!strcmp(something,"0")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        menu();
    }
    else{
        strcpy(text_entered,something);
        printf("\e[1;1H\e[2J");
        system("cls");
        create_account();
    }
    
}

void save_data(){

    if (!strcmp(first,"") || !strcmp(last,"") || 
        !strcmp(cin,"") || !strcmp(amount,""))
    {
        printf("all fields required.");
        return create_account();
    }
    
    if(
        !fopen("data.txt", "r")){
      //  printf("not found, create new database ...\n");
        fopen("data.txt", "w");
        file = fopen("data.txt", "a");
    }else{
       // printf("already created. \n");
        file = fopen("data.txt", "a");
    }
    fprintf(file,"%s %s %s %s\n",cin,first,last,amount);
    fclose(file);
    printf("account created successfully.");
}

void create_multiple_account()
{
   // bool finished = is_finished;
    printf("\n");
    printf("                    bank  name \n");
    printf(" ____________ create multiple account ____________ \n");
    printf("\n");
    if (is_finished != true)
    {
        printf("enter number of accounts you want to create :\n");
    }
    else
    {
        printf("all %d accounts have been created successfully. \n\n",n_o_acccounts);
        n_o_acccounts = 0;
        is_finished = false;
    }

    printf("\n\n\n\n\n");
    printf("0. back.\n");
    printf(" _________________________________________________ \n");
    printf("\n");
    printf(" /: ");
    scanf("%s",&something);
    check_entered_for_c_m_a();
}
int check_entered_for_c_m_a(){
    if(!strcmp(something,"0")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        menu();
    }
    number_of_accounts = atoi(something);
    if (!number_of_accounts <= 0)
    {
        n_o_acccounts = number_of_accounts;
        char temp_first[15];
        char temp_last[15];
        char temp_cin[15];
        char temp_amount[15];
        for (int i = 1; i <= number_of_accounts; i++)
        {
            printf("\e[1;1H\e[2J");
            system("cls");
            printf("\n");
            printf("                    bank  name \n");
            printf(" ____________ create multiple account ____________ \n");
            printf("\n");

            printf("enter first name of account %d  : ",i);
            scanf("%s",temp_first);
            printf("enter last name of account %d   : ",i);
            scanf("%s",temp_last);
            printf("enter cin of account %d         : ",i);
            scanf("%s",temp_cin);
            printf("enter amount of account %d      : ",i);
            scanf("%s",temp_amount);

            save_multiple_accounts(temp_first,temp_last,temp_cin,temp_amount);
        }

    }
    printf("\e[1;1H\e[2J");
    system("cls");
    is_finished = true;
    create_multiple_account();
}

void save_multiple_accounts(char* temp_first_,char* temp_last_,
                            char* temp_cin_,char* temp_amount_)
{
    if(
        !fopen("data.txt", "r")){
       //  printf("not found, create new database ...\n");
        fopen("data.txt", "w");
        file = fopen("data.txt", "a");
    }else{
       // printf("already created. \n");
        file = fopen("data.txt", "a");
    }
    fprintf(file,"%s %s %s %s\n",temp_cin_,temp_first_,temp_last_,temp_amount_);
    fclose(file);
}

void withdrawal()
{
    printf("\n");
    printf("                 bank  name \n");
    printf(" _______________ withdrawal _______________ \n");
    printf("\n");
    printf("enter cin of account you want to withdrawal to : \n");
    if (user_exist == true)
    {
        printf("\n");
        printf("user first name : %s \n",account.first_name);
        printf("user last name : %s \n",account.last_name);
        printf("user cin : %s \n",account.cin);
        printf("user amount : %s DH \n",account.amount);
        printf("\n");
        printf("enter how much you are going to withdrawal : ");
        printf("\n");
    }
    else
    {
        printf("\n\n\n\n\n");
    }

    printf(" __________________________________________ \n");
    printf("\n");
    printf(" /: ");
    scanf("%s",&something);
    printf("\e[1;1H\e[2J");
    system("cls");
    get_accounts_info(something);
}

void Deposit()
{
    printf("\n");
    printf("                bank   name \n");
    printf(" ________________ deposit _________________ \n");
    printf("\n");
    printf("enter cin of account you want to deposit to : \n");
    if (user_exist == true)
    {
        printf("\n");
        printf("user first name : %s \n",account.first_name);
        printf("user last name : %s \n",account.last_name);
        printf("user cin : %s \n",account.cin);
        printf("user amount : %s DH \n\n",account.amount);
        printf("enter how much you are going to deposit : ");
        printf("\n");
    }
    else
    {
        printf("\n\n\n\n\n");
    }

    printf(" __________________________________________ \n");
    printf("\n");
    printf(" /: ");
    scanf("%s",&something);
    printf("\e[1;1H\e[2J");
    system("cls");
    where = "deposit";
    get_accounts_info(something);
}

void get_accounts_info(char* cin)
{
    if (user_exist == true)
    {
        if(file)
        {
            fclose(file);
        }

        fopen("data.txt","w");
        
        int one = atoi(account.amount);
        int two = atoi(something);

        int final_amount; 

        if (where == "deposit")
        {
            final_amount = one + two;
        }
        else
        if (where == "search")
        {
            /* code */
        }
        else
        {
            final_amount = one - two;
        }
        

        for (int i = 1; i <= sizeof(all_users); i++)
        {
            char* hmm = strstr(all_users[i],account.cin);
            if(hmm)
            {
                char text[100];
                char str[20];
                strcpy(text,account.cin);
                strcat(text," ");
                strcat(text,account.first_name);
                strcat(text," ");
                strcat(text,account.last_name);
                strcat(text," ");
                sprintf(str,"%d", final_amount);
                strcat(text,str);
                strcpy(all_users[i],text);
                strcpy(char_temp,text);

                break;
            }
        }

        if(!fopen("data.txt", "r")){
            //  printf("not found, create new database ...\n");
            fopen("data.txt", "w");
            file = fopen("data.txt", "a");
        }else{
            // printf("already created. \n");
            file = fopen("data.txt", "a");
        }


        for (int i = 1; i <= users_count; i++)
        {
          //  printf("%s \n",all_users[i]);
                if (!strcmp(all_users[i],char_temp))
                {
                    fprintf(file,"%s\n",all_users[i]);
                }
                else
                {
                    fprintf(file,"%s",all_users[i]);
                }
        }

        fclose(file);
        printf("amount successfully updated.");
        
        user_exist = false;
        if (where == "deposit")
        {
            Deposit();
        }
        else
        if (where == "search")
        {
            search_by_cin();
        }
        else
        {
            withdrawal();
        }

    }
    else
    {
        check_user_if_exist(cin);
        if (user_exist == true)
        {
            printf("\e[1;1H\e[2J");
            system("cls");
            printf("user founded.");
            //  printf("is there haha %d",_line);
            get_all_users_info();
            char string[100];
            strcpy(string,all_users[_line]);
            char * token = strtok(string, " ");
            int i = 1;
            while( token != NULL) 
            {
            //   printf( " %s\n", token );
                switch (i)
                {
                case 1:
                strcpy(account.cin,token);
                    i++;
                break;
                case 2:
                strcpy(account.first_name,token);
                    i++;
                break;
                case 3:
                strcpy(account.last_name,token);
                    i++;
                break;
                case 4:
                strcpy(account.amount,token);
                    i++;
                break;
            
                default:
                break;
            }
                token = strtok(NULL, " ");
            }
        }
        else
        {
            printf("\e[1;1H\e[2J");
            system("cls");
            printf("user not found.");
        }
        if (where == "deposit")
        {
            Deposit();
        }
        else
        if (where == "search")
        {
            search_by_cin();
        }
        else
        {
            withdrawal();
        }
        
    }
    
    
}

int check_user_if_exist(char* cin)
{
    strcpy(word,cin);

    int line, col;

    if(!fopen("data.txt", "r")){
      //  printf("yalah ghaytgad \n");
        fopen("data.txt", "w");
        file = fopen("data.txt", "a");
    }else{
      //  printf("dija kayn \n");
        file = fopen("data.txt", "a");
        file = fopen("data.txt", "r");
    }

    index_of_line(file, word, &line, &col);

    if (line != -1)
    {
       // printf("'%s' found at line: %d\n", word, line + 1);
       _line = line + 1;
       user_exist = true;
    }   
    else
    {
       // printf("'%s' does not exists.", word);
        _line = 0;
       user_exist = false;
    }
    
        
    fclose(file);
    return 0;
}

int index_of_line(FILE *file, const char *word, int *line,int *col)
{
    char str[200];
    char *pos;

    *line = -1;
    *col  = -1;

    while ((fgets(str, 200, file)) != NULL)
    {
        *line += 1;

        // Find first occurrence of word in str
        pos = strstr(str, word);

        if (pos != NULL)
        {
            // First index of word in str is 
            // Memory address of pos - memory
            // address of str.
            *col = (pos - str);
            break;
        }
    }
    // If word is not found then set line to -1
    if (*col == -1)
        *line = -1;

    return *col;
}

void get_all_users_info()
{

  char *line_text = NULL;
  size_t line_buf_size = 0;
  int line_count = 0;
  ssize_t line_size;

    if(!fopen("data.txt", "r")){
      //  printf("yalah ghaytgad \n");
        fopen("data.txt", "w");
        file = fopen("data.txt", "a");
    }else{
      //  printf("dija kayn \n");
        file = fopen("data.txt", "a");
        file = fopen("data.txt", "r");
    }

    line_size = getline(&line_text, &line_buf_size, file);

    while (line_size >= 0)
    {
        line_count++;

    //  printf("line[%d]: chars=%d, buf size=%06zu, contents: %s", line_count,
    //      line_size, line_buf_size, line_buf);

            strcpy(all_users[line_count],line_text);
            users_count ++;


        line_size = getline(&line_text, &line_buf_size, file);
    }

    fclose(file);

}

void show_infos()
{
    printf("\e[1;1H\e[2J");
    system("cls");
    printf("\n");
    printf("               bank  name \n");
    printf(" ________________ show ________________ \n");
    printf("\n");
    printf("1. show in ascending order.\n");
    printf("2. show in descending order.\n");
    printf("3. show in ascending order. (greater than number).\n");
    printf("4. show in descending order. (greater than number).\n");
    printf("5. search by cin.\n");
    printf("0. back.\n");
    printf(" ______________________________________ \n");
    printf("\n");
    printf(" /: ",choised);
    scanf("%s",&something);
    check_entered_show_infos();
}

void check_entered_show_infos()
{
    if(!strcmp(something,"1")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 1;
        printf("\e[1;1H\e[2J");
        system("cls");
        ascending_order(0);
    }
    if(!strcmp(something,"2")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        
        choised = 2;
        printf("\e[1;1H\e[2J");
        system("cls");
        ascending_order1(0);
    }
    if(!strcmp(something,"3")){

        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        int minimum;
        printf("minimum : ");
        scanf("%d", &minimum);

        choised = 3;
        printf("\e[1;1H\e[2J");
        system("cls");
        ascending_order(minimum);
    }
    if(!strcmp(something,"4")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        int minimum;
        printf("minimum : ");
        scanf("%d", &minimum);

        choised = 4;
        printf("\e[1;1H\e[2J");
        system("cls");
        ascending_order1(minimum);
    }
    if(!strcmp(something,"5")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        search_by_cin();
    }
    if(!strcmp(something,"0")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        menu();
    }
}

void ascending_order(int min)
{
    get_all_users_info();
    printf("\n");
    printf("               bank  name \n");
    printf(" _______ show in ascending order _______ \n");
    printf("\n");

    int number[50];
    int i, j, a, n;
    n = users_count;

   printf("number of accounts : %d \n\n",users_count);

   printf("before : \n\n");
    
    for (i = 1; i <= users_count; ++i)
    {
        char *p = strrchr(all_users[i], ' ');
        if (p && *(p + 1))
        {
           // printf(" %d : %s\n", i,p + 1 );
            strcpy(all_users_amount[i],p + 1);
            numberr[i] = atoi(p + 1);
            
            printf(" %s \n",all_users[i]); 
        }
           // number[i] = atoi(account.amount);
    }
    affichage_plus(min);
    


    printf("0. back.\n");
    printf(" _______________________________________ \n");
    printf("\n");
    printf(" /: ",choised);
    scanf("%s",&something);
    if(!strcmp(something,"0")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        users_count = 0;
        show_infos();
       // create_account();
    }
    
    show_infos();
}

void affichage_plus(int min)
{
    int T[60],i;

    for(i=1;i<= users_count;i++){
          T[i] = numberr[i];
        }
    printf("\n");

    printf("after ascending : \n\n");

    tris_bulle1(users_count,T);
    for(i=1;i<=users_count;i++){
    
        num_temp[i] = T[i];
      //  printf("%d : %d ",i,num_temp[i]);
        char test[100];
            itoa(num_temp[i],test,10);
        for (int k = 1; k <= users_count; k++)
        {
            
            char * ret = strstr(all_users[k],test);
                if (ret)
                {  
                    if (num_temp[i] >= min)
                    {
                        printf("%s \n" , all_users[k]);
                    }
                    
                    break;
                }
           // printf("%s int : %d __________________________________ \n", test,num_temp[i] );
            
        }
        counter_ ++;
        
    }
    printf("\n");
}

void affichage_plus1(int min)
{
    int T[60],i;

    for(i=1;i<= users_count;i++){
          T[i] = numberr[i];
        }
    printf("\n");

    printf("after descending : \n\n");

    tris_bulle2(users_count,T);
    for(i=1;i<=users_count;i++){
    
        num_temp[i] = T[i];
      //  printf("%d : %d ",i,num_temp[i]);
        char test[100];
            itoa(num_temp[i],test,10);
        for (int k = 1; k <= users_count; k++)
        {
            
            char * ret = strstr(all_users[k],test);
                if (ret)
                {  
                    if (num_temp[i] >= min)
                    {
                        printf(" %s \n", all_users[k]);
                    }
                    break;
                }
           // printf("%s int : %d __________________________________ \n", test,num_temp[i] );
            
        }
        counter_ ++;
        
    }
    printf("\n");
}

void tris_bulle1(int a,int T[])
{
  int i,e,c;
  do{
    c=0;
    for(i=1;i<=a-1;i++){
        if(T[i]>T[i+1]){
            e=T[i];
            T[i]=T[i+1];
            T[i+1]=e;
            c++;}
            }
    }while(c>0);
    return;
}


void tris_bulle2(int a,int T[])
{
  int i,e,c;
  do{
    c=0;
    for(i=1;i<=a-1;i++){
        if(T[i]<T[i+1]){
            e=T[i];
            T[i]=T[i+1];
            T[i+1]=e;
            c++;}
            }
    }while(c>0);
    return;
}


void ascending_order1(int min)
{
    get_all_users_info();
    printf("\n");
    printf("               bank  name \n");
    printf(" _______ show in descending order _______ \n\n");
    

    int number__[50];
    int i, j, a, n;
    n = users_count;

   printf("number of accounts : %d \n\n",users_count);

   printf("before : \n\n");
    
    for (i = 1; i <= users_count; ++i)
    {
        char *p = strrchr(all_users[i], ' ');
        if (p && *(p + 1))
        {
           // printf(" %d : %s\n", i,p + 1 );
            strcpy(all_users_amount[i],p + 1);
            numberr[i] = atoi(p + 1);
            
            printf(" %s \n",all_users[i]); 
        }
           // number[i] = atoi(account.amount);
    }
    affichage_plus1(min);


    printf("0. back.\n");
    printf(" ________________________________________ \n");
    
    printf("\n");
    printf(" /: ",choised);
    scanf("%s",&something);
    if(!strcmp(something,"0")){
        if (strcmp(text_entered,""))
        {
            strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        users_count = 0;
        show_infos();
       // create_account();
    }
    show_infos();
}


void search_by_cin()
{
    get_all_users_info();
    printf("\n");
    printf("          bank   name \n");
    printf(" _______ search_by_cin _______ \n\n");

    printf("enter cin of account you want to search : \n");
   // scanf("")
   if (user_exist == true)
    {
        printf("\n");
        printf("user first name : %s \n",account.first_name);
        printf("user last name : %s \n",account.last_name);
        printf("user cin : %s \n",account.cin);
        printf("user amount : %s DH \n",account.amount);
        printf("\n");
        printf("\n");
        user_exist = false;
    }
    else
    {
        printf("\n\n\n\n\n");
    }


    printf("0. back.\n");
    printf(" _____________________________ \n");
    
    printf("\n");
    printf(" /: ");
    scanf("%s",&something);
    
    search_checker();
}

void search_checker()
{
    if(!strcmp(something,"0")){
        if (strcmp(text_entered,""))
        {
            strcpy(text_entered,"");
        }
        printf("\e[1;1H\e[2J");
        system("cls");
        users_count = 0;
        show_infos();
    }
    else
    {
        where = "search";
        get_accounts_info(something);
    }
}