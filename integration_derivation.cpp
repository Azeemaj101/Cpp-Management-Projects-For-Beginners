#include <iostream>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;
// some global variables to help save space - we'll be using these a lot.
// coeff = coefficient
double coeff1;
double coeff2;
double coeff3;
double exponent1;
double exponent2;
double exponent3;
// derivatives!
void fun_derivative()
{
 string num_coeff;
 while (num_coeff != "4") // keep user in this menu until they leave.
{
 // I love these menus.
 cout << "\n\n**********************"<< "\n\n*DERIVATIVES*"<< "\n\nMonomial or polynomial?"<< "\n 1. 1 coefficient"<< "\n 2. 2 coefficients"<< "\n 3. 3 coefficients"<< "\n 4. Return to previous screen"<< "\n\nEnter choice: ";
 cin >> num_coeff;

 if (num_coeff == "1")
    {
     cout << "\n\nEnter value of coefficient: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent: ";
     cin >> exponent1;
     // here we're just showing what they entered and what the new
     // derivative is.
     // formula: f(x) = x^r --> f'(x) = rx^(r-1)
     cout << "\n\nYou entered: "<< coeff1 << "x^" << exponent1<< "\n\nYour new derivative is: "<< exponent1 * coeff1 << "x^" << exponent1 - 1 << endl;
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
     cout << "\n\nYou entered: "<< coeff1 << "x^" << exponent1 << " + "<< coeff2 << "x^" << exponent2<< "\n\nYour new derivative is: "<< exponent1 * coeff1 << "x^" << exponent1 - 1 << " + "<< exponent2 * coeff2 << "x^" << exponent2 - 1 << endl;   
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
     cout << "\n\nYou entered: "<< coeff1 << "x^" << exponent1 << " + "<< coeff2 << "x^" << exponent2 << " + "<< coeff3 << "x^" << exponent3<< "\n\nYour new derivative is: "<< exponent1 * coeff1 << "x^" << exponent1 - 1 << " + "<< exponent2 * coeff2 << "x^" << exponent2 - 1 << " + "<< exponent3 * coeff3 << "x^" << exponent3 - 1 << endl;
    }
}
 return;
}
// integrals!!
void fun_integral()
{
 string num_coeff2;
 cout.precision(10);
 while (num_coeff2 != "4")// keep user in this menu until they leave.
{
 cout << "\n\n**********************"    << "\n\n*INTEGRALS*"<< "\n\nMonomial or polynomial?"<< "\n 1. 1 coefficient"<< "\n 2. 2 coefficients"<< "\n 3. 3 coefficients"<< "\n 4. Return to previous screen"<< "\n\nEnter choice: ";
 cin >> num_coeff2;

 if (num_coeff2 == "1")
    {
     cout << "\n\nEnter value of coefficient: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent: ";
     cin >> exponent1;
     // here we're showing the user what they entered,
     // and then the resulting integration of that.
     // formula: x^n dx = x^(n+1) / (n+1) + C
     // if they enter -1 as n, it won't give an error, but
     // they ought to know it's incorrect.
     cout << "\n\nYou entered: "    << coeff1 << "x^" << exponent1 << "\n\nYour new integral is: ("  << coeff1 << "/" << exponent1 + 1   << ")x^" << exponent1 + 1 << endl;
    }
 else if (num_coeff2 == "2")
    {
     cout << "\n\nEnter value of coefficient 1: ";
     cin >> coeff1;
     cout << "\nEnter value of exponent 1: ";
     cin >> exponent1;
     cout << "\n\nEnter value of coefficient 2: ";
     cin >> coeff2;
     cout << "\nEnter value of exponent 2: ";
     cin >> exponent2;
     cout << "\n\nYou entered: "    << coeff1 << "x^" << exponent1 << " + "   << coeff2 << "x^" << exponent2   << "\n\nYour new integral is: ("   << coeff1 << "/" << exponent1 + 1   << ")x^" << exponent1 + 1 << " + ("<< coeff2 << "/" << exponent2 + 1<< ")x^" << exponent2 + 1 << endl;
    }
 else if (num_coeff2 == "3")
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
     cout << "\n\nYou entered: "   << coeff1 << "x^" << exponent1 << " + "   << coeff2 << "x^" << exponent2 << " + "    << coeff3 << "x^" << exponent3    << "\n\nYour new integral is: ("    << coeff1 << "/" << exponent1 + 1   << ")x^" << exponent1 + 1 << " + ("   << coeff2 << "/" << exponent2 + 1    << ")x^" << exponent2 + 1 << " + ("    << coeff3 << "/" << exponent3 + 1   << ")x^" << exponent3 + 1 << endl;
    }
}
 return;
}
int main()
{
 string menu_choice;
 while (menu_choice != "4")// keep user in this menu until they leave.
{
 cout << "\n\n**********************"<< "\n\n 1. Derivative"<< "\n 2. Integral"<< "\n 3. Not used yet"<< "\n 4. Exit"<< "\n\nEnter choice: ";
 cin >> menu_choice;

 if (menu_choice == "1")
    {
     fun_derivative();
    }

 else if (menu_choice == "2")
    {
     fun_integral();
    }
}

 return 0;
}