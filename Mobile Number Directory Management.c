#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>

void validation(int x,int k);
void phvalidation(int k);
void serpr(int sim,int k);
void searching();
void updation(int x);
void reports(int x);

int a=0,sim;

struct User
{
    char customername[20],housename[20],locality[20],district[20],serviceprovider[20],mobilenumber[20];
};

struct User arr[100];

main()
{
    int i=0,n,option=0,r,l=0,opinion,choice,option1;
    printf("\t\t\t\t\t   ................................................\n");
    printf("\t\t\t\t\t\t!WELCOME TO MOBILE DIRECTORY MANAGEMENT!\n");
    printf("\t\t\t\t\t   ................................................\n\n");
//NEW DIRECTORY//
        printf("Enter the total number of customers: ");
        scanf("%d",&n);

        //taking inputs of customer details//
        for(i=0;i<n;i++)
        {
            printf("\n\nEnter the name of person %d: ",i+1);
            validation(1,0);
            printf("\n");
            printf("Enter the house name of person %d: ",i+1);
            validation(2,0);
            printf("\n");
            printf("Enter the locality of person %d: ",i+1);
            validation(3,0);
            printf("\n");
            printf("Enter the district of person %d: ",i+1);
            validation(4,0);
            printf("\n");
            printf("Enter your service provider\n");
con:
            printf("enter '1' if AIRTEL\nenter '2' if VODAFONE\nenter '3' if JIO\nenter '4' if BSNL\n");
            scanf("%d",&sim);
           if(sim>=1&&sim<=4)
           {
           serpr(sim,-2);
           printf("\n");
       }
           else
           {
            printf("Invalid Input.\n");
            goto con;
           }
           printf("enter the mobile number of person %d: ",i+1);
           phvalidation(-1);
           printf("\n");
           a++;
        }

rep:
    do{
    printf("\n\nENTER '1' FOR ADDING NEW CUSTOMERS.\nENTER '2' FOR SEARCHING.\nENTER '3' FOR UPDATING EXISTING CUSTOMER DETAILS.\nENTER '4' FOR FINDING REPORTS.\nENTER '5' FOR END\n");
    scanf("%d",&option);
    if(option<=0&&option>=6)
    printf("invalid input, Enter a Valid Input\n");
    }while(option<=1&&option>=6);
    switch(option)
    {
      case 1://ADDING NEW CUSTOMERS//
      printf("\n\nEnter number of new persons: ");
      scanf("%d",&r);
      printf("\n");
      for(i=n;i<=(n+r-1);i++)
      {
        printf("Enter name of person %d: ",i+1);
        validation(1,0);
        printf("\n");
        printf("enter the house name of person %d: ",i+1);
        validation(2,0);
        printf("\n");
        printf("enter the locality of person %d: ",i+1);
        validation(3,0);
        printf("\n");
        printf("enter the district of person %d: ",i+1);
        validation(4,0);
        printf("\n");
    con2:
        printf("enter '1' if AIRTEL\nenter '2' if VODAFONE\nenter '3' if JIO\nenter '4' if BSNL\n");
        scanf("%d",&sim);
        if(sim>=1&&sim<=4)
        {

        serpr(sim,-2);
        printf("\n");
    }
        else
        {
            printf("Invalid Input.\n");
            goto con2;
        }
        printf("enter the mobile number of person %d: ",i+1);
        phvalidation(-1);
        printf("\n");
        a++;
      }
    n=n+r;
    printf("\nEnter '1' for Continue to menu. or Enter 'Anyother' for END.\n");
    scanf("%d",&opinion);
    if (opinion==1)
    goto rep;
    else
    break;
   case 2:// SEARCHING //
   searching();
   printf("\n");
   printf("\nEnter '1' for Continue to menu or Enter 'Anyother' for END.\n");
    scanf("%d",&opinion);
    if (opinion==1)
    {
        goto rep;
    }
    break;
   case 3://UPDATION OF CUSTOMER DETAILS//
    con3:
    do{
        printf("\n\nEnter 1: For updating customer's Housename,locality,district.\nEnter 2: For updating customer's mobile number.\nEnter 3: for updating customer's service provider.\n");
        scanf("%d",&opinion);
        if(opinion==1)
        {
            updation(1);
            printf("\n");
            printf("\nEnter 1: for continue or press anyother number for end.\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con3;
            printf("\nEnter '1' for Continue to menu or Enter anyother number for END.\n");
            scanf("%d",&opinion);
            if (opinion==1)
            goto rep;
        }
        else if(opinion==2)
        {
            updation(2);
            printf("\n");
            printf("\nEnter 1: for continue or press anyother number for end.\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con3;
            printf("\nEnter '1' for Continue to menu or Enter anyother number for END.\n");
            scanf("%d",&opinion);
            if (opinion==1)
            goto rep;
        }
        else if(opinion==3)
        {
            updation(3);
            printf("\n");
            printf("\nEnter 1: for continue or press anyother number for end.\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con3;
            if(option1==1)
            goto con3;
            printf("\nEnter '1' for Continue to menu or Enter anyother number for END.\n");
            scanf("%d",&opinion);
            if (opinion==1)
            goto rep;
        }
        else
        printf("INVALID ENTRY.\nPlease try again.\n");
    }while(opinion<1&&opinion>3);
    break;
   case 4://REPORTS//
   con4:
    printf("\n\nPress '1' for getting details of a particular Customer.\nPress '2' for finding Percentage of mobile numbers in a given district for each service provider.\nPress '3' for obtaining all customer's mobile number & their Names of a particular service provider.\n");
    scanf("%d",&opinion);
    if(opinion!=1&&opinion!=2&&opinion!=3&&opinion!=4)
    {
    printf("Invalid Input.\nEnter a Valid input.\n");
    goto con4;
    }
    if(opinion==1)
        {
            reports(1);
            printf("\n");
            printf("\nEnter 1: for continue or press anyother number for end.\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con4;
            printf("\nEnter '1' for Continue to menu or Enter anyother number for END.\n");
            scanf("%d",&opinion);
            if (opinion==1)
            goto rep;
        }
        else if(opinion==2)
        {
            reports(2);
            printf("\n");
            printf("\nEnter 1: for continue or press anyother number for end.\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con4;
            printf("\nEnter '1' for Continue to menu or Enter 'Anyother' for END.\n");
            scanf("%d",&opinion);
            if (opinion==1)
            goto rep;
        }
        else if(opinion==3)
        {
            reports(3);
            printf("\n");
            printf("\nEnter 1: for continue or press anyother for end.\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con4;
            printf("\nEnter '1' for Continue to menu or Enter 'Anyother' for END.\n");
            scanf("%d",&opinion);
            if (opinion==1)
            goto rep;
        }
    case 5:
    break;
    }
}

void validation(int x,int k)//VALIDATES CUSTOMER'S NAME & LOCALITY & DISTRICT.//
{
   char name[20];
   int j,q,i;
   bool chk;
   do
   {
    fflush(stdin);
    gets(name);
    for(i=0;i<strlen(name);i++)
    name[i]=toupper(name[i]);
    chk=true;
    for(j=0;j<=strlen(name)-1&&chk==true;j++)
    {
       if(isalpha(name[j])||isspace(name[j]))
       continue;
       else
       {
           chk=false;
           break;
       }
    }
    if(chk==false)
    {
       printf("Invalid input!\nEnter valid input :\n");
    }

    }while(chk==false);
    if(x==1)
    strcpy(arr[a].customername,name);
    else if(x==2)
    strcpy(arr[a].housename,name);
    else if(x==3)
    strcpy(arr[a].locality,name);
    else if(x==4)
    strcpy(arr[a].district,name);
    else if(x==5)
    strcpy(arr[k].housename,name);
    else if(x==6)
    strcpy(arr[k].locality,name);
    else if(x==7)
    strcpy(arr[k].district,name);
}

void phvalidation(int k)//VALIDATES MOBILE NUMBER.//
{
    int i;
    char mobnum[20];
con:
    fflush(stdin);
    gets(mobnum);
    bool inval;
    inval=true;
    if(strlen(mobnum)!=10)
    inval=false;
    else
    {
        for(i=0;i<10;i++)
        {
            if(!isdigit(mobnum[i]))
            inval=false;
        }
    }
    if(inval==false)
    {
        printf("Invalid Mobile Number.\nPlease Re-Enter.\n");
        goto con;
    }
    else
    {
        if(a!=0)
        {
            for(i=0;i<a;i++)
            {
                if(strcmp(mobnum,arr[i].mobilenumber)==0)
                {
                    printf("The number is already taken.Please give another number.\n");
                    goto con;
                }
            }
            if (k==-1)
            strcpy(arr[a].mobilenumber,mobnum);
            else
            strcpy(arr[k].mobilenumber,mobnum);
        }
        else
        strcpy(arr[a].mobilenumber,mobnum);
    }
}

void serpr(int sim,int k)//ALLOTS SERVICE PROVIDER FOR CUSTOMER.//
{
    if(sim==1)
    {
        if(k==-2)
        strcpy(arr[a].serviceprovider,"AIRTEL");
        else
        strcpy(arr[k].serviceprovider,"AIRTEL");
    }
    else if(sim==2)
    {
        if(k==-2)
        strcpy(arr[a].serviceprovider,"VODAFONE");
        else
        strcpy(arr[k].serviceprovider,"VODAFONE");
    }
    else if(sim==3)
    {
        if(k==-2)
        strcpy(arr[a].serviceprovider,"JIO");
        else
        strcpy(arr[k].serviceprovider,"JIO");
    }
    else if(sim==4)
    {
        if(k==-2)
        strcpy(arr[a].serviceprovider,"BSNL");
        else
        strcpy(arr[k].serviceprovider,"BSNL");
    }
}

void searching()//SEARCHING//
{
    int k=0,i,j,q,ser,option,option1;
    char mno[10],nam[20];
    con3:
    printf("ENTER '1' FOR SEARCHING PERSON THROUGH MOBILE NUMBER\nENTER '2' FOR GETTING LIST OF CUSTOMERS USING PARTICULAR SERVICE PROVIDER\nENTER '3' FOR SEARCHING MOBILE NUMBER THROUGH CUSTOMER NAME\n");
    scanf("%d",&option);
    switch(option)
    {
     case 1:
     {
        con2:
        printf("ENTER MOBILE NUMBER\n");//SEARCHING PERSON THROUGH MOBILE NUMBER//
        fflush(stdin);
        gets(mno);
        bool inval;
        inval=true;
        if(strlen(mno)!=10)
        inval=false;
    else
    {
        for(i=0;i<10;i++)
        {
            if(!isdigit(mno[i]))
            inval=false;
        }
    }
    if(inval==false)
    {
        printf("Invalid Mobile Number.\nPlease Re-Enter.\n");
        goto con2;
    }
      for(i=0;i<a;i++)//SEARCHES FOR MOBILE NUMBER//
      {
        if(strcmp(mno,arr[i].mobilenumber)==0)
        {
          k=1;
          j=i;
          break;
        }
        else
        k=0;
      }
      if(k==1)//prints customer details if found in directory//
      {
        printf("The customer serial number in the directory is %d\n",j+1);
        printf("The customer name is %s\n",arr[j].customername);
        printf("The customer district is %s\n",arr[j].district);
        printf("The service provider used by customer is %s\n",arr[j].serviceprovider);
      }
      else//customer not found in the directory//
      {
        printf("The mobile number is not found in the directory\n");
      }
      printf("\n press 1 for continue or press anyother for end\n");
      scanf("%d",&option1);
      if(option==1)
      goto con3;
     }break;
    case 2:
    {
        do{
        printf("enter 1 :if 'AIRTEL'\tenter 2 :if 'VODAFONE'\tenter 3 :if 'JIO'\tenter 4 :BSNL\n");
        scanf("%d",&ser);
        if (ser==1)
        {
        for(i=0;i<a;i++)
        {
            if(strcmp(arr[i].serviceprovider,"AIRTEL")==0)
            printf("%s\n",arr[i].customername);
        }
        printf("\n press 1 for continue or press anyother for end\n");
        scanf("%d",&option1);
        if(option1==1)
        goto con3;
        }
        else if(ser==2)
        {
            for(i=0;i<a;i++)
            {
                if(strcmp(arr[i].serviceprovider,"VODAFONE")==0)
                printf("%s\n",arr[i].customername);
            }
            printf("\n press 1 for continue or press anyother for end\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con3;
        }
        else if(ser==3)
        {
            for(i=0;i<a;i++)
            {
                if(strcmp(arr[i].serviceprovider,"JIO")==0)
                printf("%s\n",arr[i].customername);
            }
            printf("\n press 1 for continue or press anyother for end\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con3;
        }
        else if(ser==4)
        {
            for(i=0;i<a;i++)
            {
                if(strcmp(arr[i].serviceprovider,"BSNL")==0)
                printf("%s\n",arr[i].customername);
            }
            printf("\n press 1 for continue or press anyother for end\n");
            scanf("%d",&option1);
            if(option1==1)
            goto con3;
        }
        else
        {
            printf("INVALID INPUT\nEnter a valid input\n");
        }
    }while(ser<1&&ser>4);
    }break;
    case 3:
        {
            printf("Enter Customer name for finding mobile number:\n");
            fflush(stdin);
            gets(nam);
            for(i=0;i<strlen(nam);i++)
            nam[i]=toupper(nam[i]);
            q=0;
            for(i=0;i<a;i++)
            {
                if((strcmp(nam,arr[i].customername))==0)
                {
                    printf("The name of the customer is %s & Their mobile number is %s.\n",arr[i].customername,arr[i].mobilenumber);
                    q=1;
                }
            }
            if(q==1)
            {
                printf("\n press 1 for continue or press 2 for end\n");
                scanf("%d",&option1);
                if(option1==1)
                goto con3;
            }
            else
                {
                    printf("Entered name doesn't exist in directory.\n press 1 for continue or press 2 for end");
                    scanf("%d",&option1);
                    if(option1==1)
                    goto con3;
                }
        }
    }
}

void updation(int x)//UPDATING//
{
    int i,k=-1,option;
    char name[20];
    if(x==1)//updating customer's Housename,locality,district.//
    {
        printf("Enter Customer name to update their details.\n");
        fflush(stdin);
        gets(name);
        for(i=0;i<strlen(name);i++)
        name[i]=toupper(name[i]);
        for(i=0;i<a;i++)
        {
            if(strcmp(name,arr[i].customername)==0)
            {
                k=i;
                printf("Enter New Housename you want to change for %s.\n",arr[k].customername);
                validation(5,k);
                printf("Enter New Locality you want to change for %s.\n",arr[k].customername);
                validation(6,k);
                printf("Enter New district you want to change for %s.\n",arr[k].customername);
                validation(7,k);
                break;
            }
        }
        if(k==-1)
        printf("Customer name not found in directory.\n");
    }
    else if(x==2)//updating customer's Mobile Number.//
    {
        printf("Enter Customer's name For updating customer's mobile number.\n");
        fflush(stdin);
        gets(name);
        for(i=0;i<strlen(name);i++)
        name[i]=toupper(name[i]);
        for(i=0;i<a;i++)
        {
            if(strcmp(name,arr[i].customername)==0)
            {
                k=i;
                printf("Enter the new mobile number you want to change for %s.\n",arr[k].customername);
                phvalidation(k);
                break;
            }
        }
        if(k==-1)
        printf("Customer name not found in directory.\n");
    }
    else if(x==3)//updating of customer's service provider.//
    {
        printf("Enter Customer's mobile number For updating customer's service provider.\n");
con:
    fflush(stdin);
    gets(name);
    bool inval;
    inval=true;
    if(strlen(name)!=10)
    inval=false;
    else
    {
        for(i=0;i<10;i++)
        {
            if(!isdigit(name[i]))
            inval=false;
        }
    }
    if(inval==false)
    {
        printf("Invalid Mobile Number.\nPlease Re-Enter.\n");
        goto con;
    }
    else
    for(i=0;i<a;i++)
    {
        if(strcmp(name,arr[i].mobilenumber)==0)
            {
                k=i;
                printf("enter 1 :for changing to 'AIRTEL'\tenter 2 :for changing to 'VODAFONE'\tenter 3 :for changing to 'JIO'\tenter 4 : for changing to BSNL\n");
                scanf("%d",&sim);
                serpr(sim,k);
                break;
            }
    }
        if(k==-1)
        printf("Customer name not found in directory.\n");
   }
}

void reports(int x)//GETTING REPORTS//
{
	int i,k=-1,bim;
	float ar=0,v=0,j=0,b=0,sum;
	char number[20],name[10];
	if(x==1)//FINDING DETAILS OF A PARTICULAR CUSTOMER.//
	{
	printf("\n\nEnter Customer's mobile number for getting their details.\n");
	con:
	fflush(stdin);
    gets(number);
    bool inval;
    inval=true;
    if(strlen(number)!=10)
    inval=false;
    else
    {
        for(i=0;i<10;i++)
        {
            if(!isdigit(number[i]))
            inval=false;
        }
    }
    if(inval==false)
    {
        printf("Invalid Mobile Number.\nPlease Re-Enter.\n");
        goto con;
	}
	else
	{
		for(i=0;i<a;i++)
		{
			if(strcmp(number,arr[i].mobilenumber)==0)
			{
			printf("\n\nThe Customer's Name: %s\nThe Customer's Mobile Number: %s\nThe Customer's Service Provider: %s\nThe Customer's District: %s\nThe Customer's Locality: %s\n",arr[i].customername,arr[i].mobilenumber,arr[i].serviceprovider,arr[i].district,arr[i].locality);
			k=0;
			break;
			}
		}
		if(k==-1)
		printf("Mobile number not found.\n");
	}
	}
	else if(x==2)//FINDING PERCENTAGE OF MOBILE NUMBERS IN A GIVEN DISTRICT FOR EACH SERVICE PROVIDER.//
	{
		printf("\n\nEnter The District Name :");
		fflush(stdin);
		gets(name);
		for(i=0;i<strlen(name);i++)
		name[i]=toupper(name[i]);
		for(i=0;i<a;i++)
		{
			if(strcmp(name,arr[i].district)==0)
			{
				k=0;
				if(strcmp("AIRTEL",arr[i].serviceprovider)==0)
				ar++;
				else if(strcmp("VODAFONE",arr[i].serviceprovider)==0)
				v++;
				else if(strcmp("JIO",arr[i].serviceprovider)==0)
				j++;
				else if(strcmp("BSNL",arr[i].serviceprovider)==0)
				b++;
			}
		}
		sum=ar+v+j+b;
		if(k==-1)
		printf("District not found in the directory.\n");
		else
		{
		printf("\nThe total percentage of 'AIRTEL' users in %s is: %.1f\n",name,(ar/sum)*100);
		printf("The total percentage of 'VODAFONE' users in %s is: %.1f\n",name,(v/sum)*100);
		printf("The total percentage of 'JIO' users in %s is: %.1f\n",name,(j/sum)*100);
		printf("The total percentage of 'BSNL' users in %s is: %.1f\n",name,(b/sum)*100);
	    }
	}
	else if(x==3)//GETTING CUSTOMER DETAILS USING SPECIFIC SERVICE PROVIDER.//
	{
  con2:	printf("\n\nEnter specific service provider to find details of customer using that serivice provider.\n");
		printf("enter '1' for AIRTEL\nenter '2' for VODAFONE\nenter '3' for JIO\nenter '4' for BSNL\n");
		scanf("%d",&bim);
		if(bim==1&&bim==2&&bim==3&&bim==4)
		{
			printf("INVALID INPUT.\nENTER A VALID INPUT\n");
			goto con2;
		}
			for(i=0;i<a;i++)
			{
				if(strcmp("AIRTEL",arr[i].serviceprovider)==0&&bim==1)
				{
					printf("\n\nThe customers using 'AIRTEL':\n");
					printf("The customer NAME: %s\nThe mobile number of %s is: %s\n",arr[i].customername,arr[i].customername,arr[i].mobilenumber);
				}
			    else if(strcmp("VODAFONE",arr[i].serviceprovider)==0&&bim==2)
				{
					printf("The customers using 'VODAFONE':\n");
					printf("\nThe customer NAME: %s\nThe mobile number of %s is: %s\n",arr[i].customername,arr[i].customername,arr[i].mobilenumber);
				}
				else if(strcmp("JIO",arr[i].serviceprovider)==0&&bim==3)
				{
					printf("The customers using 'JIO':\n");
					printf("The customer NAME: %s\nThe mobile number of %s is: %s\n",arr[i].customername,arr[i].customername,arr[i].mobilenumber);
				}
				 else if(strcmp("BSNL",arr[i].serviceprovider)==0&&bim==4)
				{
					printf("The customers using 'BSNL':\n");
					printf("The customer NAME: %s\nThe mobile number of %s is: %s\n",arr[i].customername,arr[i].customername,arr[i].mobilenumber);
				}
        	}
	}
}
