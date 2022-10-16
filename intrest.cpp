// To calculate simple intrest

#include<iostream.h>
#include<conio.h>
void main()
{
    int s,p,n,r;
    clrscr();
    cout << "Input PRINCIPLE AMOUNT, NUMBER OF YEARS and RATE OF INTREST: ";
    cin >> p >> n >> r;
    
    s = (p * n * r) / 100;
    cout << "Simple Intrest = " << s;
    getch();
}
  
