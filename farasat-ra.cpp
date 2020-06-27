#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int classs,x,berth_amount,berth_bill,berth_reservation,bill,berth,only_berth,travelling_seelection,n;
	char order,rate_list,seat_berth,travelling,main_menu;
	cout<<"welcome "<<endl<<"\t* Railway Ticket Reservation System"<<endl;
		do
	{
	cout<<"For rate list or other options press r"<<endl;
	cin>>rate_list;
	if((rate_list=='R')||(rate_list=='r'))
	{
		cout<<" \t\t \"welcome\" "<<endl;
		cout<<"\t*Seat of lower class=300"<<endl;	
		cout<<"\t*Seat of lower ac class=600"<<endl;
		cout<<"\t*Seat of Bussiness class=1200"<<endl;
		cout<<"\t*Reserved Berth with Seat for lower class=200"<<endl;	
		cout<<"\t*Reserved Berth with Seat for lower ac class=400"<<endl	;
		cout<<"\t*Reserved Berth with Seat for Bussiness class=1000"<<endl;
			cout<<"\t*Reserved only Berth seat  for lower class=500"<<endl;
				cout<<"\t*Reserved only Berth with Seat for lower ac class=900"<<endl;
					cout<<"\t*Reserved only Berth with Seat for Bussiness class=1300"<<endl;
					cout<<"\t * For order press y and e for exit==";
					cin>>order; 
						if((order=='Y')||(order=='y'))
					{
	
		cout<<"\t\t\"To Select your Travelling press t \" "<<endl;
		cin>>travelling;
		if((travelling=='T')||(travelling=='t'))
		{
			cout<<"Travel from lahore to Karachi press 12"<<endl;
			cout<<"Travel from lahore to Islamabad press 13"<<endl;
			cout<<"Travel from Karachi to Kheura press 14"<<endl;
			cout<<"Travel from Islamabad to Chakwal press 15"<<endl;
			cin>>travelling_seelection;	
			if((travelling_seelection==12)||(travelling_seelection==13)||(travelling_seelection==14)||(travelling_seelection==15))
			{
							
		if(travelling_seelection==12)
		{
		cout<<"Welcome"<<endl<<"you reserved from lahore to karachi"<<endl;
		cout<<"For only seats reservation press s"<<endl;
		cout<<"For only births reservation press b"<<endl;	
		cin>>seat_berth;
		
		if((seat_berth=='s')||(seat_berth=='S')||(seat_berth=='b')||(seat_berth=='B'))
		{
			
		if((seat_berth=='s')||(seat_berth=='S'))
		{
	cout<<"Select the category below"<<endl;
	cout<<"press 1 for lower class"<<endl;
	cout<<"press 2 for lowerac class"<<endl;
	cout<<"press 3 for Bussiness class"<<endl;
	cin>>classs;
	
	if((classs==1)||(classs==2)||(classs==3))
	{
		
	if(classs==1)
	{
		cout<<"you have choosed the ticket for Low class"<<endl;
		cout<<"How many tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*300;
		cout<<"\t \t Ticket \n \t Ticket reservation is for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==2)
	{
		cout<<"you have choosed the ticket for lower ac class"<<endl;
		cout<<"How many tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*600;
		cout<<"\t \t Ticket \n \t Ticket reservation is for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==3)
	{
		cout<<"you have choosed the ticket for Bussiness class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*1200;
		cout<<"\t \t Ticket \n \t Ticket reservation is for Bussiness class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
	cout<<"If you want to reserve berth with seat too then"<<endl<<" press 4 and if you dont than press 8"<<endl;
	cin>>berth;
		if((berth==4)||(berth==8))
		{
	if((berth==4)||(berth==8))
	{
		if(berth==4)
		{
		cout<<"Welcome"<<endl;
		cout<<"press 5 to reserve lower class"<<endl;
		cout<<"press 6 to reserve lowerac class"<<endl;
		cout<<"press 7 to reserve Bussiness class"<<endl;	
		cin>>berth_reservation;	
		if((berth_reservation==5)||(berth_reservation==6)||(berth_reservation==7))
		{
		if(berth_reservation==5)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*200)+bill;
		cout<<"\t \t Ticket \n \t Ticket and berth reservation is for lower class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==6)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*400)+bill;
		cout<<"\t \t Ticket \n \t Ticket and berth reservation is for lower ac class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==7)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
			berth_bill=(berth_amount*1000)+bill;
			cout<<"\t \t Ticket \n \t Ticket and berth reservation is for Bussiness class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}
		
			}// for 5 6 7
			else
		{ 
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
	}
		else
		if(berth==8)
		{
			cout<<"Thanks";
		}
}
	}// for 4 8
		else
		{
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
}
else
			{
 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
			}
}else
if((seat_berth=='B')||(seat_berth=='b'))
{
	cout<<"welcome you have choosed berth reservation only"<<endl;
		cout<<"Select the category below"<<endl;
	cout<<"press 9 for lower class"<<endl;
	cout<<"press 10 for lower ac class"<<endl;
	cout<<"press11 for Bussiness class"<<endl;
	cin>>only_berth;
	if((only_berth==9)||(only_berth==10)||(only_berth==11))
	{
	if(only_berth==9)
	{
		cout<<"you have choosed the birth for Lower class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*500;
		cout<<"\t \t Ticket \n \t  berth reservation is for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==10)
	{
		cout<<"you have choosed the berth for lower ac class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*900;
		cout<<"\t \t Ticket \n \t  berth reservation is for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==11)
	{
		cout<<"you have choosed the berth for Bussiness class"<<endl;
		cout<<"How much births you want to reserverd"<<endl;
		cin>>x;
		bill=x*1300;
		cout<<"\t \t Ticket \n \t  berth reservation is for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
		}//for 9 10 11
	else
	{
	 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
	}
}

}// seat or birth s,b
else
				{
	           cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
			}

}//blok of 12 travelling selecion

                           // blok of travelling selection 13

		
		if(travelling_seelection==13)
		{
		cout<<"Welcome"<<endl<<"you reserved from lahore to Islamabad"<<endl;
		cout<<"For only seats reservation press s"<<endl;
		cout<<"For only births reservation press b"<<endl;	
		cin>>seat_berth;
		
		if((seat_berth=='s')||(seat_berth=='S')||(seat_berth=='b')||(seat_berth=='B'))
		{
			
		if((seat_berth=='s')||(seat_berth=='S'))
		{
	cout<<"Select the category below"<<endl;
	cout<<"press 1 for lower class"<<endl;
	cout<<"press 2 for lower ac class"<<endl;
	cout<<"press 3 for Bussiness class"<<endl;
	cin>>classs;
	
	if((classs==1)||(classs==2)||(classs==3))
	{
		
	if(classs==1)
	{
		cout<<"you have choosed the ticket for Low class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*300;
		cout<<"\t \t Ticket \n \t Ticket reservation for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==2)
	{
		cout<<"you have choosed the ticket for lower ac class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*600;
		cout<<"\t \t Ticket \n \t Ticket reservation for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==3)
	{
		cout<<"you have choosed the ticket for Bussiness class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*1200;
		cout<<"\t \t Ticket \n \t Ticket reservation for Bussiness class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
		cout<<"If you want to reserve berth with seat too then"<<endl<<" press 4 and if you dont than press 8"<<endl;
	cin>>berth;
		if((berth==4)||(berth==8))
		{
	if((berth==4)||(berth==8))
	{
		if(berth==4)
		{
		cout<<"Welcome"<<endl;
		cout<<"press 5 to reserve lower class"<<endl;
		cout<<"press 6 to reserve lower ac class"<<endl;
		cout<<"press 7 to reserve Bussiness class"<<endl;	
		cin>>berth_reservation;	
		if((berth_reservation==5)||(berth_reservation==6)||(berth_reservation==7))
		{
		if(berth_reservation==5)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*200)+bill;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth and seat for lower class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==6)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*400)+bill;
			cout<<"\t \t Ticket \n \t Ticket reservation of berth and seat for lower ac class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==7)
		{ 
			cout<<"How much births you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*1000)+bill;
			cout<<"\t \t Ticket \n \t Ticket reservation of berth and seat for Bussiness class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}
		
			}// for 5 6 7
			else
		{ 
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
	}
		else
		if(berth==8)
		{
			cout<<"Thanks";
		}
}
	}// for 4 8
		else
		{
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
}
else
			{
 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
			}
}else
if((seat_berth=='B')||(seat_berth=='b'))
{
	cout<<"welcome you have choosed berth reservation only"<<endl;
		cout<<"Select the category below"<<endl;
	cout<<"press 9 for lower class"<<endl;
	cout<<"press 10 for lower ac class"<<endl;
	cout<<"press11 for Bussiness class"<<endl;
	cin>>only_berth;
	if((only_berth==9)||(only_berth==10)||(only_berth==11))
	{
	if(only_berth==9)
	{
		cout<<"you have choosed the berth for Lower class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*500;
			cout<<"\t \t Ticket \n \t Ticket reservation of berth  for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==10)
	{
		cout<<"you have choosed the berth for lower ac class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*900;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==11)
	{
		cout<<"you have choosed the berth for Bussiness class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*1300;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for Bussiness class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
		}//for 9 10 11
	else
	{
	 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
	}
}

}// seat or birth s,b
else
				{
	         cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";

			}

}//blok of 13 travelling selecion

                     // blok of 14 travelling selection
	
		if(travelling_seelection==14)
		{
		cout<<"Welcome"<<endl<<"you reserved from karachi to kheura"<<endl;
		cout<<"For only seats reservation press s"<<endl;
		cout<<"For only births reservation press b"<<endl;	
		cin>>seat_berth;
		
		if((seat_berth=='s')||(seat_berth=='S')||(seat_berth=='b')||(seat_berth=='B'))
		{
			
		if((seat_berth=='s')||(seat_berth=='S'))
		{
	cout<<"Select the category below"<<endl;
	cout<<"press 1 for lower class"<<endl;
	cout<<"press 2 for lower ac class"<<endl;
	cout<<"press 3 for Bussiness class"<<endl;
	cin>>classs;
	
	if((classs==1)||(classs==2)||(classs==3))
	{
		
	if(classs==1)
	{
		cout<<"you have choosed the ticket for Lower class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*300;
		cout<<"\t \t Ticket \n \t Ticket reservation of seat  for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==2)
	{
		cout<<"you have choosed the ticket for lower ac class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*600;
		cout<<"\t \t Ticket \n \t Ticket reservation of seat  for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==3)
	{
		cout<<"you have choosed the ticket for Bussiness class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*1200;
		cout<<"\t \t Ticket \n \t Ticket reservation of seat  for low class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
		cout<<"If you want to reserve berth with seat too then"<<endl<<" press 4 and if you dont than press 8"<<endl;
	cin>>berth;
		if((berth==4)||(berth==8))
		{
	if((berth==4)||(berth==8))
	{
		if(berth==4)
		{
		cout<<"Welcome"<<endl;
		cout<<"press 5 to reserve lower class"<<endl;
		cout<<"press 6 to reserve lower ac class"<<endl;
		cout<<"press 7 to reserve Bussiness class"<<endl;	
		cin>>berth_reservation;	
		if((berth_reservation==5)||(berth_reservation==6)||(berth_reservation==7))
		{
		if(berth_reservation==5)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*200)+bill;
		cout<<"\t \t Ticket \n \t Ticket reservation of seat and berth  for lower class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==6)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*400)+bill;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for lower ac class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==7)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
		berth_bill=(berth_amount*1000)+bill;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for Bussiness class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}
		
			}// for 5 6 7
			else
		{ 
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
	}
		else
		if(berth==8)
		{
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
}
	}// for 4 8
		else
		{
		 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
}
else
			{
 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
			}
}else
if((seat_berth=='B')||(seat_berth=='b'))
{
	cout<<"welcome you have choosed berth reservation only"<<endl;
		cout<<"Select the category below"<<endl;
	cout<<"press 9 for lower class"<<endl;
	cout<<"press 10 for lower ac class"<<endl;
	cout<<"press11 for Bussiness class"<<endl;
	cin>>only_berth;
	if((only_berth==9)||(only_berth==10)||(only_berth==11))
	{
	if(only_berth==9)
	{
		cout<<"you have choosen the berth for Lower class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*500;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==10)
	{
		cout<<"you have choosen the birth for lower ac class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*900;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==11)
	{
		cout<<"you have choosen the berth for Bussiness class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*1300;
		cout<<"\t \t Ticket \n \t Ticket reservation of berth  for Bussiness class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
		}//for 9 10 11
	else
	{
	 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
	}
}

}// seat or birth s,b
else
				{
	         cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";

			}

}//blok of 14 travelling selecion
            
                
                        //blok f 15 travelling selection
		
		if(travelling_seelection==15)
		{
		cout<<"Welcome"<<endl<<"you reserved from Islamabad to chakwal"<<endl;
		cout<<"For only seats reservation press s"<<endl;
		cout<<"For only berths reservation press b"<<endl;	
		cin>>seat_berth;
		
		if((seat_berth=='s')||(seat_berth=='S')||(seat_berth=='b')||(seat_berth=='B'))
		{
			
		if((seat_berth=='s')||(seat_berth=='S'))
		{
	cout<<"Select the category below"<<endl;
	cout<<"press 1 for lower class"<<endl;
	cout<<"press 2 for lower ac class"<<endl;
	cout<<"press 3 for Bussiness class"<<endl;
	cin>>classs;
	
	if((classs==1)||(classs==2)||(classs==3))
	{
		
	if(classs==1)
	{
		cout<<"you have choosed the ticket for Lower class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*300;
		cout<<"\t \t Ticket \n \t Ticket reservation of seat  for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==2)
	{
		cout<<"you have choosed the ticket for lower ac class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*600;
			cout<<"\t \t Ticket \n \t Ticket reservation of seat  for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(classs==3)
	{
		cout<<"you have choosed the ticket for Bussiness class"<<endl;
		cout<<"How much tickets you want to reserverd"<<endl;
		cin>>x;
		bill=x*1200;
			cout<<"\t \t Ticket \n \t Ticket reservation of seat  for Bussiness class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
	cout<<"If you want to reserve berth with seat too then"<<endl<<" press 4 and if you dont than press 8"<<endl;
	cin>>berth;
		if((berth==4)||(berth==8))
		{
	if((berth==4)||(berth==8))
	{
		if(berth==4)
		{
		cout<<"Welcome"<<endl;
		cout<<"press 5 to reserve lower class"<<endl;
		cout<<"press 6 to reserve lower ac class"<<endl;
		cout<<"press 7 to reserve Bussiness class"<<endl;	
		cin>>berth_reservation;	
		if((berth_reservation==5)||(berth_reservation==6)||(berth_reservation==7))
		{
		if(berth_reservation==5)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
			berth_bill=(berth_amount*200)+bill;
				cout<<"\t \t Ticket \n \t Ticket reservation of seat and berth  for lower class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==6)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
			berth_bill=(berth_amount*400)+bill;
			cout<<"\t \t Ticket \n \t Ticket reservation of seat and berth  for lower ac class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}else
			if(berth_reservation==7)
		{ 
			cout<<"How much berths you want to reserved??"<<endl;
			cin>>berth_amount;
			berth_bill=(berth_amount*1000)+bill;
			cout<<"\t \t Ticket \n \t Ticket reservation of seat and berth  for Bussiness class"<<endl;
			cout<<"your bill is"<<berth_bill<<endl;
		}
		
			}// for 5 6 7
			else
		{ 
			 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
	}
		else
		if(berth==8)
		{
			cout<<"Thanks";
		}
}
	}// for 4 8
		else
		{
			 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
		}
}
else
			{
 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
			}
}else
if((seat_berth=='B')||(seat_berth=='b'))
{
	cout<<"welcome you have choosed berth reservation only"<<endl;
		cout<<"Select the category below"<<endl;
	cout<<"press 9 for lower class"<<endl;
	cout<<"press 10 for lower ac class"<<endl;
	cout<<"press11 for Bussiness class"<<endl;
	cin>>only_berth;
	if((only_berth==9)||(only_berth==10)||(only_berth==11))
	{
	if(only_berth==9)
	{
		cout<<"you have choosed the berth for Lower class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*500;
		cout<<"\t \t Ticket \n \t Ticket reservation of  berth  for lower class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==10)
	{
		cout<<"you have choosed the berth for lower ac class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*900;
		cout<<"\t \t Ticket \n \t Ticket reservation of  berth  for lower ac class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}else
		if(only_berth==11)
	{
		cout<<"you have choosed the berth for Bussiness class"<<endl;
		cout<<"How much berths you want to reserverd"<<endl;
		cin>>x;
		bill=x*1300;
		cout<<"\t \t Ticket \n \t Ticket reservation of  berth  for Bussiness class"<<endl;
		cout<<"your current bill is"<<bill<<endl;
	}
		}//for 9 10 11
	else
	{
	 cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
	}
}

}// seat or birth s,b
else
				{
	          cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";

			}

}//blok of 15 travelling selecion

}// travelling selection 12 13 14 15
else
				{
	          cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";
			}


}//travelling selection t
else
				{
	         cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";

			}
}// for order y
else
				{
					if((order=='E')||(order=='e'))
					{
						cout<<"Thanks for visiting";
					}
					else
					{
						
	         cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";

	          }

			}
}// ratelist or other r
else
				{
	          cout<<endl<<"invalid input"<<endl<<"Thanks for visiting"<<endl<<"\t\tExit";

			}
			
			

cout<<endl<<"press m to go back to main menu"<<endl<<"\t and for Quit press q"<<endl;
cin>>main_menu;
}// while loop
			while((main_menu=='M')||(main_menu=='m'));
			if((main_menu=='M')||(main_menu=='m'))
			{
				
							}
			else
			{
				if((main_menu=='Q')||(main_menu=='q'))
				cout<<"Thanks for visiting"<<endl<<"\t \t Quit"<<endl;
				else
				cout<<"invalid";
			}
			
}//main body

