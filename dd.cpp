#include<time.h>
#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
using namespace std;

char userid[32];
void border();
int menu(string menus[],int options,char* ch);
void gotoxy(short a, short b) 
{
    COORD coordinates; 
    coordinates.X = a; 
    coordinates.Y = b; 
 
SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 
}
int random(int range)
{
	return (rand() % range);
}
void credits()
{system("cls");
 border();
 gotoxy(2,2);
 cout<<"This Project Was Made In Collaboration By Pranav,Allen,Vaibhav And Gopi\n";
 gotoxy(2,3);
 cout<<"Special Thanks To Mr.Pius Mathew For Giving Us The Opportunity To Do This\n";
 gotoxy(2,4);
 cout<<"Goodbye";
 getch();
 system("cls");
}
class Calculator
 {
	public:
        void Menu();
		  void design();
		  void Algebra();
		  void Power();
		  void Trig();
 };
void Calculator::design()
{
 gotoxy(13,6); cout<<"*        *";
 gotoxy(13,7); cout<<" *      * ";
 gotoxy(13,8); cout<<"  *    *  ";
 gotoxy(13,9); cout<<"   *  *   ";
 gotoxy(13,10);cout<<"    **   ";
 gotoxy(13,11);cout<<"    **     ";
 gotoxy(13,12);cout<<"   *  *   ";
 gotoxy(13,13);cout<<"  *    *	 ";
 gotoxy(13,14);cout<<" *      *  ";
 gotoxy(13,15);cout<<"*        *   ";

 gotoxy(55,6);cout<<"          ";
 gotoxy(55,7); cout<<"        /| ";
 gotoxy(55,8); cout<<"       / | ";
 gotoxy(55,9); cout<<"      /  |  ";
 gotoxy(55,10);cout<<"     /   |  ";
 gotoxy(55,11);cout<<"    /    |  ";
 gotoxy(55,12);cout<<"   /     |  ";
 gotoxy(55,13);cout<<"  /      | ";
 gotoxy(55,14);cout<<" /     __|  " ;
 gotoxy(55,15);cout<<"/_ _ _|_ |    ";


 gotoxy(45,16);cout<<"        ___ ";
 gotoxy(45,17);cout<<"       |   |";
 gotoxy(45,18);cout<<" _________________   ";
 gotoxy(45,19);cout<<"[_________________]";
 gotoxy(45,20);cout<<"     ";
 gotoxy(45,21);cout<<"       |___|";
 gotoxy(45,22);cout<<" 	      ";

 }
 void Calculator::Algebra()
 {
  double val1,val2;
  char ch;

	NEW:
	gotoxy(24,8);cout<<"Value 1";gotoxy(37,8);cout<<"Operator";gotoxy(49,8);cout<<"Value 2";gotoxy(30,20);cout<<" Press 'C' to Clear";
	gotoxy(30,22);cout<<" Press 'M' to MENU";
	gotoxy(22,9);cout<<"|-----------|";
	gotoxy(22,10);cout<<"|"; gotoxy(34,10);cout<<"|";
	gotoxy(22,11);cout<<"|-----------|";
	gotoxy(38,9);cout<<"|-----|";
	gotoxy(38,10);cout<<"|"; gotoxy(44,10);cout<<"|";
	gotoxy(38,11);cout<<"|-----|";
	gotoxy(48,9);cout<<"|-----------|";
	gotoxy(48,10);cout<<"|"; gotoxy(60,10);cout<<"|";
	gotoxy(48,11);cout<<"|-----------|";
	gotoxy(22,13);cout<<"|----------------------|";
	gotoxy(22,14);cout<<"|";gotoxy(45,14);cout<<"|";
	gotoxy(22,15);cout<<"|----------------------|";
	gotoxy(24,10);cin>>val1;
	OP:
	  gotoxy(48,9);cout<<"|-----------|";
	gotoxy(48,10);cout<<"|"; gotoxy(60,10);cout<<"|";
	gotoxy(48,11);cout<<"|-----------|";
		gotoxy(38,9);cout<<"|-----|";
	gotoxy(38,10);cout<<"|"; gotoxy(44,10);cout<<"|";
	gotoxy(38,11);cout<<"|-----|";
	gotoxy(41,10);ch=getch();
	if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'&&ch!='c'&&ch!='m')
	 {gotoxy(37,10);cout<<"INVALID";gotoxy(37,11);cout<<"Please retry";
	  getch();
	  gotoxy(37,10);cout<<"       ";gotoxy(37,11);cout<<"             ";
	  goto OP;
	 }
	  if(ch=='M')
	  return;
	  if(ch=='C')
		{gotoxy(24,10);cout<<"       ";gotoxy(37,10);cout<<"   ";
		 gotoxy (24,14);cout<<"                    ";goto NEW;
		}
	 else
		 gotoxy(41,10);cout<<ch ;
	gotoxy(49,10);cin>>val2;
	if(ch=='+')
	 {
	  gotoxy (24,14);cout<<val1<<' '<<ch<<' '<<val2<<' '<<"= "<<val1+val2;
	  val1=val1+val2;
     gotoxy(24,10);cout<<val1<<"            ";
     gotoxy(39,10);cout<<"   ";
     gotoxy(49,10);cout<<"       ";
		goto OP;
	 }
	if(ch=='-')
	 {
	  gotoxy (24,14);cout<<val1<<' '<<ch<<' '<<val2<<' '<<"= "<<val1-val2;
	  val1=val1-val2;
     gotoxy(24,10);cout<<val1<<"  ";
     gotoxy(39,10);cout<<"   ";
     gotoxy(48,10);cout<<"       ";
		goto OP;
	 }
	if(ch=='*')
	 {
	  gotoxy (24,14);cout<<val1<<' '<<ch<<' '<<val2<<' '<<"= "<<val1*val2;
	  val1=val1*val2;
     gotoxy(24,10);cout<<val1<<"  ";
     gotoxy(39,10);cout<<"   ";
     gotoxy(48,10);cout<<"       ";
		goto OP;
	 }
	if(ch=='/')
	 {
	  gotoxy (24,14);cout<<val1<<' '<<ch<<' '<<val2<<' '<<"= "<<val1/val2;
	  val1=val1/val2;
     gotoxy(24,10);cout<<val1<<"  ";
     gotoxy(39,10);cout<<"   ";
     gotoxy(48,10);cout<<"       ";
		goto OP;
	 }

 }
 void Calculator::Power()
 {
  double val1,val2;
  char ch;

	NEW:
	gotoxy(24,8);cout<<"Value 1";gotoxy(41,10);cout<<"^";gotoxy(49,8);cout<<"  Power";gotoxy(30,20);
	gotoxy(22,9);cout<<"|-----------|";
	gotoxy(22,10);cout<<"|"; gotoxy(34,10);cout<<"|";
	gotoxy(22,11);cout<<"|-----------|";
	gotoxy(38,9);cout<<"|-----|";
	gotoxy(38,10);cout<<"|"; gotoxy(44,10);cout<<"|";
	gotoxy(38,11);cout<<"|-----|";
	gotoxy(48,9);cout<<"|-----------|";
	gotoxy(48,10);cout<<"|"; gotoxy(60,10);cout<<"|";
	gotoxy(48,11);cout<<"|-----------|";
	gotoxy(22,13);cout<<"|----------------------|";
	gotoxy(22,14);cout<<"|";gotoxy(45,14);cout<<"|";
	gotoxy(22,15);cout<<"|----------------------|";
	gotoxy(24,10);cin>>val1;

	LO:
	  gotoxy(48,9);cout<<"|-----------|";
	gotoxy(48,10);cout<<"|"; gotoxy(60,10);cout<<"|";
	gotoxy(48,11);cout<<"|-----------|";
		gotoxy(38,9);cout<<"|-----|";
	gotoxy(38,10);cout<<"|"; gotoxy(44,10);cout<<"|";
	gotoxy(38,11);cout<<"|-----|";
		gotoxy(50,10);cin>>val2;
 gotoxy (24,14);cout<<val1<<' '<<"^"<<val2<<' '<<"= "<<pow(val1,val2);
	  val1=pow(val1,val2);
		gotoxy(24,10);cout<<val1<<"            ";
			gotoxy(49,10);cout<<"       ";
		 gotoxy(30,17);cout<<"Press any ch to continue";
		 gotoxy(30,18);cout<<"Press'C' to clear";
			 gotoxy(30,19);cout<<"Press 'M' for menu";
			 ch=getch();
		  if(ch=='m')
		  return;
		  if(ch=='c')
		{gotoxy(24,10);cout<<"       ";gotoxy(37,10);cout<<"   ";
		 gotoxy (24,14);cout<<"                    ";goto NEW;
		}


			goto LO;
 }
