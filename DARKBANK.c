#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
int ot,type,an,ns,pay,i,n,XIV = 0;
char v;
int PRICE=0,MONEY;
int A[24] = {200,300,234,534,234,65,343984,234556,34563,34636,34352,345349,34,45,54,65,32,43,834,655,345,455,334,233};
struct atm
{
	char name[100],address[100],col[50];
	int age,bal,depo,with,aad,accno,ini,loan,sal,cdno,ddno,phone,paccno,d1,d2,cvv;
}a;
void pause()
{
	int j;
	for(j = 0; j < 99999999; j++){}
}
scare(char A[])
{
	int i,j;
	for(i = 0; i < 100; i++)
	{
		if(A[i] == '\0'){break;}
		printf("%c", A[i]);
		for(j = 0; j < 9999999; j++){}
	    if(A[i] == ',' || A[i] == '!')
		{
			for(j = 0; j < 99999999; j++){}for(j = 0; j < 99999999; j++){}for(j = 0; j < 99999999; j++){}
	    }
	}
}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds); 
} 
  
void head()
{
	printf("\n \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n");
	printf("\n                          BANK");
	printf("\n");
    printf("\n \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n");
    printf("\n");
}
void atm()
{
	system("cls");
	head();
	scare("\n CHOOSE ACCOUNT TYPE: ");
	scare("\n ");
	scare("\n 1. Zero balance account");
	scare("\n 2. Current account");
	scare("\n 3. Credit card account");
	scare("\n ");
	while(ot < 1 || ot > 3)
	{
		ot = getch() - 48;
	}
	switch(ot)
	{
		case 1 : 
		{
				 scare("\n Name: ");
				 fflush(stdin);
				 gets(a.name);
				 scare("\n Age: ");
				 scanf("%d",&a.age);
				 if(a.age<=18)
				 {
				 	system("color 0C");
				 	scare("\n ACCOUNT CREATION UNSUCCESSFUL");
				 	scare("\n ");
				 	pause();
				 	system("color 0B");
				 	scare("\n You're not eligible to create a bank account");
				 	getch();
					pause();
					pause();
					pause();
				 }
				 else
				 {
				 	scare("\n Address: ");
				 	fflush(stdin);
				 	gets(a.address);
				 	scare("\n In order to complete KYC norms under the Government of India, ");
					scare("\n please enter your Aadhar details: ");
				 	scanf("%d",&a.aad);
				 	scare("\n ACCOUNT CREATION SUCCESSFUL");
				 	XIV++;
				 }
			}
				 break;
				 
		case 2 : 
				{
				 scare("\n Name: ");
				 fflush(stdin);
				 gets(a.name);
				 scare("\n Age: ");
				 scanf("%d",&a.age);
				 if(a.age<=18)
				 {
				 	system("color 0C");
				 	scare("\n ACCOUNT CREATION UNSUCCESSFUL");
				 	scare("\n ");
				 	pause();
				 	system("color 0B");
				 	scare("\n You're not eligible to create a bank account");
				 	getch();
					pause();
					pause();
					pause();
				 }
				 else
				 {
				 	scare("\n Address: ");
				 	fflush(stdin);
				 	gets(a.address);
				 	scare("\n In order to complete KYC norms under the Government of India, ");
					scare("\n please enter your Aadhar details: ");
				 	scanf("%d",&a.aad);
				 	scare("\n Enter Initial Amount to be deposited: ");
				 	scanf("%d",&a.ini);
				 	pause();
				 	pause();
				 	scare("\n ACCOUNT CREATION SUCCESSFUL");
				 	XIV++;
				 }
			}
				 break;
		case 3 : 
		{
				 scare("\n Name: ");
				 gets(a.name);
				 scare("\n Age: ");
				 scanf("%d",&a.age);
				 if(a.age<=18)
				 {
				 	system("color 0C");
				 	scare("\n ACCOUNT CREATION UNSUCCESSFUL");
				 	pause();
				 	scare("\n ");
				 	system("color 0B");
				 	scare("\n You are not eligible to create an account");
				 	getch();
					pause();
					pause();
					pause();
				 }
				 else
				 {
				 	scare("\n Address: ");
				 	fflush(stdin);
				 	gets(a.address);
				 	scare("\n In order to complete KYC norms under the Government of India, ");
					scare("\n please enter your Aadhar details: ");
				 	scanf("%d",&a.aad);
				 	scare("\n Enter Initial Amount to be deposited: ");
				 	scanf("%d",&a.ini);
				 	scare("\n ACCOUNT CREATION SUCCESSFUL");
				 	XIV++;
				 	a.accno = 234234;
				 }
			}
				 break;
		default : scare("\n Wrong Choice");
	}
}

