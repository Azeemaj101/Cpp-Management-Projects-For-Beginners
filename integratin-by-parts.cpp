#include<iostream>
#include<iomanip>
using namespace std;
void integration(float , float);
int main()
{
    system("CLS");
    double integ[2];
    char up;
    up:
    cout<<setw(70)<<"Integration By Parts Method \n";
    cout<<"Give The Algabric Expiration & And Second Value is Automaticly '1' \n";
    cout<<"Please Enter First Constant Value \n";
    cin>>integ[0];
    cout<<"Please Enter First Power Value \n";
    cin>>integ[1];
    integration(integ[0] , integ[1]);
    cout<<"Press 1 To Try Again \n";
    cin>>integ[2];
    if(integ[2]== 1)
    {
        goto up;
    }
    else
    {
        cout<<"Thanks Allah Hafiz \n";
    }
}
void integration(float a , float b)
{
    cout<<"You Entered: "<<a<<"x^"<<b <<" . 1 \n";
    cout<<"\nIntegration By Parts  is: "<< "("<<1 * a<< "/"<< b + 1<<")" << "(x^" << b + 1<<")"<<" - 0 \n\n"; 
    //Becouse {1.∫ x dx - ∫∫ x (d/dx .1) dx } so, Derivation of Constant Value is zero (d/dx .1 = 0) 
    cout<<"The Answer is"<< "("<<1 * a<< "/"<< b + 1<<")" << "(x^" << b + 1<<") \n\n";
}
