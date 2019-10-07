#include<stdio.h>
#include<conio.h>
int a[100],b[100];
int low,high,h,i,j,k,n;
void merge(int low,int mid,int high)
{
	int o;
	h=low;
	i=low;
	j=mid+1;
	while((h<=mid)&&(j<=high))
	{
		if(a[h]<=a[j])
		{
			b[i]=a[h];
			h++;
		}
		else
		{
			b[i]=a[j];
			j++;
		}
		i++;
	}
	if((h>mid)&&(j<=high))
	{
		for(k=j;k<=high;k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	else if((j>high)&&(h<=mid))
	{
		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	for(k=low;k<=high;k++)
	{
		a[k]=b[k];
	}
	printf("sub array is:\n");
	for(o=low;o<=high;o++)
	{
		printf("%d ",b[o]);
	}
	printf("\n");
}
void merge_sort(int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(low,mid,high);
	}
}
void main()
{
	int c;
printf("Enter the number of elements in the list:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(c=0;c<n;c++)
{
scanf("%d",&a[c]);
}
low=0;
high=n-1;
merge_sort(low,high);
printf("The sorted list is:\t");
for(c=0;c<n;c++)
{
printf("%d\t",a[c]);
}
}
