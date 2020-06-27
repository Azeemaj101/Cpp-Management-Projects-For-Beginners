#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include"Header.h"

using namespace std;
                          //______________________Functions________________//
            //*********************************************************************************************//

     //____________Line 16=Attendence_____Line 206=Token_______Line 387=Stock________Line 583=Expenses__________//

          //**********************************************************************************************//
    //____________________________________________________________________________________________________________//
                            //_________________Attendence______________//
void add_attendence()
{
	ofstream fout;
	char attendence;
	string Attan;
attendence:
	fout.open("attendence.dat", ios::app | ios::out);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	char Counter_ID, gAB;
gAB:
	cout << "Please Tell Counter_ID (A & B) \n";
	cin >> Counter_ID;
	if (Counter_ID == 'A' || Counter_ID == 'a' || Counter_ID == 'B' || Counter_ID == 'b')
	{
		char gA;
	gA:
		cout << "Write 'Present' For Present OR  Write 'Absent' For Absent \n" << "For Employee: " << Counter_ID << endl;
		cin >> Attan;
		if (Attan == "Present" || Attan == "present" || Attan == "PRESENT")
		{
			cout << "Present is Done \n";
		}
		else if (Attan == "Absent" || Attan == "absent" || Attan == "ABSENT")
		{
			cout << "Absent is Done \n";
		}
		else
		{
			cout << "You entered wrong selection..Press Any Key to try again \n";
			cin.ignore();
			cin.get();
			goto gA;
		}
	}
	else
	{
		cout << " You entered wrong selection..Press Any  Key to try again \n";
		cin.ignore();
		cin.get();
		goto gAB;
	}
	fout << endl << Counter_ID << "\t\t" << Attan;
	fout.close();
}


