#include <stdio.h>

void sorting(int arr[], int n)
{
    int max;
    int j = 0, k = 0;
    for (k = 0; k < n - 1; k++)
    {

        for (j = 0; j < n - k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                max = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = max;
            }
        }
    }
}

int main()
{
    int o, n, max = 0;
    printf("Enter the number of integers: ");
    scanf("%d %d", &o, &n);
    int array[o];
    int array2[o + n];
    for (int i = 0; i < o; i++)
    {
        scanf("%d", &array[i]);
        array2[i] = array[i];
    }
    int array1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
        array2[o + i] = array1[i];
    }

        sorting(array2, ( o + n));

    for (int m = 0; m < (n + o); m++)
        printf("%d ", array2[m]);
    return 0;
}
