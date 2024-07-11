#include <stdio.h>

int main()
{
    int list[100], i, j, k, l, n;

    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    /* Deleting duplicate element */
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (list[i] == list[j])
            {
                for (k = j + 1, l = j; k < n; k++, l++)
                {
                    if (list[k] != list[i])
                    {
                        list[l] = list[k];
                    }
                    else
                    {
                        l--;
                    }
                }
                n = l;
            }
        }
    }

    printf("Resultant array is\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}