void Calculator::Trig()
 { gotoxy(15,7);cout<<"1.'S'in\n";
  gotoxy(15,9);cout<<"2.'C'os"<<endl;
  gotoxy(15,11);cout<<"3.'T'an\n";
  char ch;
  float val;
  gotoxy(35,14);ch=getch();
  ME:
  gotoxy(35,16);cout<<"                               ";
	gotoxy(34,18);cout<<"                                     ";
  if(ch=='s')
  {
	gotoxy(35,14);cout<<"sin(    )";
	gotoxy(39,14);cin>>val;
	gotoxy(35,16);cout<<"= "<<sin(val*(3.1415/180));
	gotoxy(34,18);cout<<"Choose option or Press 'M' for Menu";
	ch=getch();
	if(ch=='m')
	return;
	else
	goto ME;
	}
  if(ch=='c')
  {
	gotoxy(35,14);cout<<"cos(    )";
	gotoxy(39,14);cin>>val;
	gotoxy(35,16);cout<<"= "<<cos(val*(3.1415/180));
	gotoxy(34,18);cout<<"Choose option or Press 'M' for Menu";
	ch= getch();
	if(ch=='m')
	return;
	else
	goto ME;
	}
	if(ch=='t')
  {
	gotoxy(35,14);cout<<"tan(    )";
	gotoxy(39,14);cin>>val;
	gotoxy(35,16);cout<<"= "<<tan(val*(3.1415/180));
	gotoxy(34,18);cout<<"Choose option or Press 'M' for Menu";
	ch=getch();
	if(ch=='m')
	return;
	else
	goto ME;
	}
 }
 void Calculator::Menu()
 {
	RE:
	system("cls");border();
  string calc[]={"Basic Math","Trigonometry","Exponential","Back"};
  switch(menu(calc,4,"Calculator"))
  {
	case 1: system("cls");
			  border();
			 gotoxy(15,6);cout<<"Operators: +, -, * , /";
			 Algebra();

			 goto RE;
	case 2:system("cls");
			border();
			 gotoxy(15,6);cout<<"TRIGNOMETRY";
			  Trig();
			 goto RE;
	case 3:system("cls");border();
			gotoxy(12,7) ;cout<<"POWERS";
			Power();
			goto RE;
	 case 4:return;
	}
   }
