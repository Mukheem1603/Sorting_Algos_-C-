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
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 			c=a[i];
	 			a[i]=a[j];
	 			a[j]=c;
			 }
		 }
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
 }
