#include<iostream>
#include<string>
#include<limits>
#include<stdlib.h>
using namespace std;

int decimal[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
string roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

int main()
{
    char again = 'Y';
    while(again=='Y' || again == 'y')
    {
        int num = 0;
        int oldNum = 0;
        string romNum ="";
        int i = 12;
        cout << " This program converts integer from 1 - 3000 to Roman Numeral\n\n";
        cout << " Input integer\t: ";
        
        /*check input validity*/
        while(!(cin >> num)||num <= 0 || num > 3000)
        {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " Invalid Integer!\n\n";
        cout << " Input integer\t: ";
        }
        
        oldNum = num;
        while (num>0)
        {
            int div = num/decimal[i];
            num = num%decimal[i];
            while(div--)
            {
                romNum += roman[i];
            }
            i--;
        }
        
        /*clear and load layout*/
        system("cls||clear");
        cout << "\n This program converts integer from 1 - 3000 to Roman Numeral\n\n";
        cout << " Input integer\t: " << oldNum << "\n";
        cout << " Output \t: " << romNum << "\n\n\n";

        /*prompt to convert again*/
        cout << " Do you wish to convert again? [y/n]: ";
        cin >> again;
        system("cls||clear");
    }
    return 0;
}