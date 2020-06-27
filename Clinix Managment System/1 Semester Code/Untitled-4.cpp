#include<iostream>
using namespace std;
int main()
{
    system("CLS");
    int n,a;
    cout<<"Enter 5 Int Values "<<endl;
    cin>>n;
    for(int j=4 ; j>=0 ;j--)
    {
    a=n%10;
	cout<<a;
	n=n/10;
    }
}