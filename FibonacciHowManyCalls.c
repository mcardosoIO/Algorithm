#include <stdio.h>
#include <stdlib.h>

int count;
int fib(int n)
{
    count++;
    if (n == 0)
    return 0;
    if (n == 1 )
    return 1;
        else
        return fib(n-1) + fib(n-2);
}

int main() {
    int N;
    int tc;
    int result[39];
    int guarda[39];
/*
    scanf("%d", &tc);
    calls = fib(tc);
    printf("%d\n", calls);

    printf("%d contagem\n", count-1);
    result = fib(tc);
    printf("fib(%d) = %d calls = %d\n", guarda[tc], count-1, result);
*/

    scanf("%d", &N);
    for (tc = 1; tc <= N; tc++)
    {
    scanf("%d", &guarda[tc]);
    }

    for (tc = 1; tc <= N; tc++)
    {
    count = 0;
    result[tc] = fib(guarda[tc]);
    printf("fib(%d) = %d calls = %d\n", guarda[tc], count-1, result[tc]);
    }

    return 0;
}

