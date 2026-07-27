using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Allowed
{
    public :
            void Fun(int Num)
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            void Fun(int No)const
            {
                cout << "\n Inside 2nd Add()!!! " << No << endl;
            }
};

int main()
{
    const Overloading_Criteria Obj1;

    Overloading_Criteria Obj2;

    Obj1.Fun(10);

    getch();

    Obj2.Fun(73);

    getch();
    return 0;
}


















