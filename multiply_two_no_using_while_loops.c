#include <stdio.h>
int main()
{
    int a ,b,mul=0;
    printf("enter two no\n");
    scanf("%d %d",&a,&b);
    while(b>0){
        mul=mul+a;
        b--;
        
    }
    printf("%d",mul);

    return 0;
}