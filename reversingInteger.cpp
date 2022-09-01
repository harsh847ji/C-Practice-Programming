#include <iostream>
using namespace std;
int main()
{
    int n = -456;
    int INT_MAX;
    int INT_MIN;

    int a, ans = 0;
    while (n != 0)
    {
        a = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            ans = ans * 10 + a;
        }

        n = n / 10;
    }
    printf("%d", ans);
    return 0;
}