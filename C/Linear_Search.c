// Implement Linear Search
#include <stdio.h>

 void linearSearch(int array[], int size, int s)
    {
        int found = 0;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == s)
            {
                printf("The element %d is found at index number: %d \n", s, i);
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Element not found.\n");
        }
    }

int main()
{

    int num, i, s_num;

    printf("Enter the number of elements for array: \n");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of array: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: \n");
    scanf("%d", &s_num);

    linearSearch(arr, num, s_num);

    return 0;
}