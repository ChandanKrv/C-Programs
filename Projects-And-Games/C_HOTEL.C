#include<stdio.h>
#include<conio.h>
void main()
{
      char name[40];
      int vnv;  // Veg and Non-Veg
      int smd; //starter menu detail
      int v_starter[10]; //veg_starter
      int vd1=0,vd2=0,vd3=0,net=0; //veg dishes 1/2/3....

      int i,vdn,ndn; //for loop veg detail numbers//non-vej details num
      clrscr();

	 printf("Hello Sir/Mam Welcome to Kaveri Hotel Program\n\n");
	 printf("Please Enter Your Name \n");
		scanf("%s",&name);
		clrscr();
	 printf("\nPlease Select Your Food Type:-\n");
	       delay(400);

	 printf("           1. Veg \n");
	 delay(200);
	 printf("              OR \n");
	 delay(200);
	 printf("           2. Non-Veg\n");
	 scanf("%d",&vnv);
	 clrscr();
  //Switch Case name 1.1
	 switch(vnv){

	  case 1: printf("Choose a Plan:-\n");
		   delay(200);
		  printf("1. Starter\n");
		    delay(200);
		  printf("2. Main\n");
		    delay(200);
		  printf("3. Desert\n");
		  delay(300);
		  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n 4. Close Menu\n");
		  scanf("  %d",&smd);
		   clrscr();

		  //Switch Case name 1.2

		  switch(smd){  //starter menu detail

		   case 1:
			   printf("Veg Starter details\n");
			   printf("\tDishes");
			   printf("\t                   Price \n");
			   printf("\t1.Club Sandwich ");
			   printf("\t     180\n");
			   printf("\t2.Cheese Toast");
			   printf("\t             160\n");
			   printf("\t3.Idli");
			   printf("\t                     100\n");
			   printf("\t4.Sada Dosa");
			   printf("\t             100\n");
			   printf("\t5.Pav Bhaji");
			   printf("\t             120\n");
			   printf("Tell me How many Dishes do you want to Order");
			   scanf("%d",&vdn);
			   printf("\nNow tell me the option number of your Dishes\n");
			   for(i=1;i<=vdn;i++)  //veg detail numbers
			   {
			   scanf("%d",&v_starter[i]);
			   }

			   printf("\nDear %s You Have to Pay:-\n",name);
			   for(i=1;i<=vdn;i++)
			   {
			     if(v_starter[i]==1){
			     printf("Rs.180 For Club Sandwich\n");
			      vd1=vd1+180;}
			     if(v_starter[i]==2){
			     printf("Rs.160 For Cheese Toast\n");
			       vd2=vd2+160;}
			     if(v_starter[i]==3){
			     printf("Rs.100 For Idli\n");
			       vd3=vd3+100;}
			     if(v_starter[i]==4){
			     printf("Rs.100 For Sada Dosa\n");
			       vd2=vd2+100;}
			     if(v_starter[i]==5){
			     printf("Rs.120 For Pav Bhaji\n");
			       vd3=vd3+120;}

			     net=vd1+vd2+vd3;
			   }

			   printf("Total Amount %d",net);
		   break;
		   case 2:
			   printf("Veg Main details\n");
			   printf("\tDishes");
			   printf("\t                    Price \n");
			   printf("\t1.Baby Corn Mushroom");
			   printf("\t     250\n");
			   printf("\t2.Pav Bhaji");
			   printf("\t             200\n");
			   printf("\t3.Chole Bature");
			   printf("\t             210\n");
			   printf("\t4.Panner Pakoda");
			   printf("\t             280\n");
			   printf("\t5.XXL Cheese Dosa");
			   printf("\t     370\n");
			   printf("Tell me How many Dishes do you want to Order");
			   scanf("%d",&vdn);
			   printf("\nNow tell me the option number of your Dishes\n");
			   for(i=1;i<=vdn;i++)  //veg detail numbers
			   {
			   scanf("%d",&v_starter[i]);
			   }

			   printf("\nDear %s You Have to Pay:-\n",name);
			   for(i=1;i<=vdn;i++)
			   {
			     if(v_starter[i]==1){
			     printf("Rs.250 For Baby Corm Mushroom\n");
			      vd1=vd1+250;}
			     if(v_starter[i]==2){
			     printf("Rs.200 For Pav Bhaji\n");
			       vd2=vd2+200;}
			     if(v_starter[i]==3){
			     printf("Rs.210 For Chole Bature\n");
			       vd3=vd3+210;}
			     if(v_starter[i]==4){
			     printf("Rs.280 For Sada Pakoda\n");
			       vd2=vd2+280;}
			     if(v_starter[i]==5){
			     printf("Rs.370 For XXL Cheese Dosa\n");
			       vd3=vd3+370;}

			     net=vd1+vd2+vd3;
			   }

			   printf("Total Amount %d",net);
		   break;


		   case 3:
			   printf("Veg Desert details\n");
			   printf("\tDishes");
			   printf("\t                    Price \n");
			   printf("\t1.Ice Cream ");
			   printf("\t             60\n");
			   printf("\t2.French Onion Soup");
			   printf("\t     90\n");
			   printf("\t3.Mushroom Veg.Soup");
			   printf("\t     70\n");
			   printf("\t4.Cream Soup");
			   printf("\t             80\n");
			   printf("\t5.Sweet Corn Soup");
			   printf("\t     60\n");
			   printf("Tell me How many Dishes do you want to Order");
			   scanf("%d",&vdn);
			   printf("\nNow tell me the option number of your Dishes\n");
			   for(i=1;i<=vdn;i++)  //veg detail numbers
			   {
			   scanf("%d",&v_starter[i]);
			   }

			   printf("\nDear %s You Have to Pay:-\n",name);
			   for(i=1;i<=vdn;i++)
			   {
			     if(v_starter[i]==1){
			     printf("Rs.60 For Ice Cream\n");
			      vd1=vd1+60;}
			     if(v_starter[i]==2){
			     printf("Rs.90 For French Onion Soup\n");
			       vd2=vd2+90;}
			     if(v_starter[i]==3){
			     printf("Rs.70 For Mushroom veg.Soup\n");
			       vd3=vd3+70;}
			     if(v_starter[i]==4){
			     printf("Rs.80 For Cream Soup\n");
			       vd2=vd2+80;}
			     if(v_starter[i]==5){
			     printf("Rs.60 For Sweet Corn Soup\n");
			       vd3=vd3+60;}

			     net=vd1+vd2+vd3;
			   }

			   printf("Total Amount %d",net);
		   break;
		   case 4: exit(0);
		   default : printf("Enter a Valid Input (Try Again)");
		   }
		   break;
   // NON_VEG .................................................................//
	  case 2: printf("Choose a Plan:-\n");
		     delay(200);
		  printf("1. Starter\n");
		  delay(200);
		  printf("2. Main\n");
		  delay(200);
		  printf("3. Desert\n");
		  delay(200);
		  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n4. Close Menu\n");
		  scanf("%d",&smd);
		   clrscr();
		   switch(smd){

		   case 1: printf("Non-Veg Starter details\n");
			   printf("\tDishes");
			   printf("\t         Price \n");
			   printf("\t1.Appolo Fish");
			   printf("\t         220\n");
			   printf("\t2.Chicken 65");
			   printf("\t         190\n");
			   printf("\t3.Chicken Manchurian");
			   printf("\t         190\n");
			   printf("\t4.Chicken Chilly");
			   printf("\t         220\n");
			   printf("\t5.Fish Finger");
			   printf("\t         280\n");
			   printf("Tell me How many Dishes do you want to Order");
			   scanf("%d",&vdn);
			   printf("\nNow tell me the option number of your Dishes\n");
			   for(i=1;i<=vdn;i++)  //veg detail numbers
			   {
			   scanf("%d",&v_starter[i]);
			   }

			   printf("\nDear %s You Have to Pay:-\n",name);
			   for(i=1;i<=vdn;i++)
			   {
			     if(v_starter[i]==1){
			     printf("Rs.220 For Appolo Fish\n");
			      vd1=vd1+220;}
			     if(v_starter[i]==2){
			     printf("Rs.190 For Chicken 65\n");
			       vd2=vd2+160;}
			     if(v_starter[i]==3){
			     printf("Rs.190 For Chicken Manchurian\n");
			       vd3=vd3+190;}
			     if(v_starter[i]==4){
			     printf("Rs.220 For Chicken Chilly\n");
			       vd2=vd2+100;}
			     if(v_starter[i]==5){
			     printf("Rs.280 For Fish Finger\n");
			       vd3=vd3+280;}

			     net=vd1+vd2+vd3;
			   }

			   printf("Total Amount %d",net);
		   break;

		   case 2: printf("Non-Veg Main plan\n");
			   printf("\tDishes");
			   printf("\t          Price \n");
			   printf("\t1.Cashew Chicken ");
			   printf("\t         360\n");
			   printf("\t2.Chilly Lamb");
			   printf("\t         300\n");
			   printf("\t3.Schezwan Chicken");
			   printf("\t         290\n");
			   printf("\t4.Appolo Fish");
			   printf("\t         220\n");
			   printf("\t5.Chicken Lollypop");
			   printf("\t         320\n");
			   printf("Tell me How many Dishes do you want to Order");
			   scanf("%d",&vdn);
			   printf("\nNow tell me the option number of your Dishes\n");
			   for(i=1;i<=vdn;i++)  //veg detail numbers
			   {
			   scanf("%d",&v_starter[i]);
			   }

			   printf("\nDear %s You Have to Pay:-\n",name);
			   for(i=1;i<=vdn;i++)
			   {
			     if(v_starter[i]==1){
			     printf("Rs.360 For Cashew Chicken\n");
			      vd1=vd1+360;}
			     if(v_starter[i]==2){
			     printf("Rs.300 For Chilly Lamb\n");
			       vd2=vd2+300;}
			     if(v_starter[i]==3){
			     printf("Rs.290 For Schewan Chicken \n");
			       vd3=vd3+290;}
			     if(v_starter[i]==4){
			     printf("Rs.220 For Appolo Fish\n");
			       vd2=vd2+220;}
			     if(v_starter[i]==5){
			     printf("Rs.320 For Chicken Lollypop\n");
			       vd3=vd3+320;}

			     net=vd1+vd2+vd3;
			   }

			   printf("Total Amount %d",net);

		   break;
		   case 3: printf("Non-Veg Desert plan\n");
			   printf("\tDishes");
			   printf("\t         Price \n");
			   printf("\t1.Ice Cream ");
			   printf("\t         60\n");
			   printf("\t2.Manchow Soup");
			   printf("\t         90\n");
			   printf("\t3.Sweet Corn");
			   printf("\t         120\n");
			   printf("\t4.Palak Soup");
			   printf("\t         80\n");
			   printf("\t5.Cold Drink");
			   printf("\t         120\n");
			   printf("Tell me How many Dishes do you want to Order");
			   scanf("%d",&vdn);
			   printf("\nNow tell me the option number of your Dishes\n");
			   for(i=1;i<=vdn;i++)  //veg detail numbers
			   {
			   scanf("%d",&v_starter[i]);
			   }

			   printf("\nDear %s You Have to Pay:-\n",name);
			   for(i=1;i<=vdn;i++)
			   {
			     if(v_starter[i]==1){
			     printf("Rs.60 For Ice Cream\n");
			      vd1=vd1+60;}
			     if(v_starter[i]==2){
			     printf("Rs.90 For Manchow Soup\n");
			       vd2=vd2+90;}
			     if(v_starter[i]==3){
			     printf("Rs.120 For Sweet Corn Soup\n");
			       vd3=vd3+120;}
			     if(v_starter[i]==4){
			     printf("Rs.80 For Palak Soup\n");
			       vd2=vd2+100;}
			     if(v_starter[i]==5){
			     printf("Rs.120 For Cold Drink\n");
			       vd3=vd3+120;}

			     net=vd1+vd2+vd3;
			   }

			   printf("Total Amount %d",net);
		   break;
		   case 4: exit(0);
		   default : printf("Enter a Valid Input (Try Again)");
		   }

   }
 getch();

}
