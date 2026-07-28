using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Allowed
{
    public :
            void Fun(short int Num)
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            void Fun(long int No)
            {
                cout << "\n Inside 2nd Add()!!! " << No << endl;
            }

            void Fun(int N1)
            {
                cout << "\n Inside 2nd Add()!!! " << N1 << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    Obj.Fun(92);

    getch();

    Obj.Fun((short)92);

    getch();

    Obj.Fun((long)92);

    getch();
    return 0;
}


















