#include<iostream>
using namespace std;
int main()
{
	int c=67, k;
	cout<<"Enter the PIN  :  ";
	cin>>k;
	if(k==c)
	{
		int i,j,k,l;
	int cash;
	int input;
	int count=0;
	int a=0;
		system("cls");
	cout<<"Bismillah General store"<<endl;
	cout<<"***********************"<<endl;
	cout<<"Item List"<<endl;
	cout<<"Press 1 daal chna \n";
	cout<<"press 2 for biscuits\n";
	cout<<"press 3 for atta\n";
	cout<<"press 4 for cheeni\n";
	cout<<"press 5 for cells\n";
	cout<<"press 6 for 1 box of candies\n";
	cout<<"press 7 for  bread\n";
	cout<<"press 8 for soap\n";
	cout<<"press 9 for 1 bottle of Shampo\n";
	cout<<"press 10 for hair spray\n";
	cout<<"press 11 for 1 tissue pack"<<endl;
	cout<<"press 12 for Card"<<endl;
	cout<<"press 13 for mobile cover"<<endl;
	cout<<"press 14 for 12 eggs"<<endl;
	cout<<"press 15 for 1 liter pepsi"<<endl;
		cout<<"press 16 for 1\2 liter nestle water"<<endl;
	cout<<"press 17 for Register"<<endl;
	cout<<"press 18 for pen"<<endl;
	cout<<"press 19 for 32GB USB"<<endl;
	cout<<"press 20 for body spray";
	cout<<"press -1 for total bill"<<endl;
	while(true)
	{
		cin>>input;
		if(input==1)
		{
			cout<<"enter quantity in grams";
			cin>>i;
			a=a+1;
			count=count+(i*0.3);
		}
		if(input==2)
		{
			cout<<"Enter quantity";
			cin>>l;
			a=a+1;
			count=count+(l*20);
		}
		if(input==3)
		{
			cout<<"enter quantity in kg";
			cin>>j;
			a=a+1;
			count=count+(j*40);
		}
		if (input==4)
		{
			cout<<"Enter quantity in kg";
			cin>>k;
			a=a+1;
			count=count+(k*55);
			}	
			if(input==5)
			{
				a=a+1;
				count=count+10;
			}
			if(input==6)
			{
				a=a+1;
				count=count+70;
			}
			if(input==7)
			{
				a=a+1;
				count=count+50;
			}
			if(input==8)
			{
				a=a+1;
				count=count+150;
			}
			if(input==9)
			{
				a=a+1;
				count=count+200;
			}
			if(input==10)
			{
				a=a+1;
				count=count+120;
			}
			if(input==11)
			{
				a=a+1;
				count=count+100;
			}
			if(input==12)
			{
				a=a+1;
				count=count+100;
			}
			if(input==13)
			{
				a=a+1;
				count=count+130;
			}
			if(input==14)
			{
				a=a+1;
				count=count+100;
			}
			if(input==15)
			{
				a=a+1;
				count=count+55;
			}
			if(input==16)
			{
				a=a+1;
				count=count+50;
			}
			if(input==17)
			{
				a=a+1;
				count=count+90;
			}
			if(input==18)
			{
				a=a+1;
				count=count+50;
			}
			if(input==19)
			{
				a=a+1;
				count=count+1000;
			}
			if(input==20)
			{
				a=a+1;
				count=count+200;
			}
		if(input==-1)
		{
			cout<<"|*****************|"<<endl;
			cout<<"|Your total item is ="<<a<<endl;
			cout<<"|*****************|"<<endl;
			cout<<"|your    bill    is ="<<count<<endl;
			cout<<"Pay your cash"<<cash;
			cout<<"|*****************|"<<endl;
			cout<<"|Thank yOu \n\n\n ";
	
	
		}

	
	else 
	cout<<"\a\a\a\a\a\a\a\a";}
}

}
	
