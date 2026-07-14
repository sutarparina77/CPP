using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
void Swap(int&, int&);

int main()
{
    int No1 = 0, No2 = 0;

    cout << "\n Enter the 1st Number :";
    cin >> No1;

    cout << "\n Enter the 2nd Number :";
    cin >> No2;

    cout << "\n Numbers Before Swapping is Number1 = " << No1 <<", Number 2 = " << No2 << "." << endl;

    Swap(No1, No2);

    cout << "\n Numbers After Swapping is Number1 = " << No1 <<", Number 2 = " << No2 << ".";

    getch();
    return 0;
}
void Swap(int& N1, int& N2)
{
    int Temp = 0;

    cout << "\n Inside Swap Function!! \n";

    //Swap logic
    Temp = N1;
    N1 = N2;
    N2 = Temp;
}
