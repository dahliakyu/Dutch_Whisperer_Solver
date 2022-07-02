#include <stdio.h>
#include <string.h>
int abs(int x);

/* Function to swap values at two pointers */
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string. */
void permute(int *a, int l, int r)
{
    int i, loop;
    if (l == r)
    {
        if (a[2] == 9 && a[0] != 1 && a[0] != 5 && a[1] != 0 && a[1] != 5 && abs(a[1] - a[0]) >= 4 && abs(a[2] - a[1]) >= 4 && abs(a[3] - a[2]) >= 4 && abs(a[4] - a[3]) >= 4 && abs(a[5] - a[4]) >= 4 && abs(a[6] - a[5]) >= 4 && abs(a[7] - a[6]) >= 4 && abs(a[8] - a[7]) >= 4 && abs(a[9] - a[8]) >= 4)
        {
            for (loop = 0; loop < 8; loop++)
            {
                printf("%d", a[loop]);
            }
            printf("\n");
        }
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i)); // backtrack
        }
    }
}

/* Driver program to test above functions */
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    permute(arr, 0, n - 1);
    return 0;
}