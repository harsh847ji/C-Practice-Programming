#include <stdio.h>
int main()
{
    int a = 34, b = 35;
    // without typecasting
    //  float avg=(a+b)/2;
    //  printf("%f\n",avg);
    // gives value 34.000000

    // used typecasting
    float avg = ((float)a + b) / 2;
    printf("%f\n", avg);
    // gives value 34.500000
    return 0;
}