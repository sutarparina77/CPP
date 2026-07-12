using namespace std;
#include<iostream>
#include<conio.h>

class Stud
{
    private:
            char Name[40];
            int Mob_No;
            char Addr[40];
            float Per;

    public:
            int R_No;

            void Set_Stud_Details();
            void Get_Stud_Details();
};

int main()
{
    Stud Stud1, Stud2;

    getch();
    return 0;
}
