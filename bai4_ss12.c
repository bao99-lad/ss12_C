#include <stdio.h>
int max(int arr[],int a)
{
    int max=arr[0];
    for(int i=1;i<=a;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("So lon nhat cua mang la: %d",max);
}

int main()
{
    int arr[10]={1,4,9,233,356,44,123,79,335,999};
    int n=sizeof(arr)/sizeof(arr[0]);
    max(arr,n);
    return 0;
}