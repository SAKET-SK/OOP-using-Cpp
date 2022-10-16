// To convert number of days into month-day format

#include<iostream.h>
#include<conio.h>
void main()
{
    int d,m,n;
    clrscr();
    cout << "Input the number of Days: ";
    cin >> n;
    
    m = n / 30;
    d = n % 30;
    
    cout << "Months = " << m << endl << "Days = " << d;
    getch();
}
