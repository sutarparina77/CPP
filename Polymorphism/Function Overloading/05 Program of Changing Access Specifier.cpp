using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Not Allowed
{
    public :
            void Fun(int Num)
            {
                cout << "\n Inside 1st Add()!!! " << endl;
            }

    private:
            void Fun(int No)
            {
                cout << "\n Inside 2nd Add()!!! " << endl;
            }
};

int main()
{
    Overloading_Criteria Obj;

    Obj.Fun(10);

    getch();

    Obj.Fun(73);

    getch();
    return 0;
}


















