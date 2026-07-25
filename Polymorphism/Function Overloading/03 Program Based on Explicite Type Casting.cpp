using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria
{
    public :
            void Fun(int Num)                               ///Allowed
            {
                cout << "\n Inside 1st Add()!!! " << endl;
            }

            void Fun(double No)
            {
                cout << "\n Inside 2nd Add()!!! " << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    Obj.Fun(10);

    getch();

    Obj.Fun(73.5);

    getch();

    Obj.Fun((int)3.14f);

    getch();
    return 0;
}


















