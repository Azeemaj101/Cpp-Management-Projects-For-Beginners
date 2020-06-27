#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void fun_derivative();
double coeff1;
double coeff2;
double exponent1;
double exponent2;
double coeff3;
double exponent3;

int main()
{
 string menu_choice;
 while (menu_choice != "3")// keep user in this menu until they leave.
{
 cout << "\n\n**********************"<< "\n\n";
 cout<<"1. Derivative"<< "\n";
 cout<<"2. Not used yet"<< "\n";
 cout<<"3. Exit"<< "\n\n";
 cout<<"Enter choice: ";
 cin >> menu_choice;

 if (menu_choice == "1")
    {
     fun_derivative();
    }

 else 
    cout<<" ********************** ";
}

 return 0;
}
void fun_derivative()
{
 string num_coeff;
 while (num_coeff != "4") 
{
 cout << "\n\n**********************"<< "\n\n*DERIVATIVES*"<< "\n\n";
 cout<<"Monomial or polynomial?"<< "\n";
 cout<<"1. 1 coefficient"<< "\n";
 cout<<"2. 2 coefficients"<< "\n";
 cout<<"3. 3 coefficients"<< "\n ";
 cout<<"4. Return to previous screen"<< "\n\n";
 cout<<"Enter choice: ";
 cin >> num_coeff;

 if (num_coeff == "1")
    {
     cout << "\n\nEnter value of coefficient: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent: ";
     cin >> exponent1;
     cout << "\n\nYou entered: "<< coeff1 << "x^" << exponent1<< "\n\n";
     cout<<"Your new derivative is: "<< exponent1 * coeff1 << "x^" << exponent1 - 1 << endl;
    }
 else if (num_coeff == "2")
    {
     cout << "\n\nEnter value of coefficient 1: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent 1: ";
     cin >> exponent1;
     cout << "\n\nEnter value of coefficient 2: ";
     cin >> coeff2;
     cout << "\nEnter value of exponent 2: ";
     cin >> exponent2;
     // same as above, just twice as long!
     cout << "\n\nYou entered: "<< coeff1 << "x^" << exponent1 << " + "<< coeff2 << "x^" << exponent2<< "\n\n";
     cout<<"Your new derivative is: "<< exponent1 * coeff1 << "x^" << exponent1 - 1 << " + ";
     cout<<exponent2 * coeff2 << "x^" << exponent2 - 1 << endl;   
    }
 else if (num_coeff == "3")
    {
     cout << "\n\nEnter value of coefficient 1: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent 1: ";
     cin >> exponent1;
     cout << "\n\nEnter value of coefficient 2: ";
     cin >> coeff2;
     cout << "\nEnter value of exponent 2: ";
     cin >> exponent2;
     cout << "\n\nEnter value of coefficient 3: ";
     cin >> coeff3;
     cout << "\nEnter value of exponent 3: ";
     cin >> exponent3;
     // same again, 3x the length. See why global variables are good?
     cout <<"\n\nYou entered: "<<coeff1 << "x^" <<exponent1 << " + "<<coeff2 << "x^" << exponent2 << " + "<< coeff3 << "x^" << exponent3<<"\n\n";
     cout<<"Your new derivative is: "<< exponent1 * coeff1 << "x^" << exponent1 - 1 << " + ";
     cout<< exponent2 * coeff2 << "x^" << exponent2 - 1 << " + "<< exponent3 * coeff3 << "x^" << exponent3 - 1 << endl;
    }
    }
}

