//           A PROGRAM TO TRANSPOSE OF SPARSE MATRIX ANOTHER WAY
 void main()
 {
 int i,j,n[3],m1[50],t,col;
 clrscr();
 printf("\n\n\n");
 printf("\n\n\t\tEnter The Number Of Rows.....");
 scanf("%d",&n[1]);
 printf("\n\n\t\tEnter The Number Of Columns.....");
 scanf("%d",&n[2]);
 printf("\n\n\t\tEnter The Number Of Non-Zero Elements.....");
 scanf("%d",&n[3]);
 clrscr();
 for(i=1;i<=(3*n[3]);i++)
 {
 printf("\n\n\t\tEnter The Row,Column & NRZ Elements....=>");
 scanf("%d",&m1[i]);
 }
 clrscr();
 printf("\n\n\t\tThe Sparse Matrix Is....................\n\n");
 printf("\n\n\t\t");
 for(i=1;i<=3;i++)
 {
 printf("\t%d",i);
 }
 printf("\n\t\t-----------------------------------");
 printf("\n\n\t\t");
 for(i=1;i<=3;i++)
 {
 printf("\t%d",n[i]);
 }
 printf("\n\t\t-----------------------------------");
 i=1;
 while(i<n[3])
 {
 printf("\n\n\t\t%d>>",i);
 for(j=1;j<=(3*n[3]);j++)
 {
 printf("\t%d",m1[j]);
 if((j%3)==0)
 {
 printf("\n\n\t\t");
 i++;
 if(i>n[3])
 break;
 else
 printf("\n\n\t\t%d>>",i);
 }
 }
 }
 getch();
 clrscr();


 //                       INVERSE MATRIX PRINTING
 printf("\n\n\t\tThe Inverse Of The Sparse Matrix Is...............\n\n");
 printf("\n\n\t\t");
 t=n[2];
 n[2]=n[1];
 n[1]=t;
 for(i=1;i<=3;i++)
 {
 printf("\t%d",i);
 }
 printf("\n\t\t-----------------------------------");
 printf("\n\n\t\t");
 for(i=1;i<=3;i++)
 {
 printf("\t%d",n[i]);
 }
 printf("\n\t\t-----------------------------------");
 i=1;
 for(col=1;col<=n[1];col++)
 {
 while(i<n[3])
 {
 printf("\n\n\t\t%d>>",i);
 for(j=1;j<=(3*n[3]);j++)
 {
 if(i==j)
 printf("\t%d",m1[j]);
 if((j%3)==0)
 {
 printf("\n\n\t\t");
 i++;
 if(i>n[3])
 break;
 else
 printf("\n\n\t\t%d>>",i);
 }
 }
 }
 }
 getch();
 }