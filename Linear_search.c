#include <stdio.h>

int main()
{
    int arr[] = {1,2,5,7,9,11,15};
    int a = 10,i=0,j=7,mid,found;

    while (i<=j-1)
    {
        mid=i+(j-i)/2;
        if (arr[mid] == a)
        printf("%d",mid+1);

        if (arr[mid]>a)
        {
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    
    }
    if(i>=j)
    printf("not found");
    return 0;
}