void deposit()
{if(XIV != 0){
	system("cls");
	head();
	scare("\n DEPOSIT");
	scare("\n -------");
	scare("\n");
	scare("\n Select Account Type: ");
	scare("\n 1. Zero balance account");
	scare("\n 2. Current account");
	scare("\n 3. Credit card account");
	while(type < 1 || type > 3)
	{
		type = getch() - 48;
	}
	scare("\n ");
	scare("\n ");
	switch(type)
	{
		case 1 : 
				 scare("\n Enter amount to deposited: $");
				 scanf("%d",&a.depo);
				 scare("\n ");
				 printf("\n Account no: %d", a.accno);
				 scare("\n Name: ");
				 puts(a.name);
				 a.bal=a.ini+a.depo;
				 pause();
				 pause();
				 pause();
				 printf("\n ");
				 system("color 0D");
				 printf("\n * MONEY DEPOSITED *");
				 pause();
				 pause();
				 pause();
				 system("color 0B");
				 printf("\n ");
				 printf("\n Balance : $%d",a.bal);
			
				 break;
		case 2 : 
		
				 scare("\n Enter amount to deposited: $");
				 scanf("%d",&a.depo);
				 printf("\n Account no: %d", a.accno);
				 scare("\n Name: ");
				 puts(a.name);
				 a.bal=a.ini+a.depo;
				 pause();
				 pause();
				 pause();
				 printf("\n ");
				 system("color 0D");
				 printf("\n * MONEY DEPOSITED *");
				 pause();
				 pause();
				 pause();
				 system("color 0B");
				 printf("\n ");
				 printf("\n Balance : $%d",a.bal);
		
				 break;
		case 3: 
		
				 scare("\n Enter amount to deposited: $");
				 scanf("%d",&a.depo);
				 printf("\n Account no: %d", a.accno);
				 scare("\n Name: ");
				 puts(a.name);
				 a.bal=a.ini+a.depo;
				 pause();
				 pause();
				 pause();
				 printf("\n ");
				 system("color 0D");
				 printf("\n * MONEY DEPOSITED *");
				 pause();
				 pause();
				 pause();
				 system("color 0B");
				 printf("\n ");
				 printf("\n Balance: $%d",a.bal);
				 break;
		default : scare("\n Wrong Choice");
	}
}else{scare("\n Please ensure that you create an account first.");pause();pause();pause();pause();}}
void withdraw()
{if(XIV != 0){
	system("cls");
	head();
	scare("\n WITHDRAW");
	scare("\n --------");
	scare("\n");
	scare("\n Select Account Type: ");
	scare("\n 1. Zero balance account");
	scare("\n 2. Current account");
	scare("\n 3. Credit card account");
	while(type < 1 || type > 3)
	{
		type = getch() - 48;
	}
	pause();
	pause();
	scare("\n ");
	switch(type)
	{
		case 1 :
		
				 scare("\n Enter amount to withdraw: $");
				 scanf("%d",&a.with);
				 printf("\n Account no : %d",a.accno);
				 scare("\n Name: ");
				 puts(a.name);
				 a.bal=a.bal-a.with;
				 pause();
				 pause();
				 pause();
				 printf("\n ");
				 system("color 0A");
				 printf("\n * MONEY PROCESSED *");
				 pause();
				 pause();
				 pause();
				 system("color 0B");
				 printf("\n ");
				 printf("\n Balance: $%d",a.bal);
		
				 break;
		case 2 : 
		
				 scare("\n Enter amount to withdraw: $");
				 scanf("%d",&a.with);
				 printf("\n Account no : %d",a.accno);
				 scare("\n Name: ");
				 puts(a.name);
				 a.bal=a.bal-a.with;
				 pause();
				 pause();
				 pause();
				 printf("\n ");
				 system("color 0A");
				 printf("\n * MONEY PROCESSED *");
				 pause();
				 pause();
				 pause();
				 system("color 0B");
				 printf("\n ");
				 printf("\n Balance: $%d",a.bal);
		
				 break;
		case 3:  
		
		 		 scare("\n Enter amount to withdraw: $");
				 scanf("%d",&a.with);
				 printf("\n Account no : %d",a.accno);
				 scare("\n Name: ");
				 puts(a.name);
				 a.bal=a.bal-a.with;
				 pause();
				 pause();
				 pause();
				 printf("\n ");
				 system("color 0A");
				 printf("\n * MONEY PROCESSED *");
				 pause();
				 pause();
				 pause();
				 system("color 0B");
				 printf("\n ");
				 printf("\n Balance: $%d",a.bal);
		
				 break;
		default : scare("\n Wrong Choice");
	}
}else{scare("\n Please ensure that you create an account first.");pause();pause();pause();pause();}}
void loan()
{if(XIV != 0){
	system("cls");
	head();
	scare("\n LOAN");
	scare("\n ----");
	scare("\n");
	scare("\n Enter type of loan to be processed ");
	scare("\n 1. Education loan");
	scare("\n 2. Housing loan");
	scare("\n 3. Agricultural loan");
	while(an < 1 || an > 3)
	{
		an = getch() - 48;
	}
	scare("\n ");
	switch(an)
	{
		case 1 : 
		
				 scare("\n Enter Loan Amount: $");
				 scanf("%d",&a.loan);
				 if(a.age>=15)
				 {
				 	scare("\n ");
				 	scare("\n Enter Guardian Salary: $");
				 	scanf("%d",&a.sal);
				 	scare("\n Enter Bank Collateral: $");
				 	fflush(stdin);
				 	gets(a.col);
				 	pause();
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n The loan amount is updated to your bank account");
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n LOAN SUCCESSFUL: 5% Interest");
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n Amount to be repaid within 3 years, else liable to law enforcements");
				 	pause();
				 	pause();
				 	a.bal=a.bal+a.loan;
				 	scare("\n ");
				 	printf("\n Your account balance : %d",a.bal);
	}
				 	break;
		case 2 : 
	
				 scare("\n Enter amount of loan");
				 scanf("%d",&a.loan);
				 if(a.age>=50)
				 {
				 	scare("\n ");
				 	scare("\n Enter your Salary: $");
				 	scanf("%d",&a.sal);
				 	scare("\n Enter Bank Collateral: $");
				 	fflush(stdin);
				 	gets(a.col);
				 	pause();
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n The loan amount is updated to your bank account");
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n LOAN SUCCESSFUL: 5% Interest");
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n Amount to be repaid within 5 years, else liable to law enforcements");
				 	pause();
				 	pause();
				 	a.bal=a.bal+a.loan;
				 	scare("\n ");
				 	printf("\n Your account balance : %d",a.bal);
				 }
				 	break;
		case 3 : 
	
				 scare("\n Enter Loan Amount: $");
				 scanf("%d",&a.loan);
				 if(a.age>=18)
				 {
				 	scare("\n ");
				 	scare("\n Enter your Salary: $");
				 	scanf("%d",&a.sal);
				 	scare("\n Enter Bank Collateral: $");
				 	fflush(stdin);
				 	gets(a.col);
				 	pause();
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n The loan amount is updated to your bank account");
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n LOAN SUCCESSFUL: 5% Interest");
				 	pause();
				 	pause();
				 	scare("\n ");
				 	scare("\n Amount to be repaid within 10 years, else liable to law enforcements");
				 	pause();
				 	pause();
				 	a.bal=a.bal+a.loan;
				 	scare("\n ");
				 	printf("\n Your account balance : %d",a.bal);
				 }
				 	break;
		default : scare("\n Wrong choice");
				 }
}else{scare("\n Please ensure that you create an account first.");pause();pause();pause();pause();}}
	
