#include<stdio.h>
#include<conio.h>
void binsearch(int [],int);
int main()
{
int arr[20],i,n;
printf("enter number of elements");
scanf("%d",&n);
printf("array elements are");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
binsearch(arr,n);
getch();
}
void binsearch(int arr[],int n)
{
int i,low,high,mid,num;
printf("enter searching element");
scanf("%d",&num);
low=0;
high=n-1;
for(i=0;i<n;i++)
{
if(high>=low)
{
mid=(high+low)/2;
if(arr[mid]==num)
{
printf("element %d found at position %d",num,mid+1);
break;
}
else if(arr[mid]<num)
low=mid+1;
else
high=mid-1;
}
else
{
printf("\nelement not found");
}
}
}
