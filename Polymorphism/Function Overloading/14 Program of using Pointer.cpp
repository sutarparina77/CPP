using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Not Allowed
{
    public :
            void Fun(int *Ptr)
            {
                cout << "\n Inside 1st Add()!!! " << *Ptr << endl;
            }

            void Fun(char *P)
            {
                cout << "\n Inside 2nd Add()!!! " << *P << endl;
            }
};

int main()
{
    int No = 45;
    char ch = 'A';

    Overloading_Criteria Obj;

    getch();

    Obj.Fun(&No);

    Obj.Fun(&ch);

    Obj.Fun((int*)7865);

    Obj.Fun((char*)4568);

    getch();
    return 0;
}


















