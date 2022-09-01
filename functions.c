#include <stdio.h>
int sum(int a,int b);//declaration or prototype

int main()
{
    int a,b;
    printf("enter two no to add\n");
    scanf("%d%d",&a,&b);
    printf("the sum is %d\n",sum(a,b));//call
    
    return 0;
}
//defination
int sum(int a,int b){
    return a+b;
}