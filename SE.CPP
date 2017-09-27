 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int i,m;
   float opt[10],ml[10],pess[10],hisdata,laborrate;
   float estvalue,Total=0,Cost,TotalCost,Effort,fp,f;

   clrscr();

   printf("Enter the number of modules:");
   scanf("%d",&m);

   printf("\nEnter the optimistic,most Likely,Pessimistic for" );

   for( i=0;i<m;i++)
   {
    printf("\nmodule %d:\n",i+1);
    scanf("%f%f%f", &opt[i], &ml[i], &pess[i]);
   }

   printf("\n Enter the Historical Data :");
   scanf("%f",&hisdata);

   printf("\n Enter the Labor Rate:");
   scanf("%f",&laborrate);
   for(i=0;i<m;i++)
    {
     estvalue=(opt[i]+(4*ml[i])+pess[i])/6 ;
     printf("\nThe Estimated value for module %d is %f:",i+1,estvalue);
     Total=Total+estvalue;
    }

    Total=Total*5;
    printf("\nThe Total Estimated Lines Of Code is %f:",Total);

    f=14*3;

    fp=Total*(0.65+(0.01*f));
    printf("\nfp is: %f",fp);

    Cost= laborrate/hisdata;
    printf("\nThe Cost per LOC is %f:",Cost);

    TotalCost=fp*Cost;
    printf("\nThe Total Cost needed for software is %f:",TotalCost);

    Effort=fp/hisdata;
    printf("\nThe Effort needed for software is %f:",Effort);

    getch();

 }