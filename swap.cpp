// To swap two number

#include<iostream.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    clrscr();
    cout << "Input two numbers: ";
    cin >> a >> b;
                                 // ALTERNATIVE
    temp = a;                    // a = a + b;
    a = b;                       // b = a - b;
    b = temp;                    // a = a - b;
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b;
    getch();
}
