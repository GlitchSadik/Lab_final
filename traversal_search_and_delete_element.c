#include <stdio.h>
int main()
{   int size = 10, a,count=0;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for ( int t=2;t>0;t--)
    {       printf("Enter an element you want to delete: ");
            scanf("%d", &a);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == a)
            {   for (int j = i; j < size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                size = size - 1;
                count++;
                break;
            }
            
        }if (count>0) printf("This element can not be deleted as it does not exist\n",a);
        
    }
        for (int q = 0; q < size; q++)
        {   printf("%d  ", arr[q]);
        }
    return 0;
}