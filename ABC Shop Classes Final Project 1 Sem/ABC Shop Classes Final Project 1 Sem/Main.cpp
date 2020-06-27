#include<iostream>    //cin or cout
#include<fstream>    //file handling
#include<cstring>   //strcpy or strcmp
#include<stdio.h>  //rename
#include"Header.h"//My Libary
#include<iomanip>// setw

using namespace std;

int main()
{
	//Using Switch Statment To Arrange My Functions *Structure #[Example::Switch ( Switch ( if else ) ) )]
   //Main Switch [Line Case 1=47 _____Line Case 2 =218_____Line Case 3 =351]
	char aaj[30];
	int a2, back;
	char glogin;
glogin:
	system("color 04");
	cout << "\n\n\n\n\n\n\n";
	cout << setw(90) << "Please Enter Your Name Or Password \n";
	cout << "Enter Your Name \n";
	cin.ignore();
	cin.getline(aaj, 29);
	cout << "Enter Password \n";
	cin >> a2;
	if (a2 == 1234)
	{
		char menu;
	menu:
		system("color 03");
		ifstream aj;
		char ch;
		int up;
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
		{
			char gExp;
		gExp:
			Expenses b3;
			system("CLS");
			cout << "HAM Auto Spare Parts Centre\n\n";
			cout << "1. For Add Shop expenses:\n";
			cout << "2. For View Shop expenses:\n";
			cout << "3. For search Shop expenses:\n";
			cout << "4. For Update Shop expenses:\n";
			cout << "5. For Remove Shop expenses:\n";
			cout << "6. For Main Menu\n";
			int z7;
			cin >> z7;
			switch (z7)
			{
			case 1:
			{
				b3.getExpensesData();
				b3.storeExpenses();
				char up5;
			up5:
				system("PAUSE");
				system("CLS");
				cout << "Press 1 For Expenses Menu Or 2 For Main Menu \n";
				int k1;
				cin >> k1;
				if (k1 == 1)
				{
					goto gExp;
				}
				else if (k1 == 2)
				{
					goto menu;
				}
				else
				{
					system("PAUSE");
					goto up5;
				}

				break;
			}
			case 2:
			{
				b3.ViewAllExpenses();
				char up1;
			up1:
				system("PAUSE");
				system("CLS");
				cout << "Press 1 For Expenses Menu Or 2 For Main Menu \n";
				int k2;
				cin >> k2;
				if (k2 == 1)
				{
					goto gExp;
				}
				else if (k2 == 2)
				{
					goto menu;
				}
				else
				{
					system("PAUSE");
					goto up1;
				}
				break;
			}
			case 3:
			{
				char c4[10];
				cout << "Enter ID Number (A to Z)\n";
				cin.ignore();
				gets_s(c4);
				b3.searchRecordExpenses(c4);
				char up2;
			up2:
				system("PAUSE");
				system("CLS");
				cout << "Press 1 For Expenses Menu Or 2 For Main Menu \n";
				int k3;
				cin >> k3;
				if (k3 == 1)
				{
					goto gExp;
				}
				else if (k3 == 2)
				{
					goto menu;
				}
				else
				{
					system("PAUSE");
					goto up2;
				}
				break;
			}
			case 4:
			{
				char c5[10];
				cout << "Enter ID Number (A to Z)\n";
				cin.ignore();
				gets_s(c5);
				b3.updateRecordExpenses(c5);
				char up3;
			up3:
				system("PAUSE");
				system("CLS");
				cout << "Press 1 For Expenses Menu Or 2 For Main Menu \n";
				int k4;
				cin >> k4;
				if (k4 == 1)
				{
					goto gExp;
				}
				else if (k4 == 2)
				{
					goto menu;
				}
				else
				{
					system("PAUSE");
					goto up3;
				}
				break;
			}
			case 5:
			{
				char c6[10];
				cout << "Enter ID Number (A to Z)\n";
				cin.ignore();
				gets_s(c6);
				b3.deleteRecordExpenses(c6);
				char up4;
			up4:
				system("PAUSE");
				system("CLS");
				cout << "Press 1 For Expenses Menu Or 2 For Main Menu \n";
				int k5;
				cin >> k5;
				if (k5 == 1)
				{
					goto gExp;
				}
				else if (k5 == 2)
				{
					goto menu;
				}
				else
				{
					system("PAUSE");
					goto up4;
				}
				break;
			}
			case 6:
			{
				system("PAUSE");
				goto menu;
			}
			default:
			{
				cout << "You Press wrong Key \n";
				system("PAUSE");
				goto gExp;
			}
			break;
			}
		}
		break;
		case 2://MAin CAse 2
		{
			char gtok;
		gtok:
			system("CLS");
			Token b1;
			cout << "HAM Auto Spare Parts Centre\n\n";
			cout << "1. For Add Token_no:\n";
			cout << "2. For View Token_no:\n";
			cout << "3. For search Token_no:\n";
			cout << "4. For Update Token_no:\n";
			cout << "5. For Remove Token_no:\n";
			int a9;
			cin >> a9;
			switch (a9)
			{
			case 1:
				b1.getTokenData();
				b1.storeToken();
				char gStorT;
			gStorT:
				cout << "Press 1 for Token Menu & 2 for MAin Menu \n";
				int b3;
				cin >> b3;
				if (b3 == 1)
				{
					goto gtok;
				}
				else if (b3 == 2)
				{
					goto menu;
				}
				else
				{
					goto gStorT;
				}
				break;
			case 2:
				b1.ViewAllToken();
			gViewT:
				cout << "Press 1 for Token Menu & 2 for MAin Menu \n";
				int b4;
				cin >> b4;
				if (b4 == 1)
				{
					goto gtok;
				}
				else if (b4 == 2)
				{
					goto menu;
				}
				else
				{
					goto gViewT;
				}
				break;
			case 3:
				char aj3[50];
				cout << "Enter ID Number (A to Z)\n";
				cin.ignore();
				gets_s(aj3);
				b1.searchRecordToken(aj3);
			gSearT:
				cout << "Press 1 for Token Menu & 2 for MAin Menu \n";
				int b5;
				cin >> b5;
				if (b5 == 1)
				{
					goto gtok;
				}
				else if (b5 == 2)
				{
					goto menu;
				}
				else
				{
					goto gSearT;
				}
				break;
			case 4:
				char z1[150];
				cout << "Enter ID Number (A to Z)\n";
				cin.ignore();
				gets_s(z1);
				b1.updateRecordToken(z1);
				char gupdt;
			gupdt:
				cout << "Press 1 for Token Menu & 2 for MAin Menu \n";
				int b6;
				cin >> b6;
				if (b6 == 1)
				{
					goto gtok;
				}
				else if (b6 == 2)
				{
					goto menu;
				}
				else
				{
					goto gupdt;
				}
				break;
			case 5:
				char c1[50];
				cout << "Enter ID Number (A to Z)\n";
				cin.ignore();
				gets_s(c1);
				b1.deleteRecordToken(c1);
			gDetT:
				cout << "Press 1 for Token Menu & 2 for MAin Menu \n";
				int b7;
				cin >> b7;
				if (b7 == 1)
				{
					goto gtok;
				}
				else if (b7 == 2)
				{
					goto menu;
				}
				else
				{
					goto gDetT;
				}
				break;
			default:
				cout << "You Press Wrong Key. Press Any Key to try again \n";
				cin.ignore();
				goto gtok;
			}
		}

		case 3:
		{
			system("color 04");
			cout << "\n\n\n\n\n\t\t Allah HAfiz\n\n\n\n";
		}
		default:
		{
			system("PAUSE");
			goto menu;
		}
		}
	}
	else
	{
		cout << "Wrong Password \n";
		system("PAUSE");
		goto glogin;
	}

}