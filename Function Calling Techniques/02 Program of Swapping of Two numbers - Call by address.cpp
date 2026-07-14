using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
void Swap(int*, int*);

int main()
{
    int No1 = 0, No2 = 0;

    cout << "\n Enter the 1st Number :";
    cin >> No1;

    cout << "\n Enter the 2nd Number :";
    cin >> No2;

    cout << "\n Numbers Before Swapping is Number1 = " << No1 <<", Number 2 = " << No2 << "." << endl;

    Swap(&No1, &No2);

    cout << "\n Numbers After Swapping is Number1 = " << No1 <<", Number 2 = " << No2 << "." << endl;

    getch();
    return 0;
}
void Swap(int* P1, int* P2)
{
    int Temp = 0;

    cout << "\n Inside Swap Function!! ";

    //Swap logic
    Temp = *P1;
    *P1 = *P2;
    *P2 = Temp;

}
