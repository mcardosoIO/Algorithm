#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int N, i, shift, len, j;
    char string[50];

    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%s", &string);
        scanf("%d", &shift);

        len = strlen(string);
        for(j = 0; j < len; j++)
        {
            if(string[j] >= 'A' && string[j] <= 'Z')
            {
                if((string[j] - shift) < 65)
                printf("%c", (string[j] - shift)+ 26);
                else
                printf("%c", (string[j] - shift));
            }
        }
        printf("\n");
    }
    return 0;
}

