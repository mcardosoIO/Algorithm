/*
@author Marcos Cardoso

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, tc, i, flag, count;
    char string[1000];

    scanf("%d", &N);
    for(tc=0; tc<N; tc++)
    {
        scanf("%s", &string);
        flag = 0;
        count = 0;
        for(i=0; i<strlen(string); i++)
        {
            if(string[i]=='<')
            {
                flag++;
                continue;
            }
            if(string[i]=='>' && flag > 0)
            {
                flag--;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

