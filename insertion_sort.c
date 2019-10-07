#include<stdio.h>
int main()
{
	int a[100],n,i,j,k,index=0;
	printf("Enter the number of elements in the list:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&k);
		if(index<n)
		{
			for(i=index-1;i>=0;i--)     
			{
				if(k>a[i])
				{
					a[i+1]=k;                              
					index++;                              
					break;                                 
				}                                             
				else
				{
					a[i+1]=a[i];
				}
			}
			if(i==-1)
			{
				a[0]=k;
				index++;
			}
		}
	}
	printf("The sorted list is:\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}
	return 0;
}
