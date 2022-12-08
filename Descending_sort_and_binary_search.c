#include <stdio.h>
#include <string.h>
int binarySearch(char string[],int n, char find)
{   int left = 0;
    int right = n-1;
    while(left <= right)
    {    int mid = (left+right) / 2;
        if(string[mid] == find)
        {    return mid;
        }
        if(string[mid] < find)
        {   right = mid - 1;
        }
        else left = mid+1;
    }        
    return -1;
}
int main () 
{  char string[] = "abcdefghijklmno";
   char temp;
   int i, j;
   int n = strlen(string);
   for (i = 0; i < n-1; i++) 
   {    for (j = i+1; j < n; j++) 
        {   if (string[i] < string[j])
            {  temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
   }   
   printf("String after sorting  - %s \n", string);   
 char find;
    printf("Please find character : ");
    scanf("%c",&find);
    int search = binarySearch(string, n, find);
    if(search > -1 )
    {    printf("Character Found at index %d\n",search);
        
    }
    else printf("Character doesn't exist");
   return 0;
}