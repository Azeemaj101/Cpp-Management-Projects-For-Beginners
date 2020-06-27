#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;
void clinix();
void login();
void medicine();
void billing(int);
void Current_Stock();
main()
{
    clinix();
    login();
}
void clinix()
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    ifstream aj;
    char ch;
    system("CLS");
    system("color 03");
    aj.open("Welcome.txt");
    ch=aj.get();
    while(!aj.eof())
    {
        cout<<ch;
        ch=aj.get();
    }
    aj.close();
    cout <<setw(150)<<"Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
    cout <<setw(150)<<"Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
    cin.get();
    cin.ignore();
}
void login()
{
    char glogin;
    glogin:
    system("CLS");
    int a1;
    fstream fout;
    fout.open("Login-record.txt" , ios::out |ios::in | ios::app | ios::binary);
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(119)<<" _____________________________________ \n";
    cout<<setw(120)<<"| Press 1        For Customer         | \n";
    cout<<setw(120)<<"| Press 2        For Employee         | \n";
    cout<<setw(120)<<"| Press 3        For Manager          | \n";
    cout<<setw(120)<<"| Press 4        For Exit             | \n";
    cout<<setw(120)<<"|_____________________________________| \n";
    fout<<" _____________________________________ \n";
    fout<<"| Press 1        For Customer         | \n";
    fout<<"| Press 2        For Employee         | \n";
    fout<<"| Press 3        For Manager          | \n";
    fout<<"| Press 4        For Exit             | \n";
    fout<<"|_____________________________________| \n";
    cin>>a1;
    fout<<"User Enter "<<a1<<"\n";
    switch(a1)
    {
    case 1:
        {
        char b1[200];
        int z;
        fout.open("Login-record.txt" , ios::out | ios::in | ios::app | ios::binary);
        cout<<setw(60)<<"Welcome To Clinix \n";
        fout<<setw(60)<<"Welcome To Clinix \n";
        fout<<setw(40)<<"Dear Please Enter Your Name \n";
        cout<<setw(40)<<"Dear Please Enter Your Name \n";
        cin.ignore(80, '\n');
        cin.getline(b1, 200);
        fout<<"Dear "<<b1<<" How can I help you \n";
        cout<<"Dear "<<b1<<" How can I help you \n";
        int goup;
        goup:
        cout<<"Press 1 For Medicine \n";
        cout<<"Press 2 Madical Test \n";
        fout<<"Press 1 For Medicine \n";
        fout<<"Press 2 Madical Test \n";
        cin>>z;
        fout<<"User Press "<<z<<"\n";
        switch(z)
        {
            case 1:
                medicine();
                break;
            case 2:
                float d1;
                char gblushu;
                gblushu:
                cout<<"Press 1 for Check Blood Pressure \n";
                cout<<"Press 2 for Check Shuger \n";
                fout<<"Press 1 for Check Blood Pressure \n";
                fout<<"Press 2 for Check Shuger \n";
                cin>>d1;
                fout<<"User Enter "<<d1<<"\n";
                if(d1==1)
                {
                    int f1;
                    char e1;
                    char gblood;
                    gblood:
                    cout<<"Dear "<<b1<<" Please Tell me Your Blood Group \n";
                    fout<<"Dear "<<b1<<" Please Tell me Your Blood Group \n";
                    cout<<"Press \n 1 for A+ \n 2 for A-\n 3 for B+ \n 4 for B- \n 5 for O+ \n 6 for O- \n 7 for AB+ \n 8 for B+ \n";
                    fout<<"Press \n 1 for A+ \n 2 for A-\n 3 for B+ \n 4 for B- \n 5 for O+ \n 6 for O- \n 7 for AB+ \n 8 for B+ \n";
                    cin>>e1;
                    fout<<"User Enter "<<e1<<"\n";
                    if(e1=='1' ||e1=='2' ||e1=='3' ||e1=='4' ||e1=='5' ||e1=='6' ||e1=='7' ||e1=='8')
                    {
                        cout<<"Dear "<<b1<<" Please Give me Your Blood Sample \n";
                        fout<<"Dear "<<b1<<" Please Give me Your Blood Sample \n";
                        cout<<"Wait \n";
                        cout<<"After Receving Your Blood Reports Please Press Any Key To Display \n";
                        cin.get();
                        cin.ignore();
                        cout<<" ____________________________________________________________ \n";
                        cout<<"| Dear "<<b1<<" Your blood Group is "<<e1<<"                |\n";
                        cout<<"|                                                             |\n";
                        cout<<"|   Your Blood Press is 120/79    (Normal)                    |\n";
                        cout<<"|                                                             |\n";
                        cout<<"|                    Thanks For Visit Clinix                  |\n";
                        cout<<"| You Want Some medicines Press 1                             |\n";
                        cout<<"|_____________________________________________________________|\n";
                        fout<<" ____________________________________________________________ \n";
                        fout<<"|   Dear "<<b1<<" Your blood Group is "<<e1<<"                |\n";
                        fout<<"|                                                             |\n";
                        fout<<"|   Your Blood Press is 120/79    (Normal)                    |\n";
                        fout<<"|                                                             |\n";
                        fout<<"|                    Thanks For Visit Clinix                  |\n";
                        fout<<"| You Want Some medicines Press 1                             |\n";
                        fout<<"|_____________________________________________________________|\n";
                        cin>>f1;
                        if(f1==1){
                            medicine(); //stock 
                        }
                        else {
                            goto glogin;
                        }
                    }
                    else
                    {
                       cout<<"Wrong Blood Group \n";
                       cout<<"Press Any Key To Re-Enter \n";
                       fout<<"Wrong Blood Group \n";
                       fout<<"Press Any Key To Re-Enter (Wrong use of machine\n";
                       cin.get();
                       cin.ignore();
                       goto gblood;
                    }
                }
                else if(d1==2)
                {
                    int g1,h1;
                    char gshuger;
                    gshuger:
                    cout<<"Dear "<<b1<<" Please Tell me Your Blood Group \n";
                    fout<<"Dear "<<b1<<" Please Tell me Your Blood Group \n";
                    cout<<"Press \n 1 for A+ \n 2 for A-\n 3 for B+ \n 4 for B- \n 5 for O+ \n 6 for O- \n 7 for AB+ \n 8 for B+ \n";
                    fout<<"Press \n 1 for A+ \n 2 for A-\n 3 for B+ \n 4 for B- \n 5 for O+ \n 6 for O- \n 7 for AB+ \n 8 for B+ \n";
                    cin>>g1;
                    fout<<"User Enter "<<g1<<"\n";
                    if(g1==1 ||g1==2 ||g1==3 ||g1==4 ||g1==5 ||g1==6 ||g1==7 ||g1==8)
                    {
                        cout<<"Dear "<<b1<<" Please Give me Your Blood Sample \n";
                        fout<<"Dear "<<b1<<" Please Give me Your Blood Sample \n";
                        cout<<"Wait \n";
                        cout<<"After Receving Your Shuger Reports Please Press Any Key To Display \n";
                        cin.get();
                        cin.ignore();
                        cout<<" ____________________________________________________________ \n";
                        cout<<"| Dear "<<b1<<" Your blood Group is "<<g1<<"                |\n";
                        cout<<"|                                                             |\n";
                        cout<<"|   Your Shuger is      80/100    (Normal)                    |\n";
                        cout<<"|                                                             |\n";
                        cout<<"|                    Thanks For Visit Clinix                  |\n";
                        cout<<"| You Want Some medicines Press 1                             |\n";
                        cout<<"|_____________________________________________________________|\n";
                        fout<<" ____________________________________________________________ \n";
                        fout<<"|   Dear "<<b1<<" Your blood Group is "<<g1<<"                |\n";
                        fout<<"|                                                             |\n";
                        fout<<"|   Your Shuger is      80/100    (Normal)                    |\n";
                        fout<<"|                                                             |\n";
                        fout<<"|                    Thanks For Visit Clinix                  |\n";
                        fout<<"| You Want Some medicines Press 1                             |\n";
                        fout<<"|_____________________________________________________________|\n";
                        cin>>h1;
                        if(h1==1){
                        medicine();//stock 
                        }
                        else {
                            goto glogin;//Menu 
                        }
                    }
                    else
                    {
                       cout<<"Wrong Blood Group \n";
                       cout<<"Press Any Key To Re-Enter \n";
                       fout<<"Wrong Blood Group \n";
                       fout<<"Press Any Key To Re-Enter (Wrong use of machine)\n";
                       cin.get();
                       cin.ignore();
                       goto gshuger;
                    }
                }
                else
                {
                    cout<<"Wrong Key Press \n";
                    cout<<"Press any key to Re-enter \n";
                    cin.get();
                    cin.ignore();
                    goto gblushu;
                }
                fout<<"______________________________________________________NEXT___________________________________________________________\n";
        fout.close();
        break;
        default:
        {
         cout<<"Press Any Key To Try Again \n";
         cin.ignore();
         cin.get();
         system("CLS");
         goto goup;
         break;
        }
     }
    }
    case 2:
        {
        fstream fout;
        fout.open("Employee.txt" , ios::out |ios::in |ios::binary |ios::app);
        char gemployee;
    
    gemployee:
    
        string b,c;
        cout<<setw(60)<<"Welcome to clinix \n";
        cout<<setw(70)<<"Dear Please Enter your Clinix E-mail or Password \n";
        cout<<"E-Mail ID =";
        fout<<setw(60)<<"Welcome to clinix \n";
        fout<<setw(70)<<"Dear Please Enter your Clinix E-mail or Password \n";
        fout<<"E-Mail ID = \n";   // Azeem  or Taha
        cin>>c;
        fout<<"User Enter "<<c;
        cout<<"Password ="; //1234 or 1234
        fout<<"Password =\n";
        cin>>b;
        fout<<"User Enter"<<b;
        if(c=="Azeem" || c=="azeem" || c=="AZEEM" && b=="1234")
        {
            char gazeeR;
            int z;
            gazeeR:
            cout<<"Welcome Muhammad Azeem \n";
            fout<<"Welcome Muhammad Azeem \n";
            cout<<"Press 1 For See Stock \nPress 2 For Employee Info\n";
            fout<<"Press 1 For See Stock \nPress 2 For Employee Info\n";
            cin>>z;
            cout<<"User Enter "<<z<<endl;
            if(z==1)
            {
                char gstokE1;
                Current_Stock();
                 fout<<"Stock Show to Employee (Azeem)\n";
                 cin.ignore();
                 cin.get();
                 gstokE1:
                 cout<<"Press 1 For ID Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 fout<<"Press 1 For ID Menu \n";
                 fout<<"Press 2 For Main Menu \n";
                 int y;
                 cin>>y;
                 fout<<"User Enter "<<y<<endl;
                 if(y==1)
                 {
                     system("CLS");
                     goto gazeeR;
                 }               
                 else if (y==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gstokE1;
                 }
            }
            else if (z==2)
            {
                char gstkE2;
                cout<<"Your Today counter Number is 1 \n";
                fout<<"Your Today counter Number is 1 \n";
                gstkE2:
                 cout<<"Press 1 For ID Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 int f;
                 cin>>f;
                 fout<<"User Enter "<<f<<endl;
                 if(f==1)
                 {
                     system("CLS");
                     goto gazeeR;
                 }               
                 else if (f==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gstkE2;
                 }
            }
            
            else
            {
                int x;
                cout<<"Press 1 For Try Again \n Press any key for main menu \n";
                cin>>x;
                if(x==1)
                {
                    system("CLS");
                    goto gazeeR;
                }
                else
                {
                 goto glogin;   
                }
            }
        }
        else if ( c=="Taha" || c=="taha" || c=="TAHA" && b=="1234")
        {
            int w;
            cout<<"Welcome Muhammad Taha \n";
            char gtahR;
            gtahR:
            cout<<"Press 1 for Stock \npress 2 for My Information \n";
            fout<<"Press 1 for Stock \npress 2 for My Information \n";
            fout<<"Welcome Muhammad Taha \n";
            cin>>w;
            fout<<"User Enter "<<w<<endl;
            if(w==1)
            {
                char gstokE;
                Current_Stock();
                 cin.ignore();
                 cin.get();
                 gstokE:
                 cout<<"Press 1 For ID Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 fout<<"Press 1 For ID Menu \n";
                 fout<<"Press 2 For Main Menu \n";
                 int t;
                 cin>>t;
                 fout<<"User Enter"<<t<<endl;
                 if(t==1)
                 {
                     system("CLS");
                     goto gtahR;
                 }               
                 else if (t==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gstokE;
                 }
            }
            else if (w==2)
            {
                char gstkE1;
                cout<<"Your Today counter Number is 2 \n";
                fout<<"Your Today counter Number is 2 \n";
                gstkE1:
                 cout<<"Press 1 For ID Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 fout<<"Press 1 For ID Menu \n";
                 fout<<"Press 2 For Main Menu \n";
                 int T;
                 cin>>T;
                 fout<<"User Enter"<<T<<endl;
                 if(T==1)
                 {
                     system("CLS");
                     goto gtahR;
                 }               
                 else if (T==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gstkE1;
                 }
            }
            else
            {
                int X;
                cout<<"Press 1 For Try Again \n Press any key for main menu \n";
                cin>>X;
                if(X==1)
                {
                    system("CLS");
                    goto gtahR;
                }
                else
                {
                 goto glogin;   
                }
            }
        }
        else 
        { 
            cout<<"Wrong Email OR Password Please Try Again \n";
            cout<<"Press Any Key To Try Agian \n";
            cin.get();
            cin.ignore();
            goto gemployee;
        }
        fout<<"_________________________________________________________NEXT____________________________________________________________\n";
        fout.close();
        break;}       
case 3:
        {
        fstream fout;
        fout.open("Manager.txt" , ios::in | ios::out | ios::app | ios::binary);
        string a2,b2;
        char gmanager;
        gmanager:
        cout<<"Welcome Manager \n";
        cout<<"Please Enter your Email-ID or Password \n";
        fout<<"Welcome Manager \n";
        fout<<setw(50)<<"Please Enter your Email-ID or Password \n";
        cout<<"Enter The Emails \n";
        fout<<"Enter The Emails \n";
        cin>>a2;
        fout<<"User Enter "<<a2;
        cout<<"Enter The Password \n";
        fout<<"Enter The Password \n";
        cin>>b2;
        fout<<"User Enter "<<b2;
        if(a2=="Rabia" ||a2=="rabia" ||a2=="RABIA" && b2=="1234")
        {
            int c2;
            char gmangop;
            gmangop:
            system("CLS");
            cout<<"Welcome "<<a2<<" How can I help you \n";
            cout<<"Press 1 for Employee Information \n";
            cout<<"Press 2 for Stock Record \n";
            cout<<"Press 3 for Stock \n";
            cout<<"Press 4 for Show Stock Record \n";
            cout<<"Press 5 for Admin Record\n";
            fout<<"Welcome "<<a2<<" How can I help you \n";
            fout<<"Press 1 for Employee Information \n";
            fout<<"Press 2 for Stock Record \n";
            fout<<"Press 3 for Stock \n";
            fout<<"Press 4 for Show Stock Record \n";
            fout<<"Press 5 for Admin Record\n";
            cin>>c2;
            fout<<"Manager Enter"<<c2<<endl;
            switch(c2)
            {
                case 1:
                  {
                  ifstream fin;
                  char ch5,gempR;
                  system("CLS");
                  system("color 05");
                  fin.open("Employee.txt");
                  ch5=fin.get();
                  while(!fin.eof())
                {
                    cout<<ch5;
                    ch5=fin.get();
                }
                 fin.close(); //employee info
                 gempR:
                 cout<<"\nPress 1 For Admin Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 int q;
                 cin>>q;
                 if(q==1)
                 {
                     goto gmangop;
                 }               
                 else if (q==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gempR;
                 }
                 
                   break;
                  }
                case 2:
                {
                  ifstream aj;
                  char cha,gstokR;
                  system("CLS");
                  system("color 06");
                  aj.open("Stock-Record.txt");
                  cha=aj.get();
                  while(!aj.eof())
                {
                    cout<<cha;
                    cha=aj.get();
                }
                 aj.close();                                //Stock info
                 gstokR:
                 cout<<"Press 1 For Admin Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 int Q;
                 cin>>Q;
                 if(Q==1)
                 {
                     goto gmangop;
                 }               
                 else if (Q==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gstokR;
                 }
                 break;
                }
                case 3:
                { 
                 char gstok; 
                system("color 01"); 
                 Current_Stock();
                 cin.ignore();
                 cin.get();
                 gstok:
                 cout<<"Press 1 For Admin Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 int R;
                 cin>>R;
                 if(R==1)
                 {
                     goto gmangop;
                 }               
                 else if (R==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gstok;
                 }
                 break;
                }
                case 4:
                 { ifstream aj;
                  char ch1,gbilR;
                  system("CLS");
                  system("color 02");
                  aj.open("Billing.txt");
                  ch1=aj.get();
                  while(!aj.eof())
                {
                    cout<<ch1;
                    ch1=aj.get();
                }
                 aj.close();                                //billing
                 gbilR:
                 cout<<"Press 1 For Admin Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 int r;
                 cin>>r;
                 if(r==1)
                 {
                     goto gmangop;
                 }               
                 else if (r==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gbilR;
                 }
                 break;
                 }
                case 5:
                {
                  ifstream fin;
                  char ch1,gmangR;
                  system("CLS");
                  system("color 04");
                  fin.open("Manager.txt");
                  ch1=fin.get();
                  while(!fin.eof())
                {
                    cout<<ch1;
                    ch1=fin.get();
                }
                 fin.close();                                //Manager
                 gmangR:
                 cout<<"Press 1 For Admin Menu \n";
                 cout<<"Press 2 For Main Menu \n";
                 int R;
                 cin>>R;
                 if(R==1)
                 {
                     goto gmangop;
                 }               
                 else if (R==2)
                 {
                     goto glogin;
                 }
                 else
                 {
                     goto gmangR;
                 }
                 break;
                }
                default:
                  {  cout<<"Wrong Key Press \n Please Press Any Key To Try Again \n";
                    cin.get();
                    cin.ignore();
                    goto gmangop;
                 break;
                  }
            }
        }
        else 
        {
            cout<<"Wrong Key Press \n Please Press Any Key To Try Again \n";
            cin.get();
            cin.ignore();
            goto gmanager;
            break;
        }    
        fout<<"______________________________________________________NEXT_________________________________________________________\n";
        fout.close();
        break;
        }
case 4:
    cout<<"Thanks For Using---------- (****CLINIX MADICAL STORE****) \n\n";
    cout<<"*******Allah HAfiz*******";
    break;
default:
        cout<<"There have no Key Please Press any key and try again";
        cin.get();
        cin.ignore();
        goto glogin;
    
    }
}
void medicine()
{
    int c=67, k;
    char up;
    up:
	cout<<"Enter the PIN  :  ";
	cin>>k;
	if(k==c)
	{
	int i,j,k,l;
	int input = -2; //-2 just for while loop
	int L=0;
	int a=0;
		system("cls");
	cout<<"***********************************************"<<endl;
    cout<<"********************CLINIX*********************"<<endl;
	cout<<"*******************Item List*******************"<<endl;
    cout<<"***********************************************"<<endl;
	cout<<"Press 1 for  Lisinopril (Blood Pressure) \n";
	cout<<"press 2 for  Amlodipine (Blood Pressure)\n";
	cout<<"press 3 for  Losartan (Blood Pressure)\n";
	cout<<"press 4 for  Contac Cold (FLU) \n";
	cout<<"press 5 for  Sambucol Cold (FLU)\n";
	cout<<"press 6 for  Morphine (Pain Killer)\n";
	cout<<"press 7 for  Fentanyl (Pain Killer)\n";
	cout<<"press 8 for  Panadol\n";
	cout<<"press 9 for  Disprin\n";
	cout<<"press 10 for Betnowait N (Acne)\n";
	cout<<"press 11 for Polifax (Acne) \n";
	cout<<"press 12 for Brevoxyl (Acne)"<<endl;
	cout<<"press 13 for Iodex Tube (Pain)"<<endl;
	cout<<"press 14 for Injection 5CC "<<endl;
	cout<<"press 15 for Dicyclomine (Bentyl) Stomach Pain "<<endl;
	cout<<"press 16 for 1/2 liter nestle water"<<endl;
	cout<<"press 17 for Band-Aid Brand (Bandages)"<<endl;
	cout<<"press 18 for Alogliptin (Nesina)"<<endl;
	cout<<"press 19 for Celine water"<<endl;
	cout<<"press 20 for Calcium Carbonate \n";
	cout<<"press -1 for total bill"<<endl;
    cout<<"press  0 for Exit \n";
    ofstream fout;
    fout.open("Stock-Record.txt" , ios::app | ios::binary | ios::out);
	while(input!=0)
	{
		cin>>input;
		if(input==1)
		{
            int w2=1000;
            cout<<"1 Medicine=30 \n";
            fout<<"1 Medicine=30 \n";
			cout<<"Enter Quantity";
			cin>>i; // we also set the condition in (if .else ) incase user enter 1001 goto again
			fout<<"User Enter ="<<w2;
            a=a+1;
			L=L+(i*30);
            for (int w1=1; w1<=i; w1++)
            {
                w2=w2-1;
            }
            cout<<"Stock : Your Remaining Lisinopril ="<<w2<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Lisinopril ="<<w2<<endl;
            fout<<"              ......               \n";

		}
		if(input==2)
		{
            int x=1000;
            cout<<"1 Medicine=20 \n";
            fout<<"1 Medicine=20 \n";
			cout<<"Enter quantity";
			cin>>l;
            fout<<"User Enter ="<<l;
			a=a+1;
			L=L+(l*20);
            for (int x1=1; x1<=l; x1++)
            {
                x=x-1;
            }
            cout<<"Stock : Your Remaining Amlodipine ="<<x<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Amlodipine ="<<x<<endl;
            fout<<"              ......               \n";
		}
		if(input==3)
		{
            int y=1000;
            cout<<"1 Medicine=40 \n";
            fout<<"1 Medicine=40 \n";
			cout<<"Enter Quantity\n";
			cin>>j;
            fout<<"User Enter ="<<j;
			a=a+1;
			L=L+(j*40);
            for (int w1=1; w1<=j; w1++)
            {
                y=y-1;
            }
            cout<<"Stock : Your Remaining Losartan ="<<y<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Losartan ="<<y<<endl;
            fout<<"              ......               \n";
		}
		if (input==4)
		{
            int z=1000;
            cout<<"1 Medicine=10 \n";
            fout<<"1 Medicine=10 \n";
			cout<<"Enter Quantity \n";
			cin>>k;
            fout<<"User Enter ="<<k;
			a=a+1;
			L=L+(k*10);
			for (int z1=1; z1<=k; z1++)
            {
                z=z-1;
            }
            cout<<"Stock : Your Remaining Contac Cold ="<<z<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Contac Cold ="<<z<<endl;
            fout<<"              ......               \n";
            }	
			if(input==5)
			{
                int b=1000;
                int i1;
                cout<<"1 Medicine=10 \n";
                fout<<"1 Medicine=10 \n";
			    cout<<"Enter Quantity \n";
                cin>>i1;
                fout<<"User Enter ="<<i1;
				a=a+1;
				L=L+(i1*10);
            for (int b1=1; b1<=i1; b1++)
            {
                b=b-1;
            }
            cout<<"Stock : Your Remaining Sambucol Cold ="<<b<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Sambucol Cold ="<<b<<endl;
            fout<<"              ......               \n";
			}
			if(input==6)
			{
                int c=1000;
                int j1;
                cout<<"1 Medicine=70 \n";
                fout<<"1 Medicine=70 \n";
			    cout<<"Enter Quantity \n";
                cin>>j1;
                fout<<"User Enter ="<<j1;
				a=a+1;
				L=L+(j1*70);
            for (int c1=1; c1<=j1; c1++)
            {
                c=c-1;
            }
            cout<<"Stock : Your Remaining Morphine ="<<c<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Morphine ="<<c<<endl;
            fout<<"              ......               \n";
			}
			if(input==7)
			{
                int d=1000;
                int k1;
                cout<<"1 Medicine=90 \n";
                fout<<"1 Medicine=90 \n";
			    cout<<"Enter Quantity \n";
                cin>>k1;
                fout<<"User Enter ="<<k1;
				a=a+1;
				L=L+(k1*90);
            for (int d1=1; d1<=k1; d1++)
            {
                d=d-1;
            }
            cout<<"Stock : Your Remaining Fentanyl ="<<d<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Fentanyl ="<<d<<endl;
            fout<<"              ......               \n";
			}
			if(input==8)
			{
                int e=1000;
                int l1;
                cout<<"1 Medicine=2 \n";
                fout<<"1 Medicine=2 \n";
			    cout<<"Enter Quantity \n";
                cin>>l1;
                fout<<"User Enter ="<<l1;
				a=a+1;
				L=L+(l1*2);
		    for (int e1=1; e1<=l1; e1++)
            {
                e=e-1;
            }
            cout<<"Stock : Your Remaining Panadol ="<<e<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Panadol ="<<e<<endl;
            fout<<"              ......               \n";	
            }
			if(input==9)
			{
                int f=1000;
                int i2;
                cout<<"1 Medicine=1 \n";
                cout<<"1 Medicine=1 \n";
			    cout<<"Enter Quantity \n";
                cin>>i2;
                fout<<"User Enter ="<<i2;
				a=a+1;
				L=L+(i2*1);
			for (int f1=1; f1<=i2; f1++)
            {
                f=f-1;
            }
            cout<<"Stock : Your Remaining Disprin ="<<f<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Disprin ="<<f<<endl;
            fout<<"              ......               \n";
            }
			if(input==10)
			{
                int g=1000;
                int j2;
                cout<<"1 Tube=210 \n";
                fout<<"1 Tube=210 \n";
			    cout<<"Enter Quantity \n";
                cin>>j2;
                fout<<"User Enter ="<<j2;
				a=a+1;
				L=L+(j2*210);
            for (int w1=1; w1<=j2; w1++)
            {
                g=g-1;
            }
            cout<<"Stock : Your Remaining Betnowait N ="<<g<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Betnowait N ="<<g<<endl;
            fout<<"              ......               \n";
			}
			if(input==11)
			{
                int h=1000;
                int k2;
                cout<<"1 Tube=110 \n";
                fout<<"1 Tube=110 \n";
			    cout<<"Enter Quantity \n";
                cin>>k2;
                fout<<"User Enter ="<<k2;
				a=a+1;
				L=L+(k2*110);
            for (int h1=1; h1<=k2; h1++)
            {
                h=h-1;
            }
            cout<<"Stock : Your Remaining Polifax ="<<h<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Polifax ="<<h<<endl;
            fout<<"              ......               \n";
			}
			if(input==12)
			{ 
                int A=1000;
                int l2;
                cout<<"1 Tube=180 \n";
                fout<<"1 Tube=180 \n";
			    cout<<"Enter Quantity \n";
                cin>>l2;
                fout<<"User Enter ="<<l2;
				a=a+1;
				L=L+(l2*180);
            for (int A1=1; A1<=l2; A1++)
            {
                A=A-1;
            }
            cout<<"Stock : Your Remaining Brevoxyl ="<<A<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Brevoxyl ="<<A<<endl;
            fout<<"              ......               \n";
			}
			if(input==13)
			{
                int B=1000;
                int i3;
                cout<<"1 Tube=100 \n";
                fout<<"1 Tube=100 \n";
			    cout<<"Enter Quantity \n";
                cin>>i3;
                fout<<"User Enter ="<<i3;
				a=a+1;
				L=L+(i3*100);
            for (int B1=1; B1<=i3; B1++)
            {
                B=B-1;
            }
            cout<<"Stock : Your Remaining Iodex Tube ="<<B<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Iodex Tube ="<<B<<endl;
            fout<<"              ......               \n";
			}
			if(input==14)
			{
                int C=1000;
                int j3;
                cout<<"1 Injection=50 \n";
                fout<<"1 Injection=50 \n";
			    cout<<"Enter Quantity \n";
                cin>>j3;
                fout<<"User Enter ="<<j3;
				a=a+1;
				L=L+(j3*50);
            for (int C1=1; C1<=j3; C1++)
            {
                C=C-1;
            }
            cout<<"Stock : Your Remaining Injection 5cc ="<<C<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Injection 5cc ="<<C<<endl;
            fout<<"              ......               \n";
			}
			if(input==15)
			{
                int D=1000;
                int k3;
                cout<<"1 Medicine=30 \n";
                fout<<"1 Medicine=30 \n";
			    cout<<"Enter Quantity \n";
                cin>>k3;
                fout<<"User Enter ="<<k3;
				a=a+1;
				L=L+(k3*300);
            for (int D1=1; D1<=k3; D1++)
            {
                D=D-1;
            }
            cout<<"Stock : Your Remaining Dicyclomine ="<<D<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Dicyclomine ="<<D<<endl;
            fout<<"              ......               \n";
			}
			if(input==16)
			{
                int E=1000;
                int l3;
                cout<<"1 Bottle=30 \n";
                fout<<"1 Bottle=30 \n";
			    cout<<"Enter Quantity \n";
                cin>>l3;
				a=a+1;
                fout<<"User Enter ="<<l3;
				L=L+(l3*30);
            for (int E1=1; E1<=l3; E1++)
            {
                E=E-1;
            }
            cout<<"Stock : Your Remaining 1/2 Liter Nestle ="<<E<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining 1/2 Liter Nestle ="<<E<<endl;
            fout<<"              ......               \n";
			}
			if(input==17)
			{
                int F=1000;
                int i4;
                cout<<"1 Bandage=2 \n";
                fout<<"1 Bandage=2 \n";
			    cout<<"Enter Quantity \n";
                cin>>i4;
                fout<<"User Enter ="<<i4;
				a=a+1;
				L=L+(i4*2);
            for (int F1=1; F1<=i4; F1++)
            {
                F=F-1;
            }
            cout<<"Stock : Your Remaining Band=Aid Brand ="<<F<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Band=Aid Brand ="<<F<<endl;
            fout<<"              ......               \n";
			}
			if(input==18)
			{
                int G=1000;
                int j4;
                cout<<"1 Medicine=20 \n";
                fout<<"1 Medicine=20 \n";
			    cout<<"Enter Quantity \n";
                cin>>j4;
                fout<<"User Enter ="<<j4;
				a=a+1;
				L=L+(j4*20);
            for (int G1=1; G1<=j4; G1++)
            {
                G=G-1;
            }
            cout<<"Stock : Your Remaining Alogliptin ="<<G<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Alogliptin ="<<G<<endl;
            fout<<"              ......               \n";
			}
			if(input==19)
            {
                int H=1000; 
                int k4;
                cout<<"1 Bottle Cline 1 litter=120 \n";
                cout<<"1 Bottle Cline 1 litter=120 \n";
			    cout<<"Enter Quantity \n";
                cin>>k4;
                fout<<"User Enter ="<<k4;
				a=a+1;
				L=L+(k4*120);
            for (int H1=1; H1<=k4; H1++)
            {
                H=H-1;
            }
            cout<<"Stock : Your Remaining Celine Water ="<<H<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Celine Water ="<<H<<endl;
            fout<<"              ......               \n";
            }
			if (input==20)
            {
                int I=1000;
                int l4;
                cout<<"1 Medicine Pack=300 \n";
                fout<<"1 Medicine Pack=300 \n";
			    cout<<"Enter Quantity \n";
                cin>>l4;
                fout<<"User Enter ="<<l4;
				a=a+1;
				L=L+(l4*300);
            for (int I1=1; I1<=l4; I1++)
            {
                I=I-1;
            }
            cout<<"Stock : Your Remaining Calcium Carbonate ="<<I<<endl;
            cout<<"Enter More ? "<<endl;
            fout<<"Stock : Your Remaining Calcium Carbonate ="<<I<<endl;
            fout<<"              ......               \n";
			}
		if(input==-1)
		{
			cout<<"|******************************|"<<endl;
			cout<<"|     Your total item is ="<<a<<"      |\n";
			cout<<"|                              |"<<endl;
			cout<<"|     your    bill    is ="<<L<<" |\n";
			cout<<"|******************************|"<<endl;
        }

	
	    else 
        {
	        cout<<"\n";
        }
    }
    	    fout<<"|******************************|"<<endl;
			fout<<"|     Your total item is ="<<a<<"|\n";
			fout<<"|                              |"<<endl;
			fout<<"|your    bill    is ="<<L<<"|\n";
			fout<<"|******************************|"<<endl;
            fout<<"...............Payment................ \n";
    fout.close();
    if(L==0)
    {
        system("CLS");
        cout<<"Press Any Key For Menu \n";
        cin.ignore();
        cin.get();
        login();
    }
    billing(L);
    }
    else 
    {
        goto up;
    }
}

