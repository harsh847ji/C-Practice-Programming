#include <stdio.h>
int main()
{
   int a=0;
    k: a++;
    printf("%d\n",a);
    if(a!=10){
        goto k;
    }
    return 0;
}