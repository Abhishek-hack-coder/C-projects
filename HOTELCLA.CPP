#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class HOTEL
{
  int Rno;
  char Cname[20];
  char category[10];
  float tarrif;
  int NOD;
  float CALC();
  public:
  void checkin();
  void checkout();

};
//function to calculate & return amount as per the given category
float HOTEL::CALC()
{
  float amount;
  int c1,c2,c3;
  c1=strcmp(category,"CLUB");
  c2=strcmp(category,"SUIT");
  c3=strcmp(category,"EXECUTIVE");
  if(c1==0)
  amount=2000*NOD;
  else
  if(c2==0)
  amount=5000*NOD;
  else
  if(c3==0)
  amount=10000*NOD;
  return(amount);
}
//function to input Rno,Cname,NOD & Category
void HOTEL::checkin()
{ cout<<"\n Enter the room number:";
  cin>>Rno;
  cout<<"\n Enter customer's name:";
  gets(Cname);
  cout<<"\n Enter category (CLUB/SUIT/EXECUTIVE):";
  cin>>category;
  cout<<"\n Enter number of days:";
  cin>>NOD;
};
//function to display the data members along with bill amount
void HOTEL::checkout()
{ cout<<"\n\n\n BILL DETAILS:"<<"\n";
  cout<<"ROOM NUMBER:"<<Rno<<"\n";
  cout<<"CUSTOMER NAME:"<<Cname<<"\n";
  cout<<"ROOM CATEGORY:"<<category<<"\n";
  cout<<"NUMBER OF DAYS STAYED:"<<NOD<<"\n";
  cout<<"BILL AMOUNT TO BE PAID:"<<CALC();
}

void main()
{ HOTEL H;
  clrscr();
  cout<<"\t\t\t-:WELCOME TO HOTEL AMRAPALLI:- \n";
  H.checkin();
  cout<<"\n\n\t\tTHANKS FOR ARRIVING:\n";
  H.checkout();
  getch();
}