void view_attendence()
{
	string Attan;
	char Counter_ID;

	ifstream fin;
	fin.open("attendence.dat", ios::in);
	if (!fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	while (!fin.eof())
	{
		fin >> Counter_ID >> Attan;
		cout << "Counter_ID: " << Counter_ID << "\t\t" << endl;
		cout << "Attandance: " << Attan << "\n\n";

	}
	fin.close();

}
void update_attendence()

{
	fstream fin, fout;
	fin.open("attendence.dat", ios::in | ios::app);
	fout.open("temp.dat", ios::out | ios::app);
	if (!fin.is_open() && !fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	char search;
	cout << "Enter counter number to update attandance:";
	cin >> search;
	bool flag = 0;
	while (!fin.eof())
	{

		char Counter_ID;
		string Attan;
		fin >> Counter_ID >> Attan;
		if (Counter_ID == search)
		{
			flag = 1;
			cout << "Enter Counter Number:";
			cin >> Counter_ID;
			cout << "Enter attandance: ";
			cin >> Attan;
			fout << endl << Counter_ID << "\t\t" << Attan << "\n";
		}
		else
		{
			fout << endl << Counter_ID << "\t" << Attan << "\n";
		}

	}

	if (flag == 0)
	{
		cout << "CounterID not Found" << endl;
	}
	fin.close();
	fout.close();
	remove("attendence.dat");
	rename("temp.dat", "attendence.dat");

}
void search_attendence()
{
	fstream fout;
	fout.open("attendence.dat", ios::in);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	char search;
	cout << "Enter Counter_ID to Search:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		char Counter_ID;
		string Attan;
		fout >> Counter_ID >> Attan;
		if (Counter_ID == search)
		{
			flag = 1;
			cout << "Counter_ID: " << Counter_ID << "\t\t" << "Attendence:" << Attan << endl;
		}
		fout >> Counter_ID >> Attan;
	}
	if (flag == 0)
	{
		cout << "Counter_ID not Found" << endl;
	}
	fout.close();
}
void remove_attendence()
{
	fstream fout, fin;
	fout.open("attendence.dat", ios::in);
	fin.open("temp.dat", ios::out);
	if (!fout.is_open() && !fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	char search;
	cout << "Enter Token Number to Delete:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		string Attan;
		char Counter_ID;
		fout >> Counter_ID >> Attan;
		if (Counter_ID == search)
		{
			flag = 1;
		}
		else
		{
			fin << endl << Counter_ID << "\t" << Attan;
		}
	}
	if (flag == 0)
	{
		cout << "Counter ID not Found" << endl;
	}
	fout.close();
	fin.close();
	remove("attendence.dat");
	rename("temp.dat", "attendence.dat");
}

                              //____________________TOKEN____________________//

void addToken()
{
	ofstream fout;
	char token;
token:
	fout.open("data.dat", ios::app | ios::out);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	char Counter_ID;
	int date, month, year, TokenNo;
	cout << "Enter Token Number:";
	cin >> TokenNo;
	cout << "Enter Counter ID (A & B):";
	cin >> Counter_ID;
	cout << "Enter Date (DD MM YYYY):";
	cin >> date >> month >> year;
	fout << endl << TokenNo << "\t\t" << Counter_ID << "\t\t" << date << " " << month << " " << year << "\t";
	if (Counter_ID == 'A' || Counter_ID == 'a')
	{
		cout << "Mechanic 1 is free\n";


	}
	else if (Counter_ID == 'B' || Counter_ID == 'b')
	{
		cout << "mechanic 2 is free\n";

	}
	else
	{
		cout << "Please wait\n";
		cout << "Press Any Key If Mechanic Allow to come in !\n";
		cin.ignore();
		cin.get();
		goto token;
	}

	fout.close();
}
void viewToken()
{
	int TokenNo, date, month, year;
	char Counter_ID;
	ifstream fin;
	fin.open("data.dat", ios::in);
	if (!fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	while (!fin.eof())
	{
		fin >> TokenNo >> Counter_ID >> date >> month >> year;
		cout << "Token Number:" << TokenNo << "\t\t" << "Counter No:" << Counter_ID << endl;
		cout << "\t\t" << "Date:" << date << "/" << month << "/" << year << "\n\n";

	}
	fin.close();

}
void remove_Token()
{
	fstream fout, fin;
	fout.open("data.dat", ios::in);
	fin.open("temp.dat", ios::out);
	if (!fout.is_open() && !fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter Token Number to Delete:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		int TokenNo, date, month, year;
		char Counter_ID;
		fout >> TokenNo >> Counter_ID >> date >> month >> year;
		if (TokenNo == search)
		{
			flag = 1;
		}
		else
		{
			fin << endl << TokenNo << "\t" << Counter_ID << "\t" << date << "\t" << month << "\t" << year;
		}
	}
	if (flag == 0)
	{
		cout << "Flight ID not Found" << endl;
	}
	fout.close();
	fin.close();
	remove("data.dat");
	rename("temp.dat", "data.dat");
}
void search_Token()
{
	fstream fout;
	fout.open("data.dat", ios::in);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter Token Number to Search:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		int TokenNo, date, month, year;
		char Counter_ID;
		fout >> TokenNo >> Counter_ID >> date >> month >> year;
		if (TokenNo == search)
		{
			flag = 1;
			cout << "Token Number:" << TokenNo << "\t\t" << "Counter ID:" << Counter_ID << endl;
			cout << "Date:" << date << "/" << month << "/" << year << "\n\n";
		}
		fout >> TokenNo >> Counter_ID >> date >> month >> year;
	}
	if (flag == 0)
	{
		cout << "Token Number not Found" << endl;
	}
	fout.close();
}
void update_Token()
{
	fstream fin, fout;
	fin.open("data.dat", ios::in | ios::app);
	fout.open("temp.dat", ios::out | ios::app);
	if (!fin.is_open() && !fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter Token Number to Update:";
	cin >> search;
	bool flag = 0;
	while (!fin.eof())
	{
		int TokenNo, date, month, year;
		char Counter_ID;
		fin >> TokenNo >> Counter_ID >> date >> month >> year;
		if (TokenNo == search)
		{
			flag = 1;
			cout << "Enter Token Number \n";
			cin >> TokenNo;
			cout << "Enter Counter Number:(A & B) \n";
			cin >> Counter_ID;
			cout << "Enter Date (DD MM YYYY):";
			cin >> date >> month;
			cin>> year;
			fout << endl << TokenNo << "\t" << Counter_ID << "\t" << date << "\t" << month << "\t" << year;
		}
		else
		{
			fout << endl << TokenNo << "\t" << Counter_ID << "\t" << date << "\t" << month << "\t" << year;
		}

	}
	if (flag == 0)
	{
		cout << "Token Number not Found" << endl;
	}
	fin.close();
	fout.close();
	remove("data.dat");
	rename("temp.dat", "data.dat");

}
                          //___________________STOCK_____________________//

void add_stock()
{
	system("cls");
	cout << "*********HAM Auto Spare Parts Centre********" << endl;
	cout << "Stock List" << endl;
	cout << "***********************" << endl;
	cout << "Press 1 for  Set of tyres \n";
	cout << "press 2 for  Set of wheel caps\n";
	cout << "press 3 for  Bumpers\n";
	cout << "press 4 for  Radiator \n";
	cout << "press 5 for  Pair of head Lights\n";
	cout << "press 6 for  Wheel barings\n";
	cout << "press 7 for  Stearing cover\n";
	cout << "press 8 for  Engine oil\n";
	cout << "press 9 for  Air Filtre\n";
	cout << "press 10 for Mirrors\n";
	ofstream fout;
	fout.open("datastock.dat", ios::out | ios::app);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	else
	{

	gAddStk:
		int StockNo, Quantity, Rem, bill;
		char gStkNo;
	gStkNo:
		cout << "Enter Your Stock Number \n";
		cin >> StockNo;
		if (StockNo == 1 || StockNo == 2 || StockNo == 3 || StockNo == 4 || StockNo == 5 || StockNo == 6 || StockNo == 7 || StockNo == 8 || StockNo == 9 || StockNo == 10)
		{
			cout << "Enter Quantity? ( 1 item  = 1000 ) \n";
			cin >> Quantity;
			Rem = 100;
			Rem = Rem - Quantity;
			bill = 1000 * Quantity;
			fout << endl << StockNo << "\t" << Quantity << "\t" << Rem << "\t" << bill;

		}
		else
		{
			cout << "Please enter correct choice. Press Any key For Try Again \n";
			cin.ignore();
			cin.get();
			goto gStkNo;
		}
		cout << "Press 1 For ADD More &  Press Any Key Numaric Key \n";
		int a;
		cin >> a;
		if (a == 1)
		{
			goto gAddStk;
		} //No Need For Else 
	}
	fout.close();
}
void view_stock()
{
	fstream file;
	file.open("datastock.dat", ios::in);

	if (!file.is_open())
	{
		cout << "Connection not established";
		return;
	}
	while (!file.eof())
	{
		int StockNo, Quantity, Rem, bill;

		file >> StockNo >> Quantity >> Rem >> bill;
		cout << "Stock Number= " << StockNo << "\t\t" << "Quantity: " << Quantity << endl;
		cout << "Remaining stock= " << Rem << "\t Bill: " << bill << "\n\n";
	}
	file.close();
}
void remove_stock()
{
	fstream fout, fin;
	fout.open("datastock.dat", ios::in);
	fin.open("temp.dat", ios::out);
	if (!fout.is_open() && !fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter stock number to Delete:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		int StockNo, Quantity, Rem, bill;
		fout >> StockNo >> Quantity >> Rem >> bill;
		if (StockNo == search)
		{
			flag = 1;
		}
		else
		{
			fin << endl << StockNo << "\t" << Quantity << "\t" << Rem << "\t" << bill;
		}
	}
	if (flag == 0)
	{
		cout << "Stock Number not Found" << endl;
	}
	fout.close();
	fin.close();
	remove("datastock.dat");
	rename("temp.dat", "datastock.dat");
}
void search_stock()
{
	fstream fout;
	fout.open("datastock.dat", ios::in);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter stock number to search:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		int StockNo, Quantity, Rem, bill;

		fout >> StockNo >> Quantity >> Rem >> bill;
		if (StockNo == search)
		{
			flag = 1;
			cout << "Stock number:" << StockNo << "\t\t" << "Quantity" << Quantity << endl;

		}
	}
	if (flag == 0)
	{
		cout << "Stock number not found" << endl;
	}
	fout.close();
}
void update_stock()
{
	fstream fin, fout;
	fin.open("datastock.dat", ios::in);
	fout.open("temp.dat", ios::out);
	if (!fin.is_open() && !fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter stock number to update:";
	cin >> search;
	bool flag = 0;
	while (!fin.eof())
	{
		int StockNo, Quantity, Rem, bill;

		fin >> StockNo >> Quantity >> Rem >> bill;
		if (StockNo == search)
		{
			flag = 1;
			cout << "Enter stock Number= ";
			cin >> StockNo;
			cout << "Quantity: ";
			cin >> Quantity;
			cout << "Remaing \n";
			cin >> Rem;
			cout << "Total Bill \n";
			cin >> bill;
			fout << endl << StockNo << "\t" << Quantity << "\t" << Rem << "\t" << bill;
		}
		else
		{
			fout << endl << StockNo << "\t" << Quantity << "\t" << Rem << "\t" << bill;
		}
	}
	if (flag == 0)
	{
		cout << "Stock number not found" << endl;
	}
	fin.close();
	fout.close();
	remove("datastock.dat");
	rename("temp.dat", "datastock.dat");

}

                          //______________________Expenses_____________________//

void add_Shop_expenses()
{
	ofstream fout;
	char expenses;
expenses:
	fout.open("expenses.dat", ios::app | ios::out);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int m, month, Sallary_1, Sallary_2, Shop_rent, utility_bills, Total;

m:
	cout << "Enter month number: \n";
	cin >> month;
	if (month > 12 || month < 0)
	{
		goto m;
	}
	else
	{
		int  goup, a1;
	goup:
		cout << "Enter utility bills: \n";
		cin >> utility_bills;
		cout << "Enter shop rent: \n";
		cin >> Shop_rent;
		cout << "Sallery 1 & Sallery 2\n";
		cin >> Sallary_1 >> Sallary_2;
		Total = utility_bills + Shop_rent + Sallary_1 + Sallary_2;
		fout << endl << month << "\t\t" << utility_bills << "\t\t" << Shop_rent << "\t\t" << Sallary_1 << "\t\t" << Sallary_2 << "\t\t" << Total;
		cout << "If you want to try again Please press 1 Otherwise press any Numaric key\n";
		cin >> a1;
		if (a1 == 1)
		{
			goto goup;
		}
		fout.close();
	}
}
void view_Shop_expenses()
{
	int month, Sallary_1, Sallary_2, Shop_rent, utility_bills, Total;


	ifstream fin;
	fin.open("expenses.dat", ios::in);
	if (!fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	while (!fin.eof())
	{
		fin >> month >> utility_bills >> Shop_rent >> Sallary_1 >> Sallary_2 >> Total;
		cout << "Month is: " << month << "\n" << "Utility bills are: " << utility_bills << "\n" << "Shop rent is: " << Shop_rent << "\n\n";
		cout << "Sallary of employee 1(A) is: " << Sallary_1 << "\n" << "Sallary of employee 2(B) is: " << Sallary_2 << "\n\n";
		cout << "Total budget is : " << Total << "\n\n\n";
	}
	fin.close();
}
void search_Shop_expenses()
{
	fstream fout;
	fout.open("expenses.dat", ios::in);
	if (!fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter month number to search budget: ";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		int month, Sallary_1, Sallary_2, Shop_rent, utility_bills, Total;

		fout >> month >> Sallary_1 >> Sallary_2 >> Shop_rent >> utility_bills >> Total;
		if (month == search)
		{
			flag = 1;
			cout << "Month" << month<<"\n";
			cout << "Sallary 1: " << Sallary_1 << "\t\t" << endl;
			cout << "Sallary 2: " << Sallary_2 << "\n" << "Shop rent: " << Shop_rent << "\n" << "utility_bills: " << utility_bills << "\n" << "Total Bill=" << Total << endl<< endl;
		}
		fout >> month >> Sallary_1 >> Sallary_2 >> Shop_rent >> utility_bills >> Total;
	}
	if (flag == 0)
	{

		cout << "Month number not found" << endl;
	}
	fout.close();
}
void update_Shop_expenses()
{
	fstream fin, fout;
	fin.open("expenses.dat", ios::in | ios::app);
	fout.open("temp.dat", ios::out | ios::app);
	if (!fin.is_open() && !fout.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter month number to update budget: ";
	cin >> search;
	bool flag = 0;
	while (!fin.eof())
	{

		int month, Sallary_1, Sallary_2, Shop_rent, utility_bills, Total;

		fin >> month >> Sallary_1 >> Sallary_2 >> Shop_rent >> utility_bills >> Total;
		if (month == search)
		{
			flag = 1;
			cout << "Enter month number:";
			cin >> month;
			cout << "Utility Bill\n";
			cin >> utility_bills;
			cout << "Enter Sallary 1: ";
			cin >> Sallary_1;
			cout << "Sallary 2: ";
			cin >> Sallary_2;
			cout << "Enter shop rent: ";
			cin >> Shop_rent;
			Total = utility_bills + Shop_rent + Sallary_1 + Sallary_2;
			fout << endl << month << "\t\t" << utility_bills << "\t\t" << Sallary_1 << "\t\t" << Sallary_2 << "\t\t" << Shop_rent << "\t\t" << Total;
		}
		else
		{
			fout << endl << month << "\t\t" << utility_bills << "\t\t" << Sallary_1 << "\t\t" << Sallary_2 << "\t\t" << Shop_rent << "\t\t" << Total;
		}

	}
	if (flag == 0)
	{
		cout << "Month number not found" << endl;
	}
	fin.close();
	fout.close();
	remove("expenses.dat");
	rename("temp.dat", "expenses.dat");

}
void remove_Shop_expenses()
{
	fstream fout, fin;
	fout.open("expenses.dat", ios::in);
	fin.open("temp.dat", ios::out);
	if (!fout.is_open() && !fin.is_open())
	{
		cout << "Connection not established";
		return;
	}
	int search;
	cout << "Enter month number to delete:";
	cin >> search;
	bool flag = 0;
	while (!fout.eof())
	{
		int month, Sallary_1, Sallary_2, Shop_rent, utility_bills, Total;
		fout >> month >> Sallary_1 >> Sallary_2 >> Shop_rent >> utility_bills >> Total;
		if (month == search)
		{
			flag = 1;
		}
		else
		{
			fin << endl << month << "\t" << Sallary_1 << "\t" << Sallary_2 << "\t" << Shop_rent << "\t" << utility_bills<<"\t"<<Total;
		}
	}
	if (flag == 0)
	{
		cout << "Month number not Found" << endl;
	}
	fout.close();
	fin.close();
	remove("expenses.dat");
	rename("temp.dat", "expenses.dat");
}

                        //_______________________END_____________________________//