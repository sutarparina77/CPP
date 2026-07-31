using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Allowed
{
    public :
            static void Fun(int Num, float No)
            {
                cout << "\n Inside 1st Add()!!! " << Num << " and " << No << endl;
            }

            static void Fun(float No, int Num)
            {
                cout << "\n Inside 2nd Add()!!! " << No << " and "<< Num << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    getch();

    Obj.Fun(15, 78.4f);

    getch();

    Obj.Fun(78.4f, 15);

    getch();
    return 0;
}


















