#include<stdio.h>
#include<conio.h>
void bubsort(int arr[],int);
int main()
{
int i,arr[20],n;
printf("enter number of elements");
scanf("%d",&n);
printf("elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
bubsort(arr,n);
getch();
}
void bubsort(int arr[],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("array elements are as follow:\n");
for(i=0;i<n;i++)
printf("\n%d",arr[i]);
}




