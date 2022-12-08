#include<stdio.h>
int main(){
  int a,b,size=10;
int arr[size]={1,2,3,4,5,6,7,8,9,10};
printf("Insert two numbers sequntially to add at the end of the array: ");
scanf("\n%d %d",&a,&b);
  for (int i = size-1; i>size-3 ; i--)
  {
    arr[i]= b;
    b=a;
  }
  printf("Array :");
  for (int  j = 0; j < size; j++)
  {
    printf("%d  ",arr[j]);
  }
  
  return 0;
}