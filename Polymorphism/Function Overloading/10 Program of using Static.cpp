using namespace std;
#include<iostream>
#include<conio.h>

class Overloading_Criteria                                  ///Allowed
{
    public :
            static void Fun(int Num)
            {
                cout << "\n Inside 1st Add()!!! " << Num << endl;
            }

            static void Fun(int No1, int No2)
            {
                cout << "\n Inside 2nd Add()!!! " << No1 << " and "<< No2 << endl;
            }
};

int main()
{
    Overloading_Criteria :: Fun(10);

    getch();

    Overloading_Criteria :: Fun(45, 78);

    getch();
    return 0;
}


