//CALC END
void heading(char ch[]);
//CONTACTS START
class Contacts
{ public:
	char name[30];
	char number[30];
	char email[40];
	int state;
	void Menu();
	void Addcontact();
	void Delete();
	void Display();
};
  void Contacts::Menu()
 {int option;
	char ch;
	RE:
	system("cls");
	border();
	string CONTACTS[]={"Add Contacts","Delete Contacts","Display Contacts","Exit"};
   switch(menu(CONTACTS,4,"CONTACTS"))
  {
	case 1: system("cls");
			  border();
			  Addcontact();
			  break;
  case 2:  system("cls");
			  border();
			  Delete();
			  break;
  case 3:  system("cls");
			  border();
			  Display();
   		  break;
  case 4:  return;
  };
  goto RE;
 }

void Contacts::Addcontact()
{Contacts c;BE:
gotoxy(20,18);cout<<"Press 'A' to Add another contact";
gotoxy(20,20);cout<<"Press 'M' to Return to Menu";
ofstream fout("ontactsss.dat",ios::app|ios::binary);
gotoxy(20,9); cout<<"Enter Details of contact to be added";
gotoxy(20,12);cout<<"Name:-";
gotoxy(20,14);cout<<"Number:-";
gotoxy(20,16);cout<<"Email ID:-";
gotoxy(27,12);gets(c.name);
gotoxy(29,14);gets(c.number);
gotoxy(31,16);gets(c.email);
c.state=1;
fout.write((char*)&c,sizeof(c));
fout.close();
RE:
char ch=getch();
			  if(ch=='A'||ch=='a')
				goto BE;
				else
						if(ch=='M'||ch=='m')
						 return;
				 else
						{gotoxy(20,21);cout<<"Retry";
						 getch();gotoxy(20,21);cout<<"        ";
						 goto RE;
						 }
}
void Contacts::Delete()
{ int choice;
  string DEL[]={"Name","Number","Email ID","Exit"};
  choice=menu(DEL,4,"Delete According To");
 system("cls");border();
  fstream fin("ontactsss.dat",ios::in|ios::out|ios::binary);
  Contacts c;
  char s[40];
 int x=0;
  if(choice==1)
	 {
	  gotoxy(20,12);cout<<"Name:-";gotoxy(27,12);gets(s);
		}

	  if(choice==2)
	 {
	  gotoxy(20,12);cout<<"Number:-";gotoxy(28,12);gets(s);


	 }
	  if(choice==3)
	 {
	  gotoxy(20,12);cout<<"Email ID:-";gotoxy(31,12);gets(s);

	  }
     if(choice==4)
     {system("cls");return;}
  while(fin.read((char*)&c,sizeof(c)))
  {
	 if(choice==1)
	 {
	  if (strcmp(s,c.name)==0)
		{c.state=0;
		 fin.seekp(fin.tellg()-sizeof(c),ios::beg);
		 fin.write((char*)&c,sizeof(c));
		  x=1;
		}
	 }
	  else
	  if(choice==2)
	 {
	  if (strcmp(s,c.number)==0)
		{c.state=0;
		 fin.seekp(fin.tellg()-sizeof(c),ios::beg);
		 fin.write((char*)&c,sizeof(c)); x=1;
		}

	 }
	  else
	  if(choice==3)
	 {
	  if (strcmp(s,c.email)==0)
		{c.state=0;
		 fin.seekp(fin.tellg()-sizeof(c),ios::beg);
		 fin.write((char*)&c,sizeof(c));    x=1;
		}
	  }


	}
	system("cls");
			  border();
			  if(x==1)
				  {gotoxy(18,15);cout<<"CONTACT DELETED";return;
			  }
			  else
				  {gotoxy(18,15);cout<<"CONTACT NOT FOUND";  return;
				  }
	fin.close();
}

void Contacts::Display()
{  int i=10;
	Contacts c;
 ifstream fin("ontactsss.dat",ios::in|ios::binary);
 for(int k=14;k<70;k++)
 {gotoxy(k,7);cout<<'-';gotoxy(k,21);cout<<'-';gotoxy(k,9);cout<<'-';
 }
 for(int j=8;j<21;j++)
 {gotoxy(14,j);cout<<'|';gotoxy(34,j);cout<<'|';gotoxy(49,j);cout<<'|';gotoxy(70,j);cout<<'|';
 }
 gotoxy(15,8);cout<<"        NAME";gotoxy(35,8);cout<<"     NUMBER";gotoxy(50,8);cout<<"        EMAIL"<<endl;
 while(fin.read((char*)&c,sizeof(c)))
 {
	 if(c.state==1)
	 {
	  gotoxy(15,i);cout<<c.name;gotoxy(35,i);cout<<c.number;gotoxy(50,i);cout<<c.email<<endl; i++;
	  }
  }
  fin.close();
 }
