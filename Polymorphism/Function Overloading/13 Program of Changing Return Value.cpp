using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Not Allowed
{
    public :
            int Fun(int Num)
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            char Fun(char ch)
            {
                cout << "\n Inside 2nd Add()!!! " << ch << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    getch();

    Obj.Fun(77);

    getch();

    Obj.Fun('P');

    getch();
    return 0;
}


















