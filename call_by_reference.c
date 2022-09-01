#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main()
{
    int a=4,b=9;
    printf("a=%d and b=%d\n",a,b);
    printf("after swap\n");
    swap(&a,&b);
    printf("a=%d and b=%d\n",a,b);
    
    
    return 0;
}