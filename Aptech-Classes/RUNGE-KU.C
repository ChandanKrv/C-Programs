			/*Programing of Matrix Addition */
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
  {
   int i,j,r1,r2,c1,c2,mat1[10][10],mat2[10][10],mat3[10][10];
   clrscr();
   printf("Enter how many rows & coloumns of 1st matrix:\n");
   scanf("%d%d",&r1,&c1);
   printf("Enter the element of 1st matrix:\n");
   for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}

   printf("Enter how many rows & coloumns of 2nd matrix:\n");
   scanf("%d%d",&r2,&c2);
   printf("Enter the element of 2nd matrix:\n");
   for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}


	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	} printf("The output of 1st matrix:\n");
	for(i=0;i<r1;i++)
	 {
		for(j=0;j<c1;j++)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("The output of 2nd matrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	printf("The resultant matrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	 }
	printf("\n\t \tThank you.");
	getch();
  }