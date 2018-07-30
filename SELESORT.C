#include<stdio.h>
#include<conio.h>
void selecsort(int,int*);
int main()
{
int list[20],n,i;
printf("enter number of elements");
scanf("%d",&n);
printf("elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&list[i]);
}
selecsort(n,list);
getch();
}
void selecsort(int n,int arr[])
{
int temp,min,loc,i,j;
for(i=0;i<n-1;i++)
{
min=arr[i];
loc=i;
for(j=i+1;j<n;j++)
{
if(min>arr[j])
{
min=arr[j];
loc=j;
}
}
temp=arr[i];
arr[i]=arr[loc];
arr[loc]=temp;
}
printf("enter list as follows:\n");
for(i=0;i<n;i++)
printf("\n%d",arr[i]);
}
