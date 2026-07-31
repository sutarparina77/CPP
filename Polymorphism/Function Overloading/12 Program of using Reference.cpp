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

            void Fun(int &Ref)
            {
                cout << "\n Inside 2nd Add()!!! " << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    getch();

    Obj.Fun(77);

    getch();

    int No = 45;

    Obj.Fun(No);

    getch();
    return 0;
}


















