
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter numbers");
        scanf("%d", &arr[i]);
    }
    int
    low = 0,
    high = n - 1,
    mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == mid + 1)
        {
            printf("%d\n", mid + 1);
            break;
        }
        else if (arr[mid] > mid + 1)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
    }
