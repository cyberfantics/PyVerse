#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int row = 0;
    while (row < 5)
    {
        int col = 0;
        while (col < 5)
        {
            if (((row * col == 0) || ((row == 2 || row == 4) && col != 0)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            col++;
        }

        cout << endl;
        row++;
    }
    getch();
}

// Created by Salfi Hacker Mansoor Bukhari