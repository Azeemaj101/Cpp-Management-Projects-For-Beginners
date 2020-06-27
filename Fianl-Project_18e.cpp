#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	system("CLS");
	system("color 03");
	char n, i,I, K,k, S,s, F,f, p,P, M,m; 
	char faisalabad,karachi,sindh,Multan,pindi; 
	char cash,ATM,Transfer,Ticket;
	char press,Payment,Give;
	char length,Bill;
    char END,close;
	m=M=Multan;
	k=K=karachi;
	s=S=sindh;
	f=F=faisalabad;
	p=P=pindi;
	n=i,k,s,f,p;

	Ticket :
	cout<<setw(90)<<"*::::Welcome to PAKISTAN Railway station::::*\n";
	cout<<setw(15)<<"WHERE DO YOU WANT TO GO ?\n"<<endl;
	cout<<setw(34)<<"Press M for MULTAN \t 9AM \n"<<endl;
	cout<<setw(36)<<"Press K for KARACHI \t 12PM \n"<<endl;
	cout<<setw(32)<<"Press S for SINDH \t 4PM\n"<<endl;
	cout<<setw(37)<<"Press F for FAISALABAD \t 7PM\n"<<endl;
	cout<<setw(33)<<"Press P for PINDI \t 9PM \n"<<endl;
	cin>>n;

	if(n=='m'|| n=='M')
	{
		system("CLS");
		cout<<"Tickets for MUlTAN\t AT 9AM \n"<<endl;
		cout<<"\t:::Please Follow The Rules:::\n\n"<<endl;
		cout<<"1=Help keep our stations and trains clean.\n\n2=Fire is prohibited inside stations and trains.\n"<<endl;
		cout<<"3=Smoking is prohibited.\n\n4=Don't forget your ticket.\n\n";
		cout<<"5=Remain behind the yellow tactile pavings when waiting for trains on platforms.\n"<<endl;
		cout<<"\t::Thanks::\n\n";
	}

	else if(n=='k'|| n=='K')
	{
		system("CLS");
		cout<<"Tickets for KARACHI\t AT 12PM \n"<<endl;
		cout<<"\t:::Please Follow The Rules:::\n\n"<<endl;
		cout<<"1=Help keep our stations and trains clean.\n\n2=Fire is prohibited inside stations and trains.\n"<<endl;
		cout<<"3=Smoking is prohibited.\n\n4=Don't forget your ticket.\n\n";
		cout<<"5=Remain behind the yellow tactile pavings when waiting for trains on platforms.\n"<<endl;
		cout<<"\t::Thanks::\n\n";
	}

	else if(n=='s'||n=='S')
	{
		system("CLS");
		cout<<"Tickets for SINDH\t AT 4PM \n"<<endl;
		cout<<"\t:::Please Follow The Rules:::\n\n"<<endl;
		cout<<"1=Help keep our stations and trains clean.\n\n2=Fire is prohibited inside stations and trains.\n"<<endl;
		cout<<"3=Smoking is prohibited.\n\n4=Don't forget your ticket.\n\n";
		cout<<"5=Remain behind the yellow tactile pavings when waiting for trains on platforms.\n"<<endl;
		cout<<"\t::Thanks::\n\n";
	}

	else if(n=='f'|| n=='F')
	{
		system("CLS");
        cout<<"Tickets for FAISALABAD\t AT 7PM \n"<<endl;	
	    cout<<"\t:::Please Follow The Rules:::\n\n"<<endl;
		cout<<"1=Help keep our stations and trains clean.\n\n2=Fire is prohibited inside stations and trains.\n"<<endl;
		cout<<"3=Smoking is prohibited.\n\n4=Don't forget your ticket.\n\n";
		cout<<"5=Remain behind the yellow tactile pavings when waiting for trains on platforms.\n"<<endl;
		cout<<"\t::Thanks::\n\n";
    }

    else if(n=='p'|| n=='P')
	{
		system("CLS");
    	cout<<"Tickets for PINDI\t AT 9PM \n"<<endl;
    	cout<<"\t:::Please Follow The Rules:::\n\n"<<endl;
		cout<<"1=Help keep our stations and trains clean.\n\n2=Fire is prohibited inside stations and trains.\n"<<endl;
		cout<<"3=Smoking is prohibited.\n\n4=Don't forget your ticket.\n\n";
		cout<<"5=Remain behind the yellow tactile pavings when waiting for trains on platforms.\n"<<endl;
		cout<<"\t::Thanks::\n\n";
	}

	else
   {
	   close:
	    system("CLS");
	    cout<<"##sorry there is no train yet for your desire location.\n Please press 'T' for Try Again##\n"<<endl;
	    cin>>Ticket;
	  if(Ticket=='t' || Ticket=='T')
	    {
		 goto Ticket;
	    }
	  else
	    {
		 cout<<"*Thanks for coming *";
         goto close;
	    }
    }

