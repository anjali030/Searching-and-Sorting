#include<stdio.h>
#include<conio.h>
void insersort(int,int*);
int main()
{
int i,list[20],n;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&list[i]);
}
insersort(n,list);
}
void insersort(int n,int arr[])
{
        int temp,i,j;
        for(i=1;i<=n-1;i++)
        {
                temp=arr[i];
                j=i-1;
                while((temp<arr[j]) && (j>=0))
                {

                        arr[j+1]=arr[j];
                        j=j-1;
                }
                arr[j+1]=temp;
        }
        printf("\n entered list is as follows:\n");
        for(i=0;i<n;i++)
                printf("\n%d",arr[i]);
}
