#include <stdio.h>
int main()
{
    for(int i = 0 ; i<11 ; i++){
        if(i==5){
            break;
        }
        else {
            printf("%d\n",i);
        }
    }
    return 0;
}