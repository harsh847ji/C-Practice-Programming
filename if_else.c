#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you can drive a car\n");
    }
    else{
        printf("you can not drive a car\n");
    }
    return 0;
}