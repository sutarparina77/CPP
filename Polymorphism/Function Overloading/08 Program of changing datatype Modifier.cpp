using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Allowed
{
    public :
            void Fun(signed int Num)
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            void Fun(unsigned int No)
            {
                cout << "\n Inside 2nd Add()!!! " << No << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    Obj.Fun(-22);

    getch();

    Obj.Fun(67);

    getch();

    unsigned int i = 45;

    Obj.Fun(i);

    getch();
    return 0;
}


