//CONTACTS END
//LOGIN START
int login()
{border();
char password[32],ch,user[][10]={"Admin","PASSWORD"};
int i=0,n=0;
long j;
system("cls");
border();
gotoxy(25,12);
cout<<"PRESS ANY KEY TO CONTINUE";
getch();
START:
system("cls");
border();
gotoxy(25,10);
cout<<"LOGIN:"<<" ";
gets(userid);
gotoxy(25,12);
cout<<"PASSWORD:"<<" ";
while(TRUE)
{
ch=getch();
if(ch==8 && i!=0)
{i--;
password[i]=' ';
cout<<'\b';
cout<<' ';
cout<<'\b';	
}
else if(ch==13)
{
password[i]='\0';
gotoxy(27,15);
cout<<"SIGNING IN..."<<endl;
for(long k;k<5000000;k++);
break;
}
else
{
password[i]=ch;
cout<<password[i];
++i;
// cout<<"*";
}
}
if(strcmp(userid,user[0])&&strcmp(password,user[1]))
{
system("cls");
border();gotoxy(25,2);
cout<<"WELCOME TO DIGITAL DIARY,"<<" "<<userid<<endl;
getch();
return 1;
}
else if(i<6)
{gotoxy(27,15);
cout<<"MINIMUM PASSWORD CHARACTERS REQUIRED = 6"<<endl<<"CLICK TO CONTINUE";
getch();
system("cls");
goto START;
}
else if(n<=2)
{gotoxy(27,15);
cout<<"SORRY, TRY AGAIN"<<endl;
++n;
getch();
system("cls");
goto START;
}
else
{ gotoxy(27,15);
cout<<"THANK YOU";
}
return 0;
}//LOGIN END
//AESTHETIC START
void heading(char ch[])
 { long k;
	int i,j;
  gotoxy(35,4);cout<<ch;
  for(i=42,j=41;i<77;i++,j--)
	 {  for(k=0;k<6500000;k++);
		gotoxy(i,5);cout<<"=";
		gotoxy(j,5);cout<<"=";
		gotoxy(i,3);cout<<"=";
		gotoxy(j,3);cout<<"=";
		gotoxy(7,4);cout<<"|";
		gotoxy(76,4);cout<<"|";
    }
 }

struct POS
{int X;
 int Y;
};
void border()
{int i;
	gotoxy(0,0);
   cout<<"+";
	for(i=1;i<79;i++)
		cout<<"-";
	gotoxy(80,0);
   cout<<"+";
	for(i=1;i<24;i++)
	{	gotoxy(0,i);
		cout<<"|";
		gotoxy(80,i);
		cout<<"|";
	}
   gotoxy(0,24);
   cout<<"+";
	for(i=2;i<80;i++)
	{	gotoxy(i,24);
		cout<<"-";
	}
   gotoxy(80,24);
   cout<<"+";
}//AESTHETIC END
//TIME START
struct TimeZone
{int hr;
 int m;
};
char Zone();
TimeZone C, GMT;
void time()
{char ch;
 TimeZone temp;
border();
gotoxy(30,2);
cout<<"Enter Current TimeZone";
 cin>>C.hr>>C.m;

 system("cls");
 border();
 GMT.hr=-C.hr;
 GMT.m=-C.m;
 TimeZone IST={GMT.hr+5,GMT.m+30},BST={GMT.hr+3,GMT.m},NYT={GMT.hr-4,GMT.m},SYD={GMT.hr+10,GMT.m},TYO={GMT.hr+9,GMT.m};
 temp.hr=0;
 temp.m=0;
UP:
 system("cls");
 border();
 gotoxy(28,22);
 cout<<"Press O for options";


int x=1,y=0,z=0;
while(x)
{time_t Cur;
 time(&Cur);
 struct tm *Time=localtime(&Cur);
gotoxy(35,10);
if((Time->tm_min+temp.m)>=60)
{Time->tm_hour++;
Time->tm_min=Time->tm_min-60+temp.m;
y=1;
}
else if((Time->tm_min+temp.m)<0)
{Time->tm_hour--;
Time->tm_min=Time->tm_min-temp.m+60;
y=1;}
if((Time->tm_hour+temp.hr)>=24)
{Time->tm_hour=Time->tm_hour+(temp.hr-24);
 z=1;
 }
else if((Time->tm_min+temp.m)<0)
{Time->tm_hour=Time->tm_hour+(24+temp.hr);
 z=1;
 }
 if(z==0)
if((Time->tm_hour+temp.hr)<10)
 cout<<0<<(Time->tm_hour+temp.hr)<<":";
 else cout<<(Time->tm_hour+temp.hr)<<":";
 else
 if((Time->tm_hour)<10)
  cout<<0<<(Time->tm_hour)<<":";
 else cout<<(Time->tm_hour)<<":";
 if(y==0)
if((Time->tm_min+temp.m)<10)
 cout<<0<<(Time->tm_min+temp.m)<<":";
 else cout<<(Time->tm_min+temp.m)<<":";
 else
 if((Time->tm_min)<10)
 cout<<0<<(Time->tm_min)<<":";
 else cout<<(Time->tm_min)<<":";

if(Time->tm_sec<10)
 cout<<0<<Time->tm_sec;
 else cout<<Time->tm_sec;
  if(kbhit())
 {ch=getch();

  if(ch=='O')
   {string TIME[]={"London","India","New York","Tokyo ","Sydney","Bahrain","Current","Exit"};
    int opt=menu(TIME,8,"TIME");
    switch(opt)
    {case 1:temp.hr=GMT.hr;
 	         temp.m=GMT.m;
            break;
	  case 2:temp.hr=IST.hr;
            temp.m=IST.m;
            break;
     case 7:temp.hr=C.hr;
	         temp.m=C.m;break;
  	  case 3:temp.hr=NYT.hr;
            temp.m=NYT.m;break;
	  case 4:temp.hr=TYO.hr;
 	temp.m=TYO.m;break;
	  case 5:temp.hr=SYD.hr;
   temp.m=SYD.m;break;
     case 6:temp.hr=BST.hr;
    temp.m=BST.hr;break;
     case 8:return;
    };
   goto UP;
 }
}}
}

 //TIME END

 //CONV START
