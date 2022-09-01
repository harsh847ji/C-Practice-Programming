#include <stdio.h>
int binarySearch(int arr[],int i , int j, int a){
    while (i<=j)
    {
        
        int mid=i+(j-i)/2;
        if (arr[mid] == a)
        return mid;

        else if (arr[mid]>a)
        {
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
}
int main()
{
    int arr[] = {1,2,5,7,9,11,15};
    int a = 11,i=0,j=7,found;

    
    found = binarySearch(arr , i , j-1 , a );
    printf("%d",found+1);
    return 0;
}
