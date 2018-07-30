#include<stdio.h>
#include<conio.h>
void linearsearch(int arr[],int);
int main()
{
int arr[20],num,i;
printf("enter number of elements");
scanf("%d",&num);
printf("array elemnts are");
for(i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
linearsearch(arr,num);
getch();
}
void linearsearch(int arr[],int num)
{
int loc=0,found=0,i,n;
printf("enter no.to search");
scanf("%d",&n);
for(i=0;i<num;i++)
{
if(arr[i]==n)
{
loc=i;
found=1;
break;
}
}
if(found==1)
printf("element %d found at position %d",n,i);
else
printf("element not found");
}