void con()
{system("cls");
 int x,l,a,s,w;
 double L,A,S,W;
  char confirm;
string CONV[]={"LENGTH","AREA","SPEED","WEIGHT","EXIT"};
string LENGTH[]={"KM TO M","M TO CM","INCH TO CM","FOOT TO INCH","YARD TO FOOT","MILE TO KM","EXIT"};
 string AREA[]={"SQ FOOT TO SQ INCH","SQ FOOT TO SQ CM","SQ YARD TO SQ FOOT","ACRE TO SQ FOOT","HECTARE TO SQ M","SQ KM TO HECTARE","SQ MILE TO SQ KM","SQ MILE TO ACRE","EXIT"};
 string SPEED[]={"MPS TO KMPH","MPH TO KMPH","KNOT TO MPH","MPH TO FOOT PER SECOND","EXIT"};
 string WEIGHT[]={"KG TO G","OUNCE TO G","POUND TO OUNCE","KG TO POUNDS","STONE TO POUNDS","TON TO KG","EXIT"};
   CONFIRM:

switch(menu(CONV,5,"CONVERTOR"))
  {case 1:
         system("cls");

          LENGTH:
          switch(menu(LENGTH,7,"LENGTH"))
 	   		 {case 1:
		 				system("cls");border();gotoxy(2,2);
						cout<<"YOU HAVE CHOSEN KILOMETER TO METER CONVERSION"<<endl;
                  LENGTH1:gotoxy(2,3);cout<<"ENTER VALUE:";
						cin>>l;
						gotoxy(2,4);cout<<l<<" "<<"KILOMETERS="<<1000*l<<" "<<"METERS"<<endl;
                  CONFIRML1:
						gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
  						confirm=getch();
                  if(confirm='Y')
						{
						system("cls");border();gotoxy(2,2);
						goto LENGTH1;
						}
						else if(confirm=='N')
                  {getch();
                   system("cls");border();gotoxy(2,2);
                   goto LENGTH;}
                  else
                  goto CONFIRML1;


              case 2:
						system("cls");border();gotoxy(2,2);
                 cout<<"YOU HAVE CHOSEN METER TO CENTIMETER CONVERSION"<<endl;
						LENGTH2:
                 gotoxy(2,3);cout<<"ENTER VALUE:";
                 cin>>l;
                 gotoxy(2,4);cout<<l<<" "<<"METERS="<<100*l<<" "<<"CENTIMETERS"<<endl;
                 CONFIRML2:
						gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
						confirm=getch();
						if(confirm=='Y')
                   {system("cls");border();gotoxy(2,2);
							goto LENGTH2;
                   }
						else if(confirm=='N')
                   {getch();
							system("cls");border();gotoxy(2,2);
							goto LENGTH;
                   }
						else
                   {
							cout<<"SORRY"<<endl;
							goto CONFIRML2;
							}
              case 3:
                 system("cls");border();gotoxy(2,2);
						cout<<"YOU HAVE CHOSEN INCH TO CENTIMETER CONVERSION"<<endl;
					LENGTH3:
					gotoxy(2,3);gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>l;
					gotoxy(2,4);cout<<l<<" "<<"INCHES="<<l*2.54<<" "<<"CENTIMETERS"<<endl;
					CONFIRML3:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
               confirm=getch();
					if(confirm=='Y')
               {
					system("cls");border();gotoxy(2,2);
					goto LENGTH3;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto LENGTH;
               }
					else
               {
					cout<<"SORRY"<<endl;
					goto CONFIRML3;
               }
				case 4:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN FOOT TO INCH CONVERSION"<<endl;
					LENGTH4:
               gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>l;
					gotoxy(2,4);cout<<l<<" "<<"FEET="<<l*12<<" "<<"INCHES"<<endl;
					CONFIRML4:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto LENGTH4;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto LENGTH;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRML4;
					}
				case 5:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN YARD TO FOOT CONVERSION"<<endl;
					LENGTH5:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>l;
					gotoxy(2,4);cout<<l<<" "<<"YARD="<<l*3<<" "<<"FEET"<<endl;
					CONFIRML5:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto LENGTH5;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto LENGTH;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRML5;
               }
           	case 6:
               system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN MILE TO KILOMETER CONVERSION"<<endl;
					LENGTH6:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>l;
					gotoxy(2,4);cout<<l<<" "<<"MILE="<<l*1.6093<<" "<<"KILOMETERS"<<endl;
					CONFIRML6:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto LENGTH6;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto LENGTH;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRML6;
					}
				case 7:
					system("cls");border();gotoxy(2,2);
					goto CONFIRM;
					};
	case 2:
			system("cls");border();gotoxy(2,2);
			AREA:
           switch(menu(AREA,9,"AREA"))
           {case 1:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN SQUARE FOOT TO SQUARE INCH CONVERSION"<<endl;
					AREA1:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"SQUARE FOOT="<<a*144<<" "<<"SQUARE INCHES"<<endl;
					CONFIRMA1:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto AREA1;
               }
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRMA1;
					}
           case 2:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN SQUARE FOOT TO SQUARE CENTIMETER CONVERSION"<<endl;
					AREA2:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"SQUARE FOOT="<<a*929.0304<<" "<<"SQUARE CENTIMETERS"<<endl;
					CONFIRMA2:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
               system("cls");border();gotoxy(2,2);
					goto AREA2;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
               {
					cout<<"SORRY"<<endl;
					goto CONFIRMA2;
					}
				case 3:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN SQUARE YARD TO SQUARE FOOT CONVERSION"<<endl;
					AREA3:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"SQUARE YARD="<<a*9<<" "<<"SQUARE FOOT"<<endl;
					CONFIRMA3:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto AREA3;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
               {
               cout<<"SORRY"<<endl;
					goto CONFIRMA3;
               }
            case 4:
               system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN ACRE TO SQUARE FOOT CONVERSION"<<endl;
					AREA4:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"ACRE="<<a*43560<<" "<<"SQUARE FOOT"<<endl;
					CONFIRMA4:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
               if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto AREA4;
					}
					else if(confirm=='N')
               {
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRMA4;
					}
				case 5:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN HECTARE TO SQUARE METER CONVERSION"<<endl;
					AREA5:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"HECTARE="<<a*10000<<" "<<"SQUARE METER"<<endl;
					CONFIRMA5:
               gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto AREA5;
					}
					else if(confirm=='N')
  					{
					cout<<"THANK YOU";
               getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRMA5;
					}
				case 6:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN SQUARE KILOMETER TO HECTARE CONVERSION"<<endl;
					AREA6:
					gotoxy(2,3);cout<<"ENTER VALUE:";
               cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"SQUARE KILOMETER="<<a*100<<" "<<"HECTARE"<<endl;
					CONFIRMA6:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto AREA6;
					}
					else if(confirm=='N')
					{
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRMA6;
					}
				case 7:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN SQUARE MILE TO SQUARE KILOMETER CONVERSION"<<endl;
					AREA7:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"SQUARE MILE="<<a*2.589<<" "<<"SQUARE KILOMETER"<<endl;
					CONFIRMA7:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
					{
					system("cls");border();gotoxy(2,2);
					goto AREA7;
               }
					else if(confirm=='N')
               {
					cout<<"THANK YOU";
					getch();
               system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRMA7;
					}
            case 8:
					system("cls");border();gotoxy(2,2);
					cout<<"YOU HAVE CHOSEN SQUARE MILE TO ACRE CONVERSION"<<endl;
					AREA8:
					gotoxy(2,3);cout<<"ENTER VALUE:";
					cin>>a;
					gotoxy(2,4);cout<<a<<" "<<"SQUARE MILE="<<a*640<<" "<<"ACRE"<<endl;
					CONFIRMA8:
					gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
					confirm=getch();
					if(confirm=='Y')
               {
					system("cls");border();gotoxy(2,2);
					goto AREA8;
            	}
					else if(confirm=='N')
               {
					cout<<"THANK YOU";
					getch();
					system("cls");border();gotoxy(2,2);
					goto AREA;
					}
					else
					{
					cout<<"SORRY"<<endl;
					goto CONFIRMA8;
					}
  				case 9:
					system("cls");border();gotoxy(2,2);
					goto CONFIRM;
					};
  case 3:
  		system("cls");border();gotoxy(2,2);
		SPEED:
		switch(menu(SPEED,5,"SPEED"))
           {case 1:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN METER PER SECOND TO KILOMETER PER HOUR CONVERSION"<<endl;
				SPEED1:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>s;
				gotoxy(2,4);cout<<s<<" "<<"METER PER SECOND="<<s*3.6<<" "<<"KILOMETER PER HOUR"<<endl;
				CONFIRMS1:
            gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto SPEED1;
				}
            else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto SPEED;
				}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMS1;
 				}
			case 2:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN MILE PER HOUR TO KILOMETER PER HOUR CONVERSION"<<endl;
				SPEED2:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>s;
				gotoxy(2,4);cout<<s<<" "<<"MILE PER HOUR="<<s*1.609<<" "<<"KILOMETER PER HOUR"<<endl;
				CONFIRMS2:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
            system("cls");border();gotoxy(2,2);
				goto SPEED2;
				}
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto SPEED;
            }
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMS2;
				}
			case 3:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN KNOT TO MILE PER HOUR CONVERSION"<<endl;
				SPEED3:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>s;
				gotoxy(2,4);cout<<s<<" "<<"KNOT="<<s*1.1507<<" "<<"MILE PER HOUR"<<endl;
				CONFIRMS3:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto SPEED3;
            }
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto SPEED;
				}
				else
				{
            cout<<"SORRY"<<endl;
				goto CONFIRMS3;
				}
			case 4:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN MILE PER HOUR TO FOOT PER SECOND CONVERSION"<<endl;
				SPEED4:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>s;
				gotoxy(2,4);cout<<s<<" "<<"MILE PER HOUR="<<s*1.4667<<" "<<"FOOT PER SECOND"<<endl;
				CONFIRMS4:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto SPEED4;
				}
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto SPEED;
				}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMS4;
				}
			case 5:
				system("cls");border();gotoxy(2,2);
				goto CONFIRM;
				};
  case 4:
		system("cls");border();gotoxy(2,2);
		WEIGHT:
		switch(menu(WEIGHT,7,"WEIGHT"))
       {case 1:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN KILOGRAM TO GRAM CONVERSION"<<endl;
				WEIGHT1:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>w;
				gotoxy(2,4);cout<<w<<" "<<"KILOGRAM="<<w*1000<<" "<<"GRAM"<<endl;
				CONFIRMW1:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
			  	goto WEIGHT1;
				}
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto WEIGHT;
				}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMW1;
				}
       	case 2:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN OUNCE TO GRAM CONVERSION"<<endl;
				WEIGHT2:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>w;
				gotoxy(2,4);cout<<w<<" "<<"OUNCE="<<w*28.3495<<" "<<"GRAM"<<endl;
				CONFIRMW2:
            gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto WEIGHT2;
				}
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto WEIGHT;
				}
				else
            {
				cout<<"SORRY"<<endl;
				goto CONFIRMW2;
				}
			case 3:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN POUND TO OUNCE CONVERSION"<<endl;
				WEIGHT3:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>w;
				gotoxy(2,4);cout<<w<<" "<<"POUND="<<w*16<<" "<<"OUNCE"<<endl;
				CONFIRMW3:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto WEIGHT3;
				}
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto WEIGHT;
				}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMW3;
				}
			case 4:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN KILOGRAM TO POUND CONVERSION"<<endl;
				WEIGHT4:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>w;
				gotoxy(2,4);cout<<w<<" "<<"KILOGRAM="<<w*2.2046<<" "<<"POUNDS"<<endl;
				CONFIRMW4:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if (confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto WEIGHT4;
				}
				else if(confirm=='N')
  				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto WEIGHT;
				}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMW4;
				}
			case 5:
				system("cls");border();gotoxy(2,2);
            cout<<"YOU HAVE CHOSEN STONE TO POUND CONVERSION"<<endl;
				WEIGHT5:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>w;
				gotoxy(2,4);cout<<w<<" "<<"STONE="<<w*14<<" "<<"POUND"<<endl;
				CONFIRMW5:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if(confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto WEIGHT5;
				}
				else if(confirm=='N')
				{
				cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto WEIGHT;
			  	}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMW5;
				}
			case 6:
				system("cls");border();gotoxy(2,2);
				cout<<"YOU HAVE CHOSEN METRIC TON TO KILOGRAM CONVERSION"<<endl;
				WEIGHT6:
				gotoxy(2,3);cout<<"ENTER VALUE:";
				cin>>w;
				gotoxy(2,4);cout<<w<<" "<<"METRIC TON="<<w*1000<<" "<<"KILOGRAM"<<endl;
				CONFIRMW6:
				gotoxy(2,5);cout<<"DO YOU WANT TO CONTINUE?"<<endl;
				confirm=getch();
				if(confirm=='Y')
				{
				system("cls");border();gotoxy(2,2);
				goto WEIGHT6;
				}
				else if(confirm=='N')
				{
	  			cout<<"THANK YOU";
				getch();
				system("cls");border();gotoxy(2,2);
				goto WEIGHT;
				}
				else
				{
				cout<<"SORRY"<<endl;
				goto CONFIRMW6;
				}
				case 7:
				system("cls");border();gotoxy(2,2);
				goto CONFIRM;
				};
	case 5:
		cout<<"THANK YOU";
      system("cls");border();gotoxy(2,2);
		return;
		};
}//CON END
 //SNAKE START