void billing(int L)
{
        char Bill,cash,ATM,Transfer,End;
    ofstream fout;
    fout.open("Billing.txt" , ios::app | ios::binary | ios::out);
   Bill:
	 system("CLS");
     char Payment;
	 cout<<"Bill="<<L<<"\t:::Three different ways to pay the bill:::\n\n";
	 cout<<"1=Cash Paymant?, ::Please Press 'I' For cash payment::\n"<<endl;
	 cout<<"2=Use ATM Machine?, ::Press 'G'::\n"<<endl;
	 cout<<"3=Money Transfer form Easy Paisa?, ::Press 'H'::\n"<<endl;
     fout<<"Bill="<<L<<"\t:::Three different ways to pay the bill:::\n\n";
	 fout<<"1=Cash Paymant?, ::Please Press 'I' For cash payment::\n"<<endl;
	 fout<<"2=Use ATM Machine?, ::Press 'G'::\n"<<endl;
	 fout<<"3=Money Transfer form Easy Paisa?, ::Press 'H'::\n"<<endl;
	 cin>>Payment;
     fout<<"User Enter "<<Payment<<endl;

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
            fout<<"User Enter"<<w<<endl;
		    if(w>=L)
			{
		        cout<<"Remaining Money is="<<w-L<<endl<<endl;
		        cout<<"\t:::Thanks! Please Collect Your Money:::\n"<<endl;
                fout<<"Remaining Money is="<<w-L<<endl<<endl;
		        fout<<"\t:::Thanks! Please Collect Your Money:::\n"<<endl;
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
     char Give;
	 cout<<":::press 'E' After Collecting Your Money :::\n";
	 cin>>Give;
     if(Give=='e' || Give=='E')
        {
		 goto End;
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
	 cout<<"                          ||Welcome to Panjab Bank||"<<endl;
	 cout<<"\n"<<endl;
	 cout<<"Please Insert Your Card in slot and press (S): "<<endl;
     fout<<"                          ||Welcome to Panjab Bank||"<<endl;
	 cin>>start;

	if(start=='S'||start=='s')
	{
		system("CLS");
    	check :
    	cout<<"\n"<<endl;
    	cout<<"Enter your 4 Code Pin: ";
        fout<<"Enter your 4 Code Pin: ";
		cin>>pin;
        fout<<"User Enter "<<pin<<endl;

	if(pin==1234)
	{
		cout<<"\n"<<endl;
		cout<<"Your account balance is "<<balance<<endl;
        fout<<"Your account balance is "<<balance<<endl;
		cout<<"\n"<<endl;
		amount:
		{
		    cout<<"Please Enter "<<L<<" Rs \n";
            fout<<"Please Enter "<<L<<" Rs \n";
		    cin>>amount;
            fout<<"User Enter "<<amount;

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
                        fout<<"Your remaining Balance is: "<<balance-amount<<endl;
						cout<<"\n"<<endl;
						cout<<"Thanks to visit Punjab Bank..."<<endl;	
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
     fout<<"\t\t\t ***EASY PAISA***\n\n";
	 fout<<"\t:::Please Sign in \n:::";
	 fout<<"**Enter Username & Password Without Giving Space '.' **\n\n";
	 fout<<"\t::Enter Your Number OR Username ID:: \n";
     fout<<"User Enter "<<x<<endl;
	 fout<<"*Enter Your Password* \n";
     fout<<"User Enter "<<n1<<endl;
	 fout<<"   Your User ID Is= *"<<x<<"* Your Password is= *"<<"*"<<n1<<endl;
	 fout<<"**your Current Balance "<<n2<<"**"<<endl;
	 fout<<":::Please Transfer "<<L<<" RS to This Number 0324-4064060::: \n";
     fout<<"*Transfer "<<L<<"\n";

	 if(paisa=='W' || paisa=='w')
	   {
		 system("CLS");
	   	 int balence,R;
	   	 balence :
	   	 cout<<"Dear Please, Enter "<<L<<" \n\n";
         fout<<"Dear Please, Enter "<<L<<" \n\n";
	   	 cin>>R;
         fout<<"User Enter "<<R;
	   	 if(R==L)
			{
				system("CLS");
				cout<<"**Now Your Current Balence is "<<n2-L<<"**\n"<<endl;
                fout<<"**Now Your Current Balence is "<<n2-L<<"**\n"<<endl;
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
    End:
     cout<<"Press any key for Menu \n";
     cin.ignore();
     cin.get();
     fout<<".............NEXT............... \n";
     fout.close();
     login();
    }
void Current_Stock()
{
    		system("cls");
	cout<<"***********************************************"<<endl;
    cout<<"********************CLINIX*********************"<<endl;
	cout<<"*******************Item List*******************"<<endl;
    cout<<"***********************************************"<<endl;
	cout<<"Stock: 1000  (Prize = 30 RS)Lisinopril (Blood Pressure) \n";
	cout<<"Stock: 1000  (Prize = 20 RS) Amlodipine (Blood Pressure)\n";
	cout<<"Stock: 1000  (Prize = 40 RS) Losartan (Blood Pressure)\n";
	cout<<"Stock: 1000  (Prize = 10 RS)Contac Cold (FLU) \n";
	cout<<"Stock: 1000  (Prize = 10 RS)Sambucol Cold (FLU)\n";
	cout<<"Stock: 1000  (Prize = 70 RS) Morphine (Pain Killer)\n";
	cout<<"Stock: 1000  (Prize = 90 RS) Fentanyl (Pain Killer)\n";
	cout<<"Stock: 1000  (Prize = 2 RS) Panadol\n";
	cout<<"Stock: 1000  (Prize = 1 RS) Disprin\n";
	cout<<"Stock: 1000  (Prize = 210 RS) Betnowait N (Acne)\n";
	cout<<"Stock: 1000  (Prize = 110 RS) Polifax (Acne) \n";
	cout<<"Stock: 1000  (Prize = 180 RS) Brevoxyl (Acne)"<<endl;
	cout<<"Stock: 1000  (Prize = 100 RS) Iodex Tube (Pain)"<<endl;
	cout<<"Stock: 1000  (Prize = 50 RS) Injection 5CC "<<endl;
	cout<<"Stock: 1000  (Prize = 30 RS) Dicyclomine (Bentyl) Stomach Pain "<<endl;
	cout<<"Stock: 1000  (Prize = 30 RS) 1/2 liter nestle water"<<endl;
	cout<<"Stock: 1000  (Prize = 2 RS) Band-Aid Brand (Bandages)"<<endl;
	cout<<"Stock: 1000  (Prize = 20 RS) Alogliptin (Nesina)"<<endl;
	cout<<"Stock: 1000  (Prize = 120 RS) Celine water"<<endl;
	cout<<"Stock: 1000  (Prize = 300 RS) Calcium Carbonate \n";
}
    