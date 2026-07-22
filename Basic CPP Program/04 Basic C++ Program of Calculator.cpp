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

            Calc(int N1, int N2)                  ///Parametarized Constructor
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

                cout << "\n Inside Copy Constructor!! " << endl;
            }

            ~Calc()
            {
                cout << "\n Inside Destructor!!" << Sub << endl;
            }

            void Set_Values()
            {
                cout << "\n Enter 2 Numbers :";
                cin >> No1 >> No2;
            }

            void Addition()
            {
                Sum = No1 + No2;
            }

            void Subtraction()
            {
                Sub = No1 - No2;
            }
};

int main()
{
    Calc Obj1;

    Obj1.Set_Values();

    Obj1.Addition();
    Obj1.Subtraction();

    cout << "\n Addition For Obj1 = "<< Obj1.Sum << endl;
    cout << "\n Subtraction For Obj1 = "<< Obj1.Sub << endl;

    getch();

    Calc Obj2(35, 23);

    Obj2.Addition();
    Obj2.Subtraction();

    cout << "\n Addition For Obj2 = "<< Obj2.Sum << endl;
    cout << "\n Subtraction For Obj2 = "<< Obj2.Sub << endl;

    getch();

    Calc Obj3(Obj2);

    cout << "\n Addition For Obj3 = "<< Obj3.Sum << endl;
    cout << "\n Subtraction For Obj3 = "<< Obj3.Sub << endl;

    getch();

    Obj3.Set_Values();

    cout << "\n Addition For Obj3 = "<< Obj3.Sum << endl;
    cout << "\n Subtraction For Obj3 = "<< Obj3.Sub << endl;

    getch();

    Obj3.Addition();
    Obj3.Subtraction();

    cout << "\n Addition For Obj3 = "<< Obj3.Sum << endl;
    cout << "\n Subtraction For Obj3 = "<< Obj3.Sub << endl;

    cout << "\n Back in Main()" << endl;

    getch();
}


















