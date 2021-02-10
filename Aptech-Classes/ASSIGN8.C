/* 52013=Fifty Two Thousand Thirteen.*/
#include<math.h>
void digit(long,long,long);
void decade(long);
void unit(long);
void pre(long);
main()
{
 long l,i,n,q,p,pr,x,y;
 l=0;n=0;i=0;q=0;p=0,x=0;
 clrscr();
 textcolor(12);
 cprintf("Enter The Number To Be Printed.....:=>");
 scanf(" %ld",&pr);
 n=pr;
 while(pr!=0)
 {
  pr=(long int)pr/10;
  l=l+1;
 }
 for(i=l;l>=1;i--)
 {
   p=pow(10,l-1);
   q=(long int)n/p;
   if(((l==2)||(l==5)||(l==7)||(l==9))&&(q==1))
   {
     p=pow(10,l-2);
     q=(long int)n/p;
     digit(l--,q,x);
   }
    else
     digit(l,q,x);
   x=q;
   n=n%p;
   l=l-1;
 }
  printf(".");
  getch();
  return;
}
 void digit(long l1,long n,long y)
 {
   long  su;
   if(n>10)
    {
      su=l1;
      l1=n;
    }
   switch(l1)
   {
    case 1:  unit(n);
	     break;
    case 2:  decade(n);
	     break;
    case 3:  unit(n);
	     textcolor(29);
	     if(n!=0)
	     {
	       if(n>1)
		cprintf(" Hundreds ");
	       else
		 cprintf(" Hundred ");
	      }
	     break;
    case 4:  unit(n);
	      textcolor(13);
	      if(n!=0)
		{
		 if(n>1)
		   cprintf(" Thousands ");
		 else
		   cprintf(" Thousand ");
		}
	       else
		{
		  if(y>0)
		   cprintf(" Thousands ");
		 }
	    break;
    case 5: decade(n);
	    break;
    case 6: unit(n);
	    textcolor(10);
	     if(n!=0)
	       {
		 if(n>1)
		   cprintf(" Lakhs ");
		  else
		   cprintf(" Lakh ");
		 }
	     else
	     {
	       if(y>0)
	       cprintf(" Lakhs ");
	     }
	    break;
    case 7: decade(n);
	    break;
    case 8: unit(n);
	    textcolor(11);
	    if(n!=0)
		{
		 if(n>1)
		   cprintf(" Crores ");
		 else
		   cprintf(" Crore ");
		}
	       else
		{
		  if(y>0)
		   cprintf(" Crores ");
		 }
	    break;
    case 9: decade(n);
	    break;
    case 11:textcolor(30);
	    cprintf(" Eleven");
	    pre(su);
	    break;
    case 12:textcolor(32);
	    cprintf(" Twelve");
	    pre(su);
	    break;
    case 13:textcolor(33);
	    cprintf(" Thirteen");
	    pre(su);
	    break;
    case 14:textcolor(34);
	    cprintf(" Fourteen");
	    pre(su);
	    break;
    case 15:textcolor(35);
	    cprintf(" Fifteen");
	    pre(su);
	    break;
    case 16:textcolor(36);
	    cprintf(" Sixteen");
	    pre(su);
	    break;
    case 17:textcolor(37);
	    cprintf(" Seventeen");
	    pre(su);
	    break;
    case 18:textcolor(38);
	    cprintf(" Eighteen");
	    pre(su);
	    break;
    case 19:textcolor(39);
	    cprintf(" Nineteen");
	    pre(su);
	    break;

  }
 return;
}
    void decade(long r)
    {
	 textcolor(19);
	 switch(r)
		 {
			case 1:cprintf(" Ten");
			       break;
			case 2:cprintf(" Twenty");
			       break;
			case 3:cprintf(" Thirty");
			       break;
			case 4:cprintf(" Fourty");
			       break;
			case 5:cprintf(" Fifty");
			       break;
			case 6:cprintf(" Sixty");
			       break;
			case 7:cprintf(" Seventy");
			       break;
			case 8:cprintf(" Eighty");
			       break;
			case 9:cprintf(" Ninety");
				break;
		       case 10:cprintf(" Ten");
			case 0: break;

		  }
	  return;
     }
    void unit(long r)
    {
     textcolor(62);
     switch(r)
	    {
		case 1:cprintf(" One");
			break;
		case 2:cprintf(" Two");
			break;
		case 3:cprintf(" Three");
			break;
		case 4:cprintf(" Four");
			break;
		case 5:cprintf(" Five");
			break;
		case 6:cprintf(" Six");
			break;
		case 7:cprintf(" Seven");
			break;
		case 8:cprintf(" Eight");
			break;
		case 9:cprintf(" Nine");
			break;
		case 0: break;

	    }
	    return;
    }
   void pre(long su)
   {

    switch(su)
    {
     case 2:break;
     case 5:textcolor(55);
	    cprintf(" Thousands ");
	    break;
     case 7:textcolor(65);
	    cprintf(" Lakhs ");
	    break;
     case 9:textcolor(75);
	    cprintf(" Crores ");
	    break;

     }
     return;
        }