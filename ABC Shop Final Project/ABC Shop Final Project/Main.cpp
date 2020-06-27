#include<iostream>     //cout or cin 
#include<fstream>     //File Handling
#include<Windows.h>  //Text-Color Libaray
#include"Header.h"  // My Libaray
#include<stdio.h>  //strcpy , strcmp OR rename
#include<iomanip> //setw

using namespace std;   
int main() 
{
	//Using Switch Statment To Arrange My Functions *Structure #[Example::Switch ( Switch ( if else ) ) )]
	//Main Switch [Line Case 1=50 _____Line Case 2 =127_____Line Case 3 =203_____Line Case 4=280_____Line Case 5=357]
	char aaj[30];
	int a2, back;
back:

	system("color 04");
	cout << "\n\n\n\n\n\n\n";
	cout << setw(90) << "**** Please Enter Your Name Or Password *****\n";
	cout << "Enter Your Name \n";
	cin.ignore();
	cin.getline(aaj, 29);
	cout << "Enter Password \n";
	cin >> a2;

	if (a2 == 1234)
	{

		system("color 03");
		ifstream aj;
		char ch;
		char menu;
		int up;
	menu:
	up:
		system("CLS");
		aj.open("Welcome.txt");
		ch = aj.get();
		while (!aj.eof()) {
			cout << ch;
			ch = aj.get();
		}
		aj.close();

		int a1;
		cin >> a1;

		switch (a1)
		{
		case 1:
			int Attand;
		Attand:
			system("CLS"); 
			cout << "HAM Auto Spare Parts Centre\n\n";
			cout << "1. For Add Attendance:\n";
			cout << "2. For View Attendance:\n";
			cout << "3. For update Attendance:\n";
			cout << "4. For search Attendance:\n";
			cout << "5. For Remove Attendance:\n";
			cout << "6. Press 6 for Main Menu\n";
			int d;
			cin >> d;

			switch (d)
			{
			case 1:
				system("CLS");  
				add_attendence();
				cout << "Press Any Key For Attendence  Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Attand;
				break;
			case 2:
				system("CLS");
				view_attendence();
				cout << "Press Any Key For Attendence  Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Attand;
				break;
			case 3:
				system("CLS");
				update_attendence();
				cout << "Press Any Key For Attendence  Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Attand;
				break;
			case 4:
				system("CLS");
				search_attendence();
				cout << "Press Any Key For Attendence  Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Attand;
				break;
			case 5:
				system("CLS");
				remove_attendence();
				cout << "Press Any Key For Attendence  Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Attand;
				break;
			case 6:
				system("CLS");
				goto menu;
				break;

			default:
				system("CLS");
				cout << "Invalid Selection Press Any Key For Try Again \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Attand;
				break;
			}
			break;

		case 2:
		{
			int expenses;
		expenses:
			system("CLS");
			cout << "HAM Auto Spare Parts Centre\n\n";
			cout << "1. For Add Shop expenses:\n";
			cout << "2. For View Shop expenses:\n";
			cout << "3. For search Shop expenses:\n";
			cout << "4. For Update Shop expenses:\n";
			cout << "5. For Remove Shop expenses:\n";
			cout << "6. For Main Menu\n";
			int c;
			cin >> c;
			switch (c)
			{
			case 1:
				system("CLS");
				add_Shop_expenses();
				cout << "Press Any Key For expenses Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto expenses;
				break;
			case 2:
				system("CLS");
				view_Shop_expenses();
				cout << "Press Any Key For expenses Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto expenses;
				break;
			case 3:
				system("CLS");
				search_Shop_expenses();
				cout << "Press Any Key For expenses Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto expenses;
				break;
			case 4:
				system("CLS");
				update_Shop_expenses();
				cout << "Press Any Key For expenses Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto expenses;
				break;
			case 5:
				system("CLS");
				remove_Shop_expenses();
				cout << "Press Any Key For expenses Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto expenses;
				break;
			case 6:
				system("CLS");
				goto menu;
				break;
			default:
				system("CLS");
				cout << "Invalid Selection . Press Any Key To Try Again \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto expenses;
				break;
			}
			break;//Case 2: Break)
		}
		case 3:
		{
			int Token;
		Token:
			system("CLS");
			cout << "HAM Auto Spare Parts Centre\n\n";
			cout << "1. For Add Token_no:\n";
			cout << "2. For View Token_no:\n";
			cout << "3. For search Token_no:\n";
			cout << "4. For Update Token_no:\n";
			cout << "5. For Remove Token_no:\n";
			cout << "6. For Main Menu\n";
			int a;
			cin >> a;
			switch (a)
			{
			case 1:
				system("CLS");
				addToken();
				cout << "Press Any Key For Token Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Token;
				break;
			case 2:
				system("CLS");
				viewToken();
				cout << "Press Any Key For Token Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Token;
				break;
			case 3:
				system("CLS");
				search_Token();
				cout << "Press Any Key For Token Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Token;
				break;
			case 4:
				system("CLS");
				update_Token();
				cout << "Press Any Key For Token Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Token;
				break;
			case 5:
				system("CLS");
				remove_Token();
				cout << "Press Any Key For Token Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Token;
				break;
			case 6:
				system("CLS");
				goto menu;
				break;

			default:
				system("CLS");
				cout << "Invalid Selection. Press Any Key To Try Again \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto Token;
				break;
			}
		break;//CAse 3 Break)
		}
		case 4:
		{
			int stock;
		stock:
			system("CLS");
			cout << "HAM Auto Spare Parts Centre\n\n";
			cout << "1. For Add Stock:\n";
			cout << "2. For View Stock:\n";
			cout << "3. For Remove Stock:\n";
			cout << "4. For Search Stock:\n";
			cout << "5. For Update Stock:\n";
			cout << "6.For Main Menu\n";

			int b;
			cin >> b;
			switch (b)
			{
			case 1:
				system("CLS");
				add_stock();
				cout << "Press Any Key For Stock Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto stock;
				break;
			case 2:
				system("CLS");
				view_stock();
				cout << "Press Any Key For Stock Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto stock;
				break;
			case 3:
				system("CLS");
				remove_stock();
				cout << "Press Any Key For Stock Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto stock;
				break;
			case 4:
				system("CLS");
				search_stock();
				cout << "Press Any Key For Stock Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto stock;
				break;
			case 5:
				system("CLS");
				update_stock();
				cout << "Press Any Key For Stock Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto stock;
				break;
			case 6:
				system("CLS");
				goto menu;
				break;
			default:
				system("CLS");
				cout << "Invalid Selection. Press Any Key For Try Again \n";
				cout << "Press Any Key For Stock Menu \n";
				cin.ignore();
				cin.get();
				system("CLS");
				goto stock;
				break;
			break; //Case 4 Break)
			}
		case 5:
			system("CLS");
			system("color 04");
			cout << "\n\n\n\n\t\t\tAllah HAfiz \t\t TakeCare\n\n\n\n\n";
			break; //Case 5 Break & Exit Point)

		default:
			system("CLS");
			goto up;
			break;

		}
		}
	}
else //Login Else)
	{
	system("CLS");
		cout << "Pree Any Key To  Try Again \n";
		cin.ignore();
		cin.get();
		system("CLS");
		goto back;
	}
}