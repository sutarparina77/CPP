using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
    private :
            int No1, No2;

    public :
            int Sum, Sub;

            Calc()                                  ///Default Constructor
            {
                No1 = No2 = Sum = Sub = 0;

                cout << "\n Inside Default Constructor!! " << endl;
            }

            Calc(int No1, int No2)                  ///Parametarized Constructor
            {
                No1 = N1;
                No2 = N2;
                Sum = Sub = 0;

                cout << "\n Inside Parametarized Constructor!! " << endl;
            }

            Calc(Calc &Ref)
            {
                this->No1 = Ref.No1;
                this->No2 = Ref.No2;

                this->Sum = 0;
                this->Sub = 0;


            }
};
