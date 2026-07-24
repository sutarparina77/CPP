using namespace std;
#include<iostream>
#include<conio.h>

class Addition
{
    public :
            void Add(int Num1, int Num2)                                            ///Not Allowed
            {
                cout << "\n Addition of 2 Number : " << Num1 + Num2 << endl;
            }

            void Add(int Num1, int Num2, int Num3)
            {
                cout << "\n Addition of 3 Number : " << Num1 + Num2 + Num3 << endl;
            }
};

int main()
{
    Addition Obj;

    Obj.Add(10, 20);

    getch();

    Obj.Add(73, 45, 65);

    getch();
    return 0;
}


















