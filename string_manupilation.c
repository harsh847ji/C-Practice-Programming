#include <stdio.h>
#include <string.h>
int main()
{
    char a[10]="harsh ";
    char r[8];
    int result=strlen(a);
    printf("%d\n",result);
    strcpy(r,a);
    printf("%s\n",a);

    printf("%s\n",r);
    strcat(r,a);
    printf("%s\n",r);
    printf("%s\n",a);
    
    printf("%d",strcmp(r,a));
    
    return 0;
}