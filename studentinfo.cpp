// To print student details using class and objects

#include<iostream.h>
#include<conio.h>
class Student
{
    private:
    char name[10];
    int rn;
    float pr;
    
    public:
    void getData()
    {
        cout << "Input STUDENT NAME, ROLL NO and PERCENTAGE : ";
        cin >> name >> rn >> pr;
    }
    void putData()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rn << endl;
        cout << "Pefcentage = " << pr;
    }
};
void main()
{
    clrscr();
    Student s;
    s.getData();
    s.putData();
    getch();
}
