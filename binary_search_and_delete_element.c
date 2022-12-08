#include<stdio.h>
#include<string.h>
int main()
{   int arr[8]={1,2,3,4,5,6,7,8};
    int left,middle,right,item,size=8;
    printf("Enter the element you want to delete: ");
    scanf("%d",&item);
    left=0;
    right=7;    
    while (left<=right)
    {  
      middle=(right+left)/2;
        if(arr[middle]==item) 
        {
          printf("Item found at index:%d\n",middle);
         break;
        }
          else if(arr[middle]>item)
          {
            right=middle-1;
          }
            else
            {
              left=middle+1;
            }
    }
   for (int i = middle; i < size; i++)
   {
    arr[i]=arr[i+1];
   }
   printf("Array: ");
   for (int j = 0; j < size-1; j++)
   {
    printf("%d ",arr[j]);
   }   
  return 0;
}