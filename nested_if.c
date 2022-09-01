#include <stdio.h>
int main()
{
    int age;
    char vip;
    printf("enter your age\n");
    scanf("%d",&age);
    
    if(age>=18){
        printf("you can drive a car\n");
    }
    else{
        printf("enter y if you are a VIP else n for no\n");
        fflush(stdin);
        scanf("%c",&vip);
            if(vip=='y'||vip=='Y'){
                printf("you can drive a car\n");
            }
            else{
                printf("you can not drive a car\n"); 
            }
    }
    return 0;
}