length :
	 cout<<"\t:::Cabin Class:::\n\n"	;
	 cout<<"Press 'V' for VIP \n"<<endl<<"Press 'A' for First Class \n"<<endl;
	 cout<<"Press 'B' for Second class \n"<<endl<<"Press 'C' for Third class \n"<<endl;
	 cout<<"press 'D' For Local Class\n"<<endl;
	 cin>>press;
	 int L,N,e;

	 if(press=='v'||press=='V')
	   {
		   system("CLS");
	       e=5000;
	       cout<<"you selected A class. 1 Ticket = 5000\n\n";
	       cout<<":::Your Cabin is 13 , 14 & 15:::\n\n"<<endl;
	       cout<<"One Ticket = 5000.\n\n\t ::How Many Tickets Do you Want?::\n\n";
	       cout<<"\t ::Please Enter Numeric Value::=";
	       cin>>N;
	       L=N*e;
	       cout<<"\t"<<N<<" Tickets price is ="<<L<<endl<<endl;
	    }

	 else if(press=='A'||press=='a')
	   {
		   system("CLS");
		   e=3000;
		   cout<<"you selected A class. 1 Ticket = 3000\n";
		   cout<<":::Your Cabin is 10 , 11 & 12:::\n\n"<<endl;
	       cout<<"One Ticket = 3000.\n\n\t ::How Many Tickets Do you Want?::\n\n";
	       cout<<"\t ::Please Enter Numeric Value::=";
	       cin>>N;
	       L=N*e;
	       cout<<"\t"<<N<<" Tickets price is ="<<L<<endl<<endl;
	    }

	 else if(press=='B'|| press=='b')
	   {
		   system("CLS");
		   e=2500;
		   cout<<"you selected B class. 1 Ticket = 2500\n\n";
		   cout<<":::Your Cabin is 7 , 8 & 9:::\n\n"<<endl;
		   cout<<"One Ticket = 2500.\n\n\t ::How Many Tickets Do you Want?::\n\n";
	       cout<<"\t ::Please Enter Numeric Value::=";
	       cin>>N;
	       L=N*e;
	       cout<<"\t"<<N<<" Tickets price is ="<<L<<endl<<endl;
	    }

	 else if(press=='C'|| press=='c')
	    {
			system("CLS");
		    e=2000;
		    cout<<"you selected C class. 1 Ticket = 2000\n\n";
		    cout<<":::Your Cabin is 4 , 5 & 6:::\n\n"<<endl;
   	        cout<<"One Ticket = 2000.\n\n\t ::How Many Tickets Do you Want?::\n\n";
	        cout<<"\t ::Please Enter Numeric Value::=";
	        cin>>N;
	        L=N*e;
	        cout<<"\t"<<N<<" Tickets price is ="<<L<<endl<<endl;
	    }

	 else if(press=='D'|| press=='d')
	    {
			system("CLS");
		    e=1000;
		    cout<<"you selected Local. 1 Ticket = 1000\n\n";
		    cout<<":::Your Cabin is 1 , 2 & 3\n\n:::"<<endl;
		    cout<<"One Ticket = 1000.\n\n\t ::How Many Tickets Do you Want?::\n\n";
	        cout<<"\t ::Please Enter Numeric Value::=";
	        cin>>N;
	        L=N*e;
	        cout<<"\t"<<N<<" Tickets price is ="<<L<<endl<<endl;
	    }

	 else
	    {
			system("CLS");
		    cout<<"Wrong Key please Press 'U' to try Again OR Please Press Any Key To want other Train Ticket "<<endl;
		    cin>>length;
		 if(length=='U'||length=='u')
		    {
				system("CLS");
			    goto length;
		    }
		 else
		    {
				system("CLS");
			    cout<<"**Please try again form Start**";
			    goto Ticket;
		    }
	    }

	 Bill:
	 system("CLS");
	 cout<<"Bill="<<L<<"\t:::Three different ways to pay the bill:::\n\n";
	 cout<<"1=Cash Paymant?, ::Please Press 'I' For cash payment::\n"<<endl;
	 cout<<"2=Use ATM Machine?, ::Press 'G'::\n"<<endl;
	 cout<<"3=Money Transfer form Easy Paisa?, ::Press 'H'::\n"<<endl;
	 cin>>Payment;

	 if(Payment=='i' || Payment=='I')
	    {
			system("CLS");
		    goto cash;
	    }

	 else if(Payment=='g' || Payment=='G')
	    {
			system("CLS");
		    goto ATM;
	    }

     else if(Payment=='h' || Payment=='H')
	    {
			system("CLS");
		    goto Transfer;
	    }

	 else
	    {
			system("CLS");
	    	goto Bill; 	
	    }	

