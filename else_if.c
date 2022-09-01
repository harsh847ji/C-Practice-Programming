#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);

    if (marks>89&&marks<101){
        printf("A");
    }
    else if (marks>79&&marks<90){
        printf("B");
    }
    else if (marks>69&&marks<80){
        printf("c");
    }
    else if(marks>59&&marks<70){
        printf("D");
    }
    else if(marks>49&&marks<60){
        printf("E");
    }
    else if(marks>39&&marks<50){
        printf("E");
    }
    else {
        printf("fail");
    }
    return 0;
}