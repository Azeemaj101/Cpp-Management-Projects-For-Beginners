#include<iostream>    //cin or cout
#include<fstream>    //file handling
#include<cstring>   //strcpy or strcmp
#include<stdio.h>  //rename
#include"Header.h"//My Libary
#include<iomanip>// setw

using namespace std;
                               //______________________Functions________________//
          //*********************************************************************************************//

                        //____________Line 16=Token_____Line 165=Expenses__________//

        //**********************************************************************************************//
   //____________________________________________________________________________________________________________//
                            //_________________TOKEN______________//

void Token::updateRecordToken(char* t)
{

    ifstream fin;
    ofstream fout;
    fin.open("Token.txt", ios::binary | ios::in);
    if (!fin)
    {
        cout << "File Not Found \n";
    }
    else
    {
        fout.open("temp.txt", ios::out | ios::binary);
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(CounterID, t))
            {
                getTokenData();
                fout.write((char*)this, sizeof(*this));
            }
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("Token.txt");
        rename("temp.txt", "Token.txt");
    }
}
void Token::deleteRecordToken(char* t)
{
    ifstream fin;
    ofstream fout;
    fin.open("Token.txt", ios::binary | ios::in);
    if (!fin)
    {
        cout << "File Not Found \n";
    }
    else
    {
        fout.open("temp.txt", ios::out | ios::binary);
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            if (strcmp(CounterID, t))
            {
                fout.write((char*)this, sizeof(*this));
            }
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("Token.txt");
        rename("temp.txt", "Token.txt");
    }
}
void Token::searchRecordToken(char* aj)
{
    int counter = 0;
    ifstream fin;
    fin.open("Token.txt", ios::app | ios::binary | ios::in);
    if (!fin)
    {
        cout << "File Not Found \n";
    }
    else
    {
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(aj, CounterID))
            {
                showTokenData();
                counter++;
            }
            fin.read((char*)this, sizeof(*this));
        }
        if (counter == 0)
        {
            cout << "\nRecord Not Found";
        }
        fin.close();
    }

}
void Token::ViewAllToken()
{
    ifstream fin;
    fin.open("Token.txt", ios::in | ios::app | ios::binary);
    if (!fin)
    {
        cout << "\n File Are not open";
    }
    else
    {
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            showTokenData();
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
    }


}
int Token::storeToken()
{
    if (TokenNo == 0 && Date == 0 && month == 0 && Year == 0)
    {
        cout << "File Not Found \n";
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("Token.txt", ios::app | ios::binary);
        fout.write((char*)this, sizeof(*this));
        fout.close();
        return 1;
    }
}
void Token::getTokenData()
{
    cout << "Please Enter \t TokenNo .. CounterID .. Date .. Month .. Year\n";
    cin >> TokenNo;
    cin.ignore();
    cin.getline(CounterID, 19);
    cin >> Date;
    cin >> month;
    cin >> Year;
}
void Token::showTokenData()
{
    cout << "Token Number =" << TokenNo << "\t\t Counter ID =" << CounterID << "\t\tDate =" << Date << "\t\tMonth =" << month << "\t\tYear =" << Year << "\n";
}
Token::Token()
{
    TokenNo = 0;
    strcpy_s(CounterID, "No ");
    Date = 0;
    month = 0;
    Year = 0;
}

//_________________EXPENSES______________//

void Expenses::updateRecordExpenses(char* t)
{

    ifstream fin;
    ofstream fout;
    fin.open("Expenses.txt", ios::binary | ios::in );
    if (!fin)
    {
        cout << "File Not Found \n";
    }
    else
    {
        fout.open("temp.txt", ios::out | ios::binary );
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(ID, t))
            {
                getExpensesData();
                fout.write((char*)this, sizeof(*this));
            }
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("Expenses.txt");
        rename("temp.txt", "Expenses.txt");
    }
}
void Expenses::deleteRecordExpenses(char* t)
{
    ifstream fin;
    ofstream fout;
    fin.open("Expenses.txt", ios::binary | ios::in);
    if (!fin)
    {
        cout << "File Not Found \n";
    }
    else
    {
        fout.open("temp.txt", ios::out | ios::binary);
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            if (strcmp(ID, t))
            {
                fout.write((char*)this, sizeof(*this));
            }
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("Expenses.txt");
        rename("temp.txt", "Expenses.txt");
    }
}
void Expenses::searchRecordExpenses(char* aj)
{
    int counter = 0;
    ifstream fin;
    fin.open("Expenses.txt", ios::app | ios::binary | ios::in);
    if (!fin)
    {
        cout << "File Not Found \n";
    }
    else
    {
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(aj, ID))
            {
                showExpensesData();
                counter++;
            }
            fin.read((char*)this, sizeof(*this));
        }
        if (counter == 0)
        {
            cout << "\nRecord Not Found";
        }
        fin.close();
    }

}
void Expenses::ViewAllExpenses()
{
    ifstream fin;
    fin.open("Expenses.txt", ios::in | ios::app | ios::binary);
    if (!fin)
    {
        cout << "\n File Are not open";
    }
    else
    {
        fin.read((char*)this, sizeof(*this));
        while (!fin.eof())
        {
            showExpensesData();
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
    }


}
int Expenses::storeExpenses()
{
    if (Utility == 0 && month == 0 && Year == 0)
    {
        cout << "File Not Found \n";
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("Expenses.txt", ios::app | ios::binary);
        fout.write((char*)this, sizeof(*this));
        fout.close();
        return 1;
    }
}
void Expenses::getExpensesData()
{
    cout << "Please Enter \t Utility Bill .. ID (A to Z) .. Month .. Year\n";

    cin >> Utility;
    cin.ignore();
    cin.getline(ID, 19);
    cin >> month;
    cin >> Year;
}
void Expenses::showExpensesData()
{
    cout << "ID =" << ID << "\t\t Utility Bill =" << Utility << "\t\tMonth =" << month << "\t\tYear =" << Year << "\n";
}
Expenses::Expenses()
{
    Utility = 0;
    strcpy_s(ID, "No ");
    month = 0;
    Year = 0;
}