void border_snake()
{system("cls");
 border();
 int head;
 gotoxy(40,2);
 cout<<"SNAKE";
	gotoxy(4,4);
   cout<<"+";
	for(head=5;head<76;head++)
		{gotoxy(head,4);cout<<"-";}
	gotoxy(76,4);
   cout<<"+";
	for(head=5;head<20;head++)
	{	gotoxy(4,head);
		cout<<"|";
		gotoxy(76,head);
		cout<<"|";
	}
   gotoxy(4,20);
   cout<<"+";
	for(head=5;head<76;head++)
	{	gotoxy(head,20);
		cout<<"-";
	}
   gotoxy(76,20);
   cout<<"+";
	gotoxy(15,22);
	cout<<"LIVES:";
	gotoxy(55,22);
	cout<<"SCORE:";
   gotoxy(30,22);
   cout<<"STATUS:";
   gotoxy(5,23);
   cout<<"W,A,S,D to move";
   gotoxy(25,23);
	cout<<"P to Pause and Move to Resume";
	gotoxy(60,23);
	cout<<"O for Options";
}
void updateState(int x)
{
	char state[2][20]={"Playing","Paused "};
	gotoxy(37,22);
       cout<<state[x];
}
void snake()
{ srand(time(0));int s=4,score=0,lives=3;char ch;
 START:
 const int MAXlength=140;
 const long k=100000;
  RESPAWN:
  int buffer=4;
border_snake();
 gotoxy(21,22);
cout<<lives;
gotoxy(61,22);
cout<<score;

  
  POS pos[140],POS[10];
  updateState(1);
  int X=40,Y=11,currentLength=4,head=0,pointX,pointY;
  gotoxy(X,Y);
  pos[0].X=X;pos[0].Y=Y;
  cout<<"O";
  int verticalMovement=0,horizontalMovement=0;
  bool spawnPoint=false,playState=false,firstHit=true;
  while(true)
  {	POINT:
  //point spawning
    if(spawnPoint)
      {pointX=random(71)+5;
       pointY=random(14)+5;
	   for(int j=0;j<currentLength-1;j++)
     { if(pointX==pos[j].X && pointY==pos[j].Y)
		goto POINT;
     }
       gotoxy(pointX,pointY);
		 cout<<"$";
       spawnPoint=false;
 		}
      //input detection
   if(kbhit())	
    { ch=getch();
	 if(firstHit)
    	{firstHit=0;spawnPoint=true;}
     if(ch=='A'||ch=='a'&&horizontalMovement==0)
      {horizontalMovement=-1; verticalMovement=0; playState=1;
	   usleep(k);
       updateState(0);
      }
     else if(ch=='W'||ch=='w'&&verticalMovement==0)
      {horizontalMovement=0; verticalMovement=-1; playState=1;
	   usleep(k);
      usleep(k);
       updateState(0);
      }
     else if(ch=='D'||ch=='d'&&horizontalMovement==0)
     {horizontalMovement=1; verticalMovement=0; playState=1;
	  usleep(k);
      updateState(0);
     }
     else if(ch=='S'||ch=='s'&&verticalMovement==0)
     {horizontalMovement=0; verticalMovement=1; playState=1;
      usleep(k);
      usleep(k);
	  updateState(0);
     }
     else if(ch=='P'||ch=='p')
     {horizontalMovement=0; verticalMovement=0; playState=0;
      updateState(0);
     }
     else if(ch=='O'||ch=='o')
     {system("cls");border();
      gotoxy(20,2);
      cout<<"Enter Speed(9(slowest),1(fastest))";
      cin>>s;
      system("cls");
      goto START;
    }
}
  X=X+horizontalMovement;
  Y=Y+verticalMovement;
  //death by border
  if(X==3||X==77||Y==3||Y==21)
   {DEATH:
    X=0;Y=0;lives--;
    gotoxy(21,22);
    cout<<lives;
    gotoxy(pointX,pointY);
    cout<<" ";
    for(int j=0;j<currentLength;j++)
    {gotoxy(pos[j].X,pos[j].Y);
     cout<<" ";
    }
border_snake();
if(lives==0)
 goto GAMEOVER;
    goto RESPAWN;
   }
  else
   {if(X==pointX && Y==pointY)
    {
     score=score+100;
     gotoxy(61,22);
     cout<<score;
     if(currentLength<MAXlength)
     {spawnPoint=true;currentLength++;}
     else
     {spawnPoint=true;}
    }
    //OUTPUT DELAY
//    for(long k;k<10000000;k++);
   usleep(k);
    if(head<currentLength)
     {pos[head].X=X;
      pos[head].Y=Y;
      head++;
	  
     }
    if(playState&&buffer)
     {gotoxy(pos[0].X,pos[0].Y);
      cout<<" ";
      int j;
      for(int j=0;j<currentLength;j++)
       {pos[j].X=pos[j+1].X;
        pos[j].Y=pos[j+1].Y;
       }
      POS[j].X=X;
      POS[j].Y=Y;
     }
	//Death By Touch
    for(int j=0;j<head-1&&buffer==0;j++)
     { if(pos[head].X==pos[j].X &&  pos[head].Y==pos[j].Y && playState)
       goto DEATH;
     }
   gotoxy(X,Y);
   cout<<"O";
   if(buffer>0)
     {
      buffer--;
     }
	  else buffer=0;
  }
}
GAMEOVER:
gotoxy(36,11);
cout<<"GAME OVER";
getch();
usleep(k);
}
void SNAKE()
{
border_snake();
snake();
}
//SNAKE END
//MENU START
int s=0;
int menu(string name[],int options,char* ch)
{system("cls");
 border();
 heading(ch);
if(strcmp(ch,"CALCULATOR")==0)
{Calculator Cal;
  Cal.design();
 }for(int i=0,j=0;i<options;j=j+2,i++)
  {gotoxy(30,7+j);
   cout<<i+1<<"."<<name[i];
  }
 int t=0,temp,opt=1,y;
 while(true)
  { y=0;
    gotoxy(30,6+t);
    cout<<"+";
    gotoxy(50,6+t);
    cout<<"+";
    gotoxy(30,8+t);
    cout<<"+";
    gotoxy(50,8+t);
    cout<<"+";
    for(long k;k<10000000;k++);
    if(kbhit())
     {char ch=getch();
       if(ch=='W' || ch=='w')
        {if(t!=0)
         {temp=t;
          t=t-2;
          y=1;
          opt--;
         }
         }
       else if(ch=='S' || ch=='s')
       {if(t<=(2*(options-1)-1))
         {temp=t;
          t=t+2;
          y=1;
          opt++;
         }
       }
       if(ch==13)
      return opt;
      }
      if(y==1)
      {gotoxy(30,6+temp);
        cout<<" ";
       gotoxy(50,6+temp);
        cout<<" ";
       gotoxy(30,8+temp);
        cout<<" ";
       gotoxy(50,8+temp);
        cout<<" ";
       }
}
}

//MENU END
int main()
{int z=1;START:
if(/*login()==*/1)
{RE:
border();int x=0;z=0;
 Calculator Ca;Contacts Co;
 string menus[]={"CONTACTS","CALCULATOR","CONVERTOR","CLOCK","GAMES","LOGOUT","CREDITS","EXIT"};
  BACK:
 int opt=menu(menus,8,"DIGITAL DIARY");
 switch(opt)
  {case 1:system("cls");
          Co.Menu();
          break;
   case 2:system("cls");
          Ca.Menu();
          break;
   case 3:system("cls");con();break;
   case 4:system("cls");
          time();
          break;
   case 5:system("cls");goto GAMES;
   case 6:system("cls");
          goto START;
   case 7:system("cls");
          credits();
          break;
   case 8:z=1;exit(0);
  };
 if(x)
{  GAMES:
string games[]={"SNAKES","BACK"};
          switch(menu(games,2,"GAMES"))
           {case 1:SNAKE();goto GAMES;
            case 2:goto BACK;
           };
}
system("cls");
}
if(!z)
goto RE;
return 0;
}

// int main()
// {
// 	SNAKE();
// 	return 0;
// }