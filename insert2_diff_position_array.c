#include <stdio.h>
int main()
{
  int a, b, pos1, pos2, temp, size = 10;
  int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Insert the elements to input into array: ");
    scanf("%d %d", &a, &b);
    printf("Enter the positions you want to insert the elements at: ");
    scanf("%d %d", &pos1, &pos2);
        arr[pos1 - 1] = a;
        arr[pos2 - 1] = b;
        printf("Array: ");
            for (int i = 0; i < 10; i++)
            {
              printf("%d  ", arr[i]);
            }
  return 0;
}