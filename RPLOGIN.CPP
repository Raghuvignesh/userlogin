#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{int a,pa,pa1,re,login,pa2,ra,ra1;
char un[10],un1[10],un2[10],i[6]="raghu";
clrscr();
printf("  New User-1\n\n\n  Already existing User-2\n\n\nPress the number to selct\n");
scanf("%d",&a);
	if(a==1)
     j1: {	{clrscr();
	printf("UserName\n");
	scanf("%s",&un);
	printf("Set a new Password(4 digit numbers)\n");
	scanf("%d",&pa);
	printf("Renter password\n");
	scanf("%d",&re);
	if(pa==re)
	{clrscr();
	printf("Your Account was created succesfuly");
	printf("\n\n\nLogin-1\n\nPress the number to select\n\n");
	scanf("%d",&login);
	if(login==1)
       j:	{{clrscr();
	printf("User Name\n");
	scanf("%s",&un1);
	printf("\n\nPassword\n");
	scanf("%d",&pa1);
	if((strcmp(un,un1)==0)&&(re==pa1))
	{clrscr();

	printf("Welcome %s \nyour dash boarde",un);}
	else
	{printf("UserName or Password is incorrect");
	printf("\n\nPress 1 to re enter\n");
	scanf("%d",&ra);
	if(ra==1)
	{goto j;}
	}}}
	else
	printf("Choose correct option");}
	else
	{printf("RE Enterd password is not matched\n");
	printf("Enter 1 to re enter");
	scanf("%d",&ra1);
	if(ra1==1)
	{goto j1;}}}  }
	else if(a==2)
	{clrscr();
	printf("UserName\n");
	scanf("%s",&un2);
	printf("Password\n");
	scanf("%d",&pa2);
	if((strcmp(un2,i)==0)&&(pa2==4123))
	{clrscr();
	printf("Welcome Raghu,\nYour Dash Boared\n");
	}
	else
	printf("Your UserName or Password is incorrect");
	}
	getch();
	}
