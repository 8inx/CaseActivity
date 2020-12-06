/*without the use of arrays*/
#include<iostream>
#include<string>
#include<limits>
#include<stdlib.h>
using namespace std;

int main()
{
    char again = 'Y';
    string romanNumeral;
    int num,oldNum;
    while(again=='Y' || again == 'y')
    {

        cout << " This program converts integer from 1 - 3000 to Roman Numeral\n\n";
        cout << " Input integer\t: ";

        /*get input and validate*/
        while(!(cin >> num)||num <= 0 || num > 3000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Invalid Integer!\n\n";
            cout << " Input integer\t: ";
        }

        oldNum = num;
        romanNumeral = "";

        while(num>0)
        {
            if(num/1000)
            {
                romanNumeral += "M";
                num = num - 1000; 
            }
            else if(num/900)
            {
                romanNumeral += "CM";
                num = num - 900;
            }
            else if(num/500)
            {
                romanNumeral += "D";
                num = num - 500;
            }
            else if(num/400)
            {
                romanNumeral += "CD";
                num = num - 400;
            }
            else if(num/100)
            {
                romanNumeral += "C";
                num = num - 100;
            }
            else if(num/90)
            {
                romanNumeral += "XC";
                num = num - 90;
            }
            else if(num/50)
            {
                romanNumeral += "L";
                num = num - 50;
            }
            else if(num/40)
            {
                romanNumeral += "XL";
                num = num - 40;
            }
            else if(num/10)
            {
                romanNumeral += "X";
                num = num - 10;
            }
            else if(num/9)
            {
                romanNumeral += "IX";
                num = num - 9;
            }
            else if(num/5)
            {
                romanNumeral += "V";
                num = num - 5;
            }
            else if(num/4)
            {
                romanNumeral += "IV";
                num = num - 4;
            }
            else if(num/1)
            {
                romanNumeral += "I";
                num = num - 1;
            }
        }

        /*clear and load layout*/
        system("cls||clear");
        cout << " This program converts integer from 1 - 3000 to Roman Numeral\n\n";
        cout << " Input integer\t: " << oldNum << "\n";
        cout << " Output \t: " << romanNumeral << "\n\n\n";

        cout << " Do you wish to convert again? [y/n]: ";
        cin >> again;
        system("cls||clear");
    }
    return 0;
}