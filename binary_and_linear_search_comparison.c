#include <bits/stdc++.h>
using namespace std;
int binarySearch(int ar[],int len, int find)
{   int left = 0;
    int right = len-1;
    while(left <= right)
    {   int mid = (left+right) / 2;
        if(ar[mid] == find)
        {   return mid;
        }
        if(ar[mid] > find)
        {   right = mid - 1;
        }
        else left = mid+1;
    }
    return -1;
}
int linearSearch(int arr[], int len,int find)
{   for (int i = 0; i < len; i++)
    {
        if(arr[i] == find)
        {   return i;
        }
    }
    return -1;    
}

int main()
{   int arr[] = {1,5,2,6,3,7,8,9,10,4};
    int find;
    int len = sizeof(arr)/sizeof(arr[0]);    
    sort(arr,arr+len);
    cout<<"Enter an element to find: ";
    cin>>find;
    int rtrn = binarySearch(arr,len,find);

    if(rtrn > -1)
    {   cout<<"Element Exists : "<<arr[rtrn]<<endl;;
    }
    else
    {   cout<<"Element does not exist."<<endl;
    }
    int linear_search = linearSearch(arr, len, find);
    if(linear_search > -1)
    {   cout<<"Element Exists : "<<arr[linear_search]<<endl;
    }
    else
    {   cout<<"Element does not exist.";
    }   
    return 0;
}