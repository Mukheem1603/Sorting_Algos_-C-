#include<stdio.h>
int a[100],l,n,h,piv,i,j;
int partition(int m,int n)
{
int s;
piv=a[m];
i=m;
j=n;
while(i<j)
{
i++;
while(a[i]<=piv)
{
i++;
}
while(a[j]>piv)
{
j--;
}
if(i<j)
{
	 s=a[i];
 a[i]=a[j];
 a[j]=s;
}
}
a[m]=a[j];
a[j]=piv;
return j;
}
void Quick_sort(int l,int h)
{
if(l<h)
{
j=partition(l,h);
Quick_sort(l,j-1);
Quick_sort(j+1,h);
}
}
void main()
{
int k;
printf("Enter the number of elements in the list:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
l=0;
h=n-1;
Quick_sort(l,h);
printf("The sorted list is:\t");
for(k=0;k<n;k++)
{
printf("%d\t",a[k]);
}
}


