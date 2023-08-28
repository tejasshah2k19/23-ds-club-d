#include <stdio.h>
#define SIZE 6

int linearSearch(int array[], int search) // 11 22 33 44 55 66
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (array[i] == search)
        {
            return i;
        }
    }
    return -1;
}
// n
//  time take by program ->

int binarySearch(int array[], int search)
{
    int min = 0;
    int max = SIZE - 1;
    int mid;
    int count = 0;
    while (min <= max)
    {
        count++;
        mid = (min + max) / 2;
        if (array[mid] == search)
        {
            printf("\ncount = %d", count);
            return mid;
        }
        else if (search > array[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    // cnt

    printf("\ncount = %d", count);
    return -1;
}
int main()
{

    int array[] = {11, 22, 33, 44, 55, 66};
    int search = 33;
    int ans = linearSearch(array, search);
    printf("\n%d", ans);
    ans = binarySearch(array, search);
    printf("\n%d", ans);
}
