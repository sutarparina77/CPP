using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria
{
    public :
            void Fun(int Num)                               ///Allowed
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            void Fun(double No)
            {
                cout << "\n Inside 2nd Add()!!! " << No << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    Obj.Fun(10);

    getch();

    Obj.Fun('P');

    getch();

    Obj.Fun(3.14f);

    Obj.Fun(7.56);

    getch();
    return 0;
}


















