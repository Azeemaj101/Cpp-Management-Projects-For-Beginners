//CRICKET RECORD KEEPING
#include<fstream>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<iostream>
using namespace std;

class data
{
 char name[30];
 int playercode;
 int M1R;
 int M2R;
 int M3R;
 int total_run;
public:
data()
{
playercode=0;
strcpy(name," ");
M1R=0;
M2R=0;
M3R=0;
total_run=0;
}

void enter_name_runs()       //TO TAKE ENTRY OF NEW RECORDS
{cout<<"\nEnter player code(Integral) : ";
 cin>>playercode;
  cin.ignore();
 cout<<"\nEnter player name : ";
 cin.getline(name,30);

 cout<<"\nFirst match run(s)    : ";
 cin>>M1R;
 cout<<"\nSecond match run(s)    : ";
 cin>>M2R;
 cout<<"\nThird match run(s)  :" ;
 cin>>M3R;
total_runs();
}
void show_record()              
{
  cout<<"\nPlayer name          : "<<name;
  cout<<"\nPlayer code          :"<<playercode;
  cout<<"\nFirst match run(s)   :" <<M1R;
  cout<<"\nSecond match run(s)  :" <<M2R;
 cout<<"\nThird match run(s)   : "<<M3R;
 cout<<"\nTotal run(s)         :" <<total_run;
}
void total_runs()                
{
total_run=M1R+M2R+M3R;
}
int getplayercode()
{
return playercode;
}
int gettotalruns()
{
return total_run;
}
char* get_name()
{
return name;
}

void modify_data()                   //TAKE DATA TO MODIFIFY EXISTING RECORD
{
cout<<"\nEnter new data for modification ::::::::" ;
cout<<"\nEnter First match run(s) :" ;
cin>>M1R;
cout<<"\nEnter Second match run(s) :" ;
cin>>M2R;
cout<<"\nEnter Third match run(s) : ";
cin>>M3R;
total_runs();
} };
data d;
fstream file;
fstream file1;
//*  *  *  *  *  *  *  *  *  *  CALCULATE HIGHEST RUN(s)  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
void highest()
{ 
file.open("record.txt",ios::in|ios::binary);
int post=0,tr=0,plr_code=0,run=0;

file.read((char*)&d,sizeof(d));
while(file)
{run=d.gettotalruns();
 if(run>tr)
 {post=file.tellg();
 tr=run;
 }
 file.read((char*)&d,sizeof(d));
 }file.close();
file.open("record.txt",ios::in|ios::binary);
file.seekg(post-sizeof(d));
file.read((char*)&d,sizeof(d));
file<<"\n::::::::::Highest run getter data::::::::::";
file<<"\nHighest run(s) getter code     : "<<d.getplayercode();
file<<"\nHighest run getter player is   :  "<<d.get_name();
file<<"\nPlayer total run(s) are        :" <<tr;
float avg;
avg=(tr)/3;
cout<<"\n    Player average is              : "<<avg;
file.close();
file.eof();
}
//*  *  *  *  *  *  *  *  *  *  *  *  INSERT NEW RECORD(s)  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
void insert()
{
int i,no;
file.open("record.txt",ios::in|ios::app|ios::binary);
cout<<"\n         3  ::Entry of new record(s)::  "        ;
cout<<"\nHow many record(s) you want to enter : ";
cin>>no;
for(i=1;i<=no;i++)
{
d.enter_name_runs();               //insert  records
file.write((char*)&d,sizeof(d));
}
file.close();
}
//*  *  *  *  *  *  *  *  *  *  *  *  *  DISPLAY EXISTING RECORD(s)   *  *  *  *  *  *  *  *  *  *  *  *  *  *
void display()
{file.open("record.dat",ios::in|ios::binary);
cout<<"\n|||||||||||||||||||||| Entered record(s) ||||||||||||||||||||||||";
file.read((char*)&d,sizeof(d));
while(file)
{d.show_record();
file.read((char*)&d,sizeof(d));
}file.close();
}
//*  *  *  *  *  *  *  *  *  *  *  *  * SEARCH RECORD *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
void search()
{int p,r,srch=0;
file.open("record.dat",ios::in|ios::binary);
cout<<"\nEnter the player code to see his records :" ;
cin>>r;
file.seekg(0);
file.read((char*)&d,sizeof(d));
while(file)
{p=d.getplayercode();
 if(r==p)
 {d.show_record();
  srch=1;
  break;
 }
 else
 { file.read((char*)&d,sizeof(d));
 }
}file.close();
if(srch==0)
{cout<<"\nThere is no record which have this playercode .";
}
}
//*  *  *  *  *  *  *  *  *  *  *  *  *  *  MODIFY DATA *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
void modify()
{int posi=0,got=0,dmd=0;
 cout<<"\nEnter the playercode whose record to be modified :" ;
 cin>>dmd;
int ifdata=1;
 file.open("record.dat",ios::in|ios::out|ios::binary);
 posi=file.tellg();
 while(file)
{ file.read((char*)&d,sizeof(d));
 got=d.getplayercode();
   if(dmd==got)
         {file.seekg(posi);
   d.modify_data();
   ifdata=2;
   file.write((char*)&d,sizeof(d));
         break;
         }
         posi=file.tellg();
}
file.close();
if(ifdata==1)
{cout<<"\n           Data not available for modification         ";
}
}
//*  *  *  *  *  *  *  *  *  *  *  *  *  *  * DELETE RECORD*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
void delete_record()
{int pointer=0,remove_record=0,size=0,code_get=0;
// size=sizeof(file);
 cout<<"\n Enter the player code whose record to be deleated :" ;
 cin>>remove_record;
 file.open("record.dat",ios::in|ios::out|ios::binary);
 file1.open("tempo.dat",ios::in|ios::out|ios::binary);
 file.seekg(0);
 while(file)
 {file.read((char*)&d,sizeof(d));
  code_get=d.getplayercode();
  if(remove_record==code_get)
  {cout<<" " ;
  }
  else
  { file1.write((char*)&d,sizeof(d));
  }
}file.close();
file1.close();
remove("record.dat");
rename("tempo.dat","record.dat");
}
//*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
int main()
{
//system("cls");
int choice;
char ans='n';
do
{cout<<"\n=*=*=*=*=*=*=*=*=* PLAYER RECORD KEEPING SYSTEM *=*=*=*=*=*=*=*=*=*";
cout<<"\n 1.INSERT RECORD \n 2.DISPLAY RCEORD \n 3.SEARCH RECORD \n 4.MODIFY RECORD \n 5.HIGHEST RUNS \n 6.DELETE PREVIOUS ENTERED RECORD \n 7.EXIT  ";
cout<<"\n Enter any one of the options :" ;
cin>>choice;

switch(choice)
{case 1: insert();
 break;
 case 2: display();
 break;
 case 3: search();
 break;
 case 4: modify();
 break;
 case 5: highest();
 break;
 case 6: delete_record();
 break;
 case 7: exit(0);
 break;
default: cout<<"\n Enter choice between 1 to 6" ;
}
cout<<"\n Do you want to choose any other option ? :(y/n): ";
cin>>ans;
//system("cls");

}while(ans=='y'||ans=='Y');
getch();
}
