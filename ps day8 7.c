#include <stdio.h>
int primefactor(int n)
{
    int ans = n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("1 ");
        }
        else
        {
            printf("%d ", primefactor(i));
        }
    }
    return 0;   
}

