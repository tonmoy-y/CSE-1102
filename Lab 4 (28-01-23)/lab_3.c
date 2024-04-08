#include <stdio.h>

int main()
{
    int a, len = 0, maxsum1 = 0, maxlen1 = 0, pos1 = 0, maxsum2 = 0, maxlen2 = 0;
    int i = 1;

    int sum = 0;
    char ch;

    while (ch != 'q')
    {
        scanf("%d%c", &a, &ch);

        if (a < 0)
        {
            sum = 0;
            len = 0;
        }
        else
        {
            sum += a;
            len++;
            maxlen1 = len;
            maxsum1 = sum;

            if (maxlen2 < maxlen1)
            {
                maxlen2 = maxlen1;
                maxsum2 = maxsum1;
                pos1 = i - maxlen2;
            }
        }

        i++;
    }

    printf("Sum of LPS %d\n\n", maxsum2);
    printf("Length of LPS %d\n", maxlen2);
    printf("Starting postion of LPS %d (Assuming that position start from 0) \n", pos1);
    return 0;
}