cash :
	{
		system("CLS");
        cout<<"\t**::Press 'J'::**\n";
	    cin>>cash;

	 if(cash=='j'||cash=='J')
		{
			int w;
			cout<<"\t**Please Insert "<<L<<"\n\n";
			cin>>w;
		    if(w>=L)
			{
		        cout<<"Remaining Money is="<<w-L<<endl<<endl;
		        cout<<"\t:::Thanks! Please Collect Your Tickets:::\n"<<endl;
				cout<<"After Collect Press Any Key";
				cin.get();
				cin.ignore();
			}
		    else
		    {
		    	cout<<"Please Enter "<<L<<" Money Any Try Again\n"<<endl;
		 	    goto cash;
		    }
	    }

	 else
		{
		    cout<<"##please Enter The Amount##\n";
		    goto cash;
		} 
	char lable;

	 lable :
	 cout<<":::press 'E' After Collecting Your Money & Tickets:::\n";
	 cin>>Give;
     if(Give=='e' || Give=='E')
        {
		 goto Give;
        }
	 else
	    {
		 goto lable;
	    }
    }

  ATM :	
    {
	 system("CLS");
	 double pin;
	 int balance=100000,amount;
	 char presss,Press;
	 char pressed;
	 char start;
	 cout<<"                          ||Welcome to Garrision Bank||"<<endl;
	 cout<<"\n"<<endl;
	 cout<<"Please Insert Your Card in slot and press (S): "<<endl;
	 cin>>start;

	if(start=='S'||start=='s')
	{
		system("CLS");
    	check :
    	cout<<"\n"<<endl;
    	cout<<"Enter your 4 Code Pin: ";
		cin>>pin;

	if(pin==1234)
	{
		cout<<"\n"<<endl;
		cout<<"Your account balance is "<<balance<<endl;
		cout<<"\n"<<endl;
		amount:
		{
		    cout<<"Please Enter "<<L<<" Rs ";
		    cin>>amount;

			if(amount<balance && amount>=L)
			{
				system("CLS");
				cout<<"Your amount is ready to Collect"<<endl;
				cout<<"\n"<<endl;
				Bank:
				cout<<"Press (Y) to collect your amount"<<endl;
				cin>>presss;
				{
					int Bank;

					if(presss=='y'||presss=='Y')
					{
						system("CLS");
					 	cout<<"\n"<<endl;
					 	cout<<"Here is Your "<<amount<<" Rs \n "<<endl;
						cout<<"\n"<<endl;
						cout<<"Your remaining Balance is: "<<balance-amount<<endl;
						cout<<"\n"<<endl;
						cout<<"Thanks to visit Garrision Bank..."<<endl;	
						cout<<"\n"<<endl;
						cout<<"Allah Hafiz\n"<<endl;
					}

					else
					{
						system("CLS");
						cout<<"\n"<<endl;
						cout<<"Dear Please Enter 'Y' \n\n";
						goto Bank;
					}
			    }
			}

			else
			{
				system("CLS");
				cout<<"\n"<<endl;
                cout<<"Dear please enter "<<L<<" Rs\n";
				cout<<"You have Insuficient Balance..."<<endl;
				cout<<"\n"<<endl;
				cout<<"Please recharge your balance..."<<endl;
				cout<<"\n"<<endl;
				cout<<"If you have mistaken to write your Amount or any thing else then re-write your Amount... "<<endl;
				cout<<"\n"<<endl;
                char retry;
                retry:
				cout<<"Press (R) to Re-enter your Amount: ";
				cin>>Press;

				if(Press=='R'||Press=='r')
				{
				 goto amount;	
				}	
                else
                {
                    goto retry;
                }
			}	
			 
		}
	}

	 else
	   {
		   system("CLS");
	       cout<<"\n"<<endl;
	       cout<<"Your Pin Code is not correct..."<<endl;
		   cout<<"\n"<<endl;
		   cout<<"Please Try Again..."<<endl;
		   cout<<"\n"<<endl;
		 int pin;
		 pin:
		 cout<<"Press (R) to Re-enter your 4 Code Pin.."<<endl;
		 cin>>pressed;
		 if(pressed=='r'||pressed=='R')
		    {
			 goto check;
		    }		
	     else
            {
             goto pin;
            }
		}
	}

		 else
           {
             goto ATM;
           }

		goto cash;  //ENDING OF ATM AND GO TO CASH
    }

