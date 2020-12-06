/* without the use of arrays */

#include<iostream>
#include<string>
#include<limits>
using namespace std;

int main()
{
    cout << " This program converts number from 1-9999 to Word format \n\n";
    cout << " Input number\t: ";
    
    while(!(cin >> number)|| number <= 0 || number > 9999)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " Invalid!\n\n";
        cout << " Input integer\t: ";
    }

    int Thousand = number/1000;
    int Hundred = (number/100)%10;
    int Tens = (number/10)%10;
    int Ones = number%10;
    string word = "";

    switch (Thousand)
    {
        case 9:
            word += "Nine Thousand ";
            break;
        case 8:
            word += "Eight Thousand ";
            break;
        case 7:
            word += "Seven Thousand ";
            break;
        case 6:
            word += "Six Thousand ";
            break;
        case 5:
            word += "Five Thousand ";
            break;
        case 4:
            word += "Four Thousand ";
            break;
        case 3:
            word += "Three Thousand ";
            break;
        case 2:
            word += "Two Thousand ";
            break;
        case 1:
            word += "One Thousand ";
            break;
        default:
            break;
    }

    switch (Hundred)
    {
        case 9:
            word += "Nine Hundred ";
            break;
        case 8:
            word += "Eight Hundred ";
            break;
        case 7:
            word += "Seven Hundred ";
            break;
        case 6:
            word += "Six Hundred ";
            break;
        case 5:
            word += "Five Hundred ";
            break;
        case 4:
            word += "Four Hundred ";
            break;
        case 3:
            word += "Three Hundred ";
            break;
        case 2:
            word += "Two Hundred ";
            break;
        case 1:
            word += "One Hundred ";
            break;
        default:
            break;
    }

    if(number%100>19)
    {
        switch (Tens)
        {
            case 9:
                word += "Ninety ";
                break;
            case 8:
                word += "Eighty ";
                break;
            case 7:
                word += "Seventy ";
                break;
            case 6:
                word += "Sixty ";
                break;
            case 5:
                word += "Fifty ";
                break;
            case 4:
                word += "Fourty ";
                break;
            case 3:
                word += "Thirty ";
                break;
            case 2:
                word += "Twenty ";
                break;
            default:
                break;
        }

        switch (Ones)
        {
            case 9:
                word += "Nine";
                break;
            case 8:
                word += "Eight";
                break;
            case 7:
                word += "Seven";
                break;
            case 6:
                word += "Six";
                break;
            case 5:
                word += "Five";
                break;
            case 4:
                word += "Four";
                break;
            case 3:
                word += "Three";
                break;
            case 2:
                word += "Two";
                break;
            case 1:
                word += "One";
                break;
            default:
                break;
        }

    }
    else
    {
        switch (number%100)
        {
            case 19:
                word += "Nineteen";
                break;
            case 18:
                word += "Eighteen";
                break;
            case 17:
                word += "Seventeen";
                break;
            case 16:
                word += "Sixteen";
                break;
            case 15:
                word += "Fifteen";
                break;
            case 14:
                word += "Fourteen";
                break;
            case 13:
                word += "Thirteen";
                break;
            case 12:
                word += "Twelve";
                break;
            case 11:
                word += "Eleven";
                break;
            case 10:
                word += "Ten";
                break;
            case 9:
                word += "Nine";
                break;
            case 8:
                word += "Eight";
                break;
            case 7:
                word += "Seven";
                break;
            case 6:
                word += "Six";
                break;
            case 5:
                word += "Five";
                break;
            case 4:
                word += "Four";
                break;
            case 3:
                word += "Three";
                break;
            case 2:
                word += "Two";
                break;
            case 1:
                word += "One";
                break;
            default:
                break;
        }
    }

    cout << " Output\t\t: " << word;
    return 0;
};