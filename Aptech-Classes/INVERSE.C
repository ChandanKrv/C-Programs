#include<stdio.h>
#include<math.h>
#include<conio.h>
float mat[20][20];
float ras[20][20];
void unit(int);
void swap(int,int);
void main()
{
int a,b,n;
printf("Enter the size:");
scanf("%d",&n);
printf("\n");
for(a=0;a<n;a++)
for(b=0;b<n;b++)
{
printf("Enter row no.%d&column no.%d  ",a+1,b+1);
scanf("%f",&mat[a][b]);
}
for(a=0;a<n;a++)
for(b=0;b<n;b++)
{ if(a==b) ras[a][b]=1;
  else ras[a][b]=0;
}
unit(n);
 }

 void unit(int n)
 {int i,j, k=0,a,b;
  float x;
 for(k=0;k<n;k++)
 {
  if(mat[k][k]==0) swap(n,k);
 x=mat[k][k];
  	for(i=0;i<n;i++)
      {mat[k][i]/=x; ras[k][i]/=x;}


      for(a=0;a<n;a++){printf("\n");
for(b=0;b<n;b++)printf("%f     ",mat[a][b]);
printf(" : ");
for(b=0;b<n;b++)printf("%f     ",ras[a][b]);
}printf("\n\n"); getch();



		for(i=0;i<n;i++)
      { x=mat[i][k];
       for(j=0;j<n;j++)
       {if(i==k) goto N;
	    mat[i][j]-=(mat[k][j]*x);
       ras[i][j]-=(ras[k][j]*x);
	    N:;
   	}} for(a=0;a<n;a++){printf("\n");
for(b=0;b<n;b++)printf("%f     ",mat[a][b]);
printf(" : ");
for(b=0;b<n;b++)printf("%f     ",ras[a][b]);
}printf("\n\n"); getch();
 
	}
printf("\nthe inverse of the matrix is:\n--------------------------------------\n");
   for(a=0;a<n;a++){printf("\n");
for(b=0;b<n;b++)printf("%f     ",mat[a][b]);
printf(" : ");
for(b=0;b<n;b++)printf("%f     ",ras[a][b]);
}
printf("\n--------------------------------------\n");
getch();
}
void swap(int n,int k)
{ int a,b;

  float x,y;b=1;

   M:; if(mat[k][k]==0&&(k+b)<n)
   {for(a=0;a<n;a++)
    {x=mat[k][a]; y=ras[k][a];
    mat[k][a]=mat[k+b][a];    ras[k][a]=ras[k+b][a];
    mat[k+b][a]=x; ras[k+b][a]=y;
    }
    } ;
    if(mat[k][k]==0&&(k+b)<n){b++;goto M;}
    if((k+b)>=n){printf("The matrix is SINGULAR inverse does not EXIST\n");getch();exit(0);}
}