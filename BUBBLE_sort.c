 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int a[100];
 	int i,j,n,c;
 	printf("Enter the number of elements:");
 	scanf("%d",&n);
 	printf("Enter the elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("The sorted list is:\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-1;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
	 			c=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=c;
			 }
		 }
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
 }
