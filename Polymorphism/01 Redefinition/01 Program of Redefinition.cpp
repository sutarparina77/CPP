using namespace std;
#include<iostream>
#include<conio.h>

class Category                                          ///Base Class
{
    public :
            int Cat_ID;

            Category()
            {
                this->Cat_ID = 100;

                cout << "\n Inside Category Constructor!! " << endl;
            }

            ~Category()
            {
                cout << "\n Inside Category Destructor!!" << endl;
            }

            void Display(int Num)
            {
                cout << "\n Inside Base Class Display Function " << Num;
            }
};

class Product : public Category                         ///Derived Class
{
    private :
            int P_ID;

    public :
            int Cat_ID;

            Product()
            {
                this->P_ID = 0;
                this->Cat_ID = 0;

                cout << "\n Inside Product Constructor!! " << endl;
            }

            ~Product()
            {
                cout << "\n Inside Product Destructor!!" << endl;
            }

            void Display(int Num)
            {
                cout << "\n Inside Derived Class Display Function " << Num << endl;
            }
};

int main()
{
    Product Obj;

    cout << Obj.Cat_ID << endl;

    getch();

    cout << Obj.Category::Cat_ID << endl;

    Obj.Display(7);

    getch();

    Obj.Category::Display(5);

    getch();
    return 0;
}


















