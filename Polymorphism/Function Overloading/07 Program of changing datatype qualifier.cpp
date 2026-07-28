using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Not Allowed
{
    public :
            void Fun(int Num)
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            void Fun(const int No)
            {
                cout << "\n Inside 2nd Add()!!! " << No << endl;
            }
};

int main()
{
    Overloading_Criteria Obj1;

    Obj1.Fun(10);

    getch();

    Obj2.Fun(73);

    getch();
    return 0;
}


















