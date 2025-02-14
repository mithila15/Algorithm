#include <stdio.h>

int search_u(int A[], int x, int startPos, int lastPos)
{
    if(lastPos - startPos < 0)
    {
        return -1;
    }
    else
    {
        if (A[startPos] == x)
        {
            return startPos;
        }
        else
        {
            return search_u(A, x, startPos+1, lastPos);
        }
    }
}

int main()
{
    int n, A[100], i, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter a value to find: ");
    scanf("%d", &x);

    int loc = search_u(A, x, 0, n-1);

    if (loc == -1)
    {
        printf("\n %d is not in the array! :( \n", x);
    }
    else
    {
        printf("\n %d is in the array at index no. %d! :) \n", x, loc);
    }

    return 0;
}
