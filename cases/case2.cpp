#include<iostream>
#include<string>
#include<limits>
using namespace std;

string one[] = { "", "One ", "Two ", "Three ", "Four ",
                "Five ", "Six ", "Seven ", "Eight ",
                "Nine ", "Ten ", "Eleven ", "Twelve ",
                "Thirteen ", "Fourteen ", "Fifteen ",
                "Sixteen ", "Seventeen ", "Eighteen ",
                "Nineteen " };

string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ",
                "Fifty ", "Sixty ", "Seventy ", "Eighty ",
                "Ninety " };

int main()
{
    int number = 0;
    cout << " This program converts number from 1-9999 to Word format \n\n";
    cout << " Input number\t: ";
    
    while(!(cin >> number)|| number <= 0 || number > 9999)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " Invalid!\n\n";
        cout << " Input integer\t: ";
        cin >> number;
    }

    int Thousand = number/1000;
    int Hundred = (number/100)%10;
    int Tens = (number/10)%10;
    int Ones = number%10;
    string str = "";
    if(Thousand)
    {
        str += one[Thousand] + "Thousand ";
    }
    if(Hundred)
    {
        str += one[Hundred] + "Hundred ";
    }
    if (number%100>19)
    {
        str += ten[Tens] + one[Ones];
    }else
    {
        str += one[number%100];
    }
    cout << " Output\t\t: " << str;
    return 0;
};