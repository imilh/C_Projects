#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    char ch;
    char pass[20];
    int i =0;
    char saved_pass[20];
    start:
    printf("Enter your password : ");
    while(1){
        ch = getch();
        if(ch == 13){
            pass[i] = '\0';
            break;
        }else{
            pass[i++] = ch;
            printf("*");
        }
    }
    printf("You entered : %s\n", pass);
    FILE * ptr;
    ptr = fopen("password.txt","r");

    fscanf(ptr, "%s", saved_pass);
    int l = strcmp(pass, saved_pass);
    if(l == 0){
        printf("LOGIN SUCCESSFULLy\n");
    }else{
        printf("INCORRECT PASSWORD\n");
        goto start;
    }

    return 0;
}