void bank()
{if(XIV != 0){
    system("color 0B");
	scare("\n Redirecting you to the site...");
	pause();
	pause();
	system("cls");
	system("color 0E");
	printf("\n \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	scare("\n ");
	printf("\n   < back                         AMAZON.COM                        \xE8 ");
	puts(a.name);
    printf("\n  ---------------------------------------------------------------------------");
	printf("\n              HOME       PRODUCTS      TRENDING       WISHLIST           ");
	scare("\n                            | ");
	printf("\n \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n ");
	pause();
	printf("\n "); 
	printf("\n     CLOTHES            GADGETS               BOOKS                  TOYS        ");
	pause();
	printf("\n "); 
	printf("\n A. Silk Shirt      G. Apple Watch     M. Teja's Birthday     S. Barbie Doll");
	printf("\n B. Black Hoodie    H. Fitbit V2       N. Fun with Teja       T. Transformers");
	printf("\n B. Faded Jeans     I. Samsung Note7   O. Teja's Birth        U. Stuffed Teddy");
	printf("\n D. Red Boots       J. Sony Bravia     P. Meth with Teja      V. Lego Marvel  ");
	printf("\n E. Green Sneakers  K. Google VR       Q. Teja in Space       W. Chess Set ");
	printf("\n F. Hawaii Shorts   L. Amazon Kindle   R. Teja Sticker Book   X. Hotwheels Fire");
	char b = 1;
	printf("\n ");
	printf("\n ");
	pause();
	pause();
	printf("\n SHOPPING CART (Select the items and their quantities. Press 'Z' to continue)");
	scare("\n ");
	int p = 0;
	while(b != 'z')
	{
		if(p == 8){scare("\n WHEW! THAT'S A LONG LIST!"); scare("\n ");}
		if(p == 16){scare("\n OKAY, NOW YOU'RE PUSHING IT"); scare("\n ");}
		if(p == 25){scare("\n DANG GIRL! YOU BROKE!"); scare("\n ");}
		if(p == 45){scare("\n WE'VE GOT JEFF BEZOS HERE EVERYBODY!"); scare("\n ");}
		if(p == 65){scare("\n SERVERS ABOUT TO TO CRASH"); scare("\n");}
		if(p == 75){scare("\n Jeff Bezos: 'No, I'm not buying anything right now.'"); pause();pause();pause();pause();pause();pause(); scare("\n");scare("\n OKAY SERIOUSLY, WHO IS THIS GUY?");pause();pause();pause();pause(); scare("\n"); scare("\n BILL GATES, BUYING ALL OUR STUFF ISN'T GONNA MAKE US SUFFER");scare("\n");}
		if(p == 90){scare("\n YOU'RE STILL HERE!"); scare("\n");}
		if(p == 110){pause();pause();pause();scare("\n YOU'VE BOUGHT EVERYTHING WE HAVE");pause();pause();pause();system("cls");system("color 0C");scare("ACHEIVEMENT UNLOCKED:");pause();pause();pause();scare(" DETERMINATION");break;}
		while((b < 97) || (b > 120 && b != 122))
		{
	        b = getch();
		}
		if(b == 'z'){break;}
		if(b <= 102){scare("\n > Clothing Item ");}
		else if(b <= 108){scare("\n > Gadget Item ");} 
		else if(b <= 114){scare("\n > Book Item ");} 
		else if(b <= 120){scare("\n > Toy Item ");} 
		printf("%c: ", (b-32));
		char m = 'A';
	    while(m < 49 || m > 57)
		{
		     m = getch();
		}
		int PO = (A[(b-97)] * (m - 48));
		PRICE = PO + PRICE;
	    printf("%c numbers - $%d",m, PO);
	    scare("\n");
	    b = '1';
	    m = 'A';
	    p++;
	}
	system("cls");
	pause();
	pause();
	pause();
	system("color 0B");
	scare("\n Verifying information...");
	pause();
	pause();
	pause();
	system("cls");
	head();
	scare("\n NAME: ");
	puts(a.name);
	scare("\n");
	printf("\n ACCOUNT: %d", a.accno);
	printf("\n BALANCE: $%d", a.bal);
	pause();
	pause();
	pause();
	scare("\n ");
	scare("\n ");
	printf("\n GRAND TOTAL: Rs.%d", PRICE);
	scare("\n ");
	pause();
	pause();
	pause();
	pause();
	pause();
	pause();
	if(PRICE > a.bal)
	{
		scare("\n Sorry, it doesn't look like you can afford that.");
		pause();
		pause();
		getch();
	}
	else if(PRICE == 0)
	{
		scare("\n Looks like you don't have to pay anything");
	}
	else
	{
		scare("\n ");
		scare("\n ");
		scare("\n Please enter your card number: ");
		char t1 = getch(); scare("*");char t2 = getch(); scare("*");char t3 = getch(); scare("*");char t4 = getch(); scare("*");char t5 = getch(); scare("*");
		scare("\n ");
		pause();
		pause();
		pause();
		pause();
		pause();
		pause();
		if(t1 == '1' && t2 == '2' && t3 == '3' && t4 == '4' && t5 == '5')
		{ 
			a.bal = a.bal - PRICE;
			printf("%d",a.bal);
			scare("\n TRANSACTION SUCCESSFUL");
		}
		else
		{
			pause();
			scare("\n WRONG CARD NUMBER");
			scare("\n ");
			scare("\n TRANSACTION UNSUCCESSFUL");
		}
	}
	getch();

}else{scare("\n Please ensure that you create an account first.");pause();pause();pause();pause();}}

int main()
{
	char opt;
	int ans = 0;

	{
	do
	{
	system("cls");
	system("color 0B");
	head();
	scare("\n Welcome to the DHABBA KIOSK powered by AAJPT Bank");
	scare("\n ");
	pause();
	scare("\n 1. Create an Account");
	scare("\n 2. Deposit Money");
	scare("\n 3. Withdraw Money");
	scare("\n 4. Loan Processing");
	scare("\n 5. Online Shopping");
	scare("\n 6. Exit");
	scare("\n ");
	while(ans < 1 || ans > 6)
	{
		ans = getch() - 48;
	}
	pause();
	pause();
	pause();
	switch(ans)
	{
		fflush(stdin);
		case 1 : atm();
				 break;
		case 2 : deposit();
				 break;
		case 3 : withdraw();
				 break;
		case 4 : loan();
				 break;
		case 5 : bank();
				 break;
		default : opt = 'n';
	}
    if(opt == 'n')
    {
    	scare("\n Thank you for using this service.");
		getch();
		system("cls");
		getch();
    }
    else
    {
    	scare("\n ");
    	scare("\n ");
	    scare("\n Do you want to continue? (Y/N)");
	    fflush(stdin);
	    opt = getch();
    }
    ans = 0;
}while(opt=='Y'||opt=='y');
return 0;
}
}
