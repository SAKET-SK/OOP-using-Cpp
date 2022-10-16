// To calculate area and perimeter of rectangle

#include<iostream.h>
#include<conio.h>
void main()
{
    int l,b,a,p;
    clrscr();
    cout << "Input length and breadth: ";
    cin >> l >> b;
    
    a = l * b;
    p = 2 * (l+b);
    
    cout << "Area = " << a << endl;
    cout << "Perimeter = " << p;
    getch();
}