Transfer :
    {
	 int n2;
	 string x,n1;
	 char r,paisa;
	 paisa :
	 system("CLS");
	 cout<<"\t\t\t ***EASY PAISA***\n\n";
	 cout<<"\t:::Please Sign in \n:::";
	 cout<<"**Enter Username & Password Without Giving Space '.' **\n\n";
	 cout<<"\t::Enter Your Number OR Username ID:: \n";
	 cin>>x;
	 cout<<"*Enter Your Password* \n";
	 cin>>n1;
	 cout<<"   Your User ID Is= *"<<x<<"* Your Password is= *"<<"*"<<n1<<endl;
	 n2=100000;
	 cout<<"**your Current Balance "<<n2<<"**"<<endl;
	 cout<<":::Please Transfer "<<L<<" RS to This Number 0324-4064060::: \n";
     cout<<"*Transfer "<<L<<" Please :::Press W:::*\n";
     cin>>paisa;

	 if(paisa=='W' || paisa=='w')
	   {
		 system("CLS");
	   	 int balence,R;
	   	 balence :
	   	 cout<<"Dear Please, Enter "<<L<<" \n\n";
	   	 cin>>R;
	   	 if(R==L)
			{
				system("CLS");
				cout<<"**Now Your Current Balence is "<<n2-L<<"**\n"<<endl;
				cout<<"||Please collect your Tickets||\n\n";
			}

		 else
		    {
				system("CLS");
		    	cout<<"******Sir please Enter "<<L<<" Amount******\n\n";
		    	goto balence;
			}
		}

	 else
	   {
		   system("CLS");
		   cout<<"##please press rigt key ##\n";
	       goto paisa;
	   }
    }

 Give :
     int b1;
	 cout<<"|::::::Thanks Allah Hafiz::::::| \n\n";
	 string a1;	 
     cin.get();
	 cin.ignore();
	 system("CLS");
	 cout<<"**::Welcome To Pakistan Railway Seat::**\n\n";
	 cout<<"|*Dear Please Enter Your Name! *|\n\n";
	 cin>>a1;
	 system("CLS");
	 cout<<"|*Dear "<<a1<<" You will arrived in 4 hour*|\n\n";
	 cout<<"*Dear "<<a1<<" You want any one*\n\n";
	 cout<<"Press Number \n";
	 cout<<"1.Wifi \n";
	 cout<<"2.Songs \n";
	 cout<<"3.ON AC \n";
	 cout<<"4.Wifi & AC \n";
	 cout<<"5.Wifi & Song \n";
	 cout<<"6.Song & AC \n";
	 cout<<"7.Wifi, Song & AC?\n\n";
	 cout<<"Press Any key if you want Nathing\n\n";
	 cin>>b1;
 
 	 switch(b1)
	{
		case 1 :
		    system("CLS");
			cout<<"*Dear "<<a1<<" :Wifi Password is (LGU123) \n\n";
			cin.get();
			cin.ignore();
			break;
		case 2 :
		    system("CLS");
		    cout<<"*Dear "<<a1<<" Song is ready to Play Please Use Handfree\n\n";
		    cin.get();
			cin.ignore();
			break;
	    case 3 :
		    system("CLS");
	    	cout<<"*Dear "<<a1<<"Ac is starting \n\n";
	    	cin.get();
			cin.ignore();
			break;
	    case 4 :
		    system("CLS");
			cout<<"*Dear "<<a1<<" :Wifi Password is (LGU123) \n\n";
			cout<<"*Dear "<<a1<<"Ac is starting \n\n";
			cin.get();
			cin.ignore();
			break;
		case 5 :
		    system("CLS");
			cout<<"*Dear "<<a1<<" :Wifi Password is (LGU123) \n\n";
			cout<<"*Dear "<<a1<<" Song is ready to Play Please Use Handfree\n\n";
			cin.get();
			cin.ignore();
			break;
		case 6 :
		    system("CLS");
		    cout<<"*Dear "<<a1<<" Song is ready to Play Please Use Handfree\n\n";
			cout<<"*Dear "<<a1<<"Ac is starting \n\n";
			cin.get();
			cin.ignore();
			break;
		case 7 :
		    system("CLS");
			cout<<"*Dear "<<a1<<" :Wifi Password is (LGU123) \n\n";
			cout<<"*Dear "<<a1<<" Song is ready to Play Please Use Handfree\n\n";
			cout<<"*Dear "<<a1<<"Ac is starting \n\n";
			cin.get();
			cin.ignore();
			break;
	    default:
	    	system("CLS");
			cout<<"*****Dear "<<a1<<" There have No Opection*****\n\n\n";
	    	cin.get();
			cin.ignore();
			break;
	}
	 int b3;
	 system("CLS");
	 cout<<"\t\t|*Dear "<<a1<<" You will arrived in 2 hour*|\n\n";
	 cout<<"*Dear "<<a1<<" You want to eat some thing?\n\n";
	 cout<<"|*Menu are given please press Number *|\n\n";
	 cout<<"Are You Hungry?\n\n";
	 cout<<"1:Rice**\n";
	 cout<<"2:Burger*\n";
	 cout<<"3:Small Pizza**\n";
	 cout<<"4:Large Pizza*\n";
	 cout<<"5:Press Any key if you are not hungry\n\n";
	 cin>>b3;

	 switch(b3)
	{
		case 1:
		    system("CLS");
			cout<<"*Dear "<<a1<<" :Deal Done::Just wait 5 minuts:: \n\n";
			cout<<"After Receving tha Oder Press Any Key";
			cin.get();
			cin.ignore();
			cout<<"*Dear "<<a1<<" :This is your Rice ::Thanks for Oder:: \n\n";
			break;
		case 2:
		    system("CLS");
			cout<<"*Dear "<<a1<<" :Deal Done::Just wait 10 minuts:: \n\n";
			cout<<"After Receving tha Oder Press Any Key";
			cin.get();
			cin.ignore();
		    cout<<"*Dear "<<a1<<" :This is your Burger ::Thanks for Oder:: \n\n";
		    break;
	    case 3:
	    	system("CLS");
			cout<<"*Dear "<<a1<<" :Deal Done::Just wait 7 minuts:: \n\n";
			cout<<"After Receving tha Oder Press Any Key";
			cin.get();
			cin.ignore();
	    	cout<<"*Dear "<<a1<<" :This is your Small Pizza ::Thanks for Oder:: \n\n";
	    	break;
	    case 4:
	    	system("CLS");
			cout<<"*Dear "<<a1<<" :Deal Done::Just wait 15 minuts:: \n\n";
			cout<<"After Receving tha Oder Press Any Key";
			cin.get();
			cin.ignore();
	    	cout<<"*Dear "<<a1<<" :This is your Large Pizza ::Thanks for Oder:: \n\n";
	    	break;
	    default:
		    system("CLS"); 
	    	cout<<"*****Dear "<<a1<<" No food*****\n\n";
			cin.get();
			cin.ignore();
			break;
	}
	int a3;
	char uber,Arrived;
	string a4;
	string a5;
	system("CLS");
	    cout<<"|*You will Just arrived in 30 minuts *|\n\n";
        cout<<"::You want **Free Uber** Car Ride ::If u want Free Uber Car Ride so Please Press '1'::\n\n";
	    cout<<"|*Because you almost arrived*|\n\n";
	    cin>>a3;

	    switch(a3)
	    {
		    case 1:
			system("CLS");
			cout<<"|::You Select Uber Ride ::|\n\n";
			cout<<"*Set Your Location*\n\n";
			cin>>a4;
			cout<<"*Set Your Destination*\n\n";
			cin>>a5;
			cout<<"*Dear "<<a1<<"Your Location is= "<<a4<<" ::Your Destination = "<<a5<<endl<<endl;
			cout<<"|*Uber Car Will come in "<<a4<<" Just in 25 minuts*|\n\n";
			cout<<"|*Dear "<<a1<<" You may to go out of Train now Becouse We ::Arrived::*|\n\n";
			cout<<"|*Also Your Free Uber Car is arrived at *|"<<a4<<endl<<endl;
			cout<<"|*Dear "<<a1<<" Thanks you for using lahore railway station*| \n";
			cout<<"Press Any key After reached in car \n";
			cin.get();
			cin.ignore();
			goto uber;
		default:
		    system("CLS");
			cout<<"*Dear "<<a1<<" ,You select No Free Uber Ride\n\n";
			cout<<"|*You Are Arrived*|\n\n";
			cout<<"*Dear "<<a1<<" You may to go out of Train now\n\n";
			cout<<"|*Dear "<<a1<<" Thanks you for using PAKISTAN RAILWAY STATION*|\n\n";
			cout<<"Press Any Key After Pic All your Bags";
			cin.get();
			cin.ignore();
			goto END;
	    }

	uber:
	    system("CLS");
		cout<<"*Dear "<<a1<<endl<<endl;
		cout<<"**Your Location is= "<<a4<<"\n"<<endl<<endl;
		cout<<"::***Your Destination = "<<a5<<endl<<endl;
		cout<<"|*You Will Just Arrived at "<<a5<<" in 30 Minuts*|\n\n"<<endl<<endl;
		cout<<"::*2 minutes before arrived Please press 'Q' \n\n::*"<<endl<<endl;
		cin>>Arrived;

		if(Arrived=='q'|| Arrived=='Q')
	{
		system("CLS");
		cout<<"|*Thanks For Using Uber Car We arrived at "<<a5<<"*|"<<endl<<endl;
		cout<<"Press Any Key After Pic All Your Bags\n";
		cin.get();
		cin.ignore();
	}

	 else
	{
		system("CLS");
		cout<<"## Waiting Please Press The Key After You Arrived ##\n\n";
		cin.get();
		cin.ignore();
		goto uber;
	}

	 END:
	{
		system("CLS");
		cout<<"**Thank You! Have a GooD Day, Allah Hafiz**";
		}
}