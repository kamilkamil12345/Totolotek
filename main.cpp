#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
    int liczba;
    cout << "Witaj! Rozpoczynamy losowanie totolotka! Wylosujemy 6 liczb z zakresu od 1 do 49." << endl;
    Sleep(3000);
    system("cls");

    cout << "Nastepuje zwolnienie blokady..." << endl;
    Sleep(2500);
    system("cls");

    cout << "...beben losujacy jest pelny..." << endl;
    Sleep(2500);
    system("cls");

    cout << "I rozpoczynamy losowanie!" << endl;
    Sleep(5000);
    system("cls");

    for (int i = 1; i <= 6; i++)
    {
        srand(time(NULL));
        liczba = rand()%49+1;
        cout << i << ". liczba to " << liczba << "\a" << endl;
        Sleep(2500);
    }

    cout << "Gratulujemy zwyciezcom!" << endl;

    return 0;
}
