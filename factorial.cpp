// To calculate Factorial of a number

#include<iostream.h>
#include<conio.h>
void main()
{
    long int i ,n ,fact = 1;
    clrscr();
    cout << "Input number: ";
    cin >> n;
    
    for( i = 0; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial = " << fact;
    getch();
}
