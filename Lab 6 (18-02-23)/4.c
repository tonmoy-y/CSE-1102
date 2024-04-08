#include <stdio.h>

void sort( int arr[], int n)  {
    int max;
    int j = 0, k=0;
    for ( k = 0; k < n - 1; k++)
    {

        for ( j = 0; j < n - k - 1; j++)
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
    int n, max = 0, min;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int array2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    
    }
    
    sort(array2, n);

    for (int m = 0; m < n; m++)
        printf("%d ", array2[m]);
    return 0;
}



