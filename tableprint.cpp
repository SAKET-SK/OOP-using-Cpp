// To print Table of any number using class and object

#include<iostream.h>
#include<conio.h>
class Table
{
    private:
    int n,i;
    
    public:
    void getValue()
    {
        cout << "Enter a number : ";
        cin >> n;
    }
    void putValue()
    {
        for(i = 1; i <= 10; i++)
        {
            cout << n + " * " + i + " = " + n * i << endl;
        }
    }
};
void main()
{
    clrscr();
    Table t;
    t.getValue();
    t.putValue();
    getch();